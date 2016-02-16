#!/usr/bin/env python3

import os
import sys
import subprocess

######## GLOBALS #########
MAINPREFIX = "z"
PREFIX = "bce_"
##########################

# Special care is taken for WarFXPE, as it must retain the authors naming convention to function correctly.

def mod_time(path):
    if not os.path.isdir(path):
        return os.path.getmtime(path)
    maxi = os.path.getmtime(path)
    for p in os.listdir(path):
        maxi = max(mod_time(os.path.join(path, p)), maxi)
    return maxi


def check_for_changes(addonspath, module):
    formatPath = "{}{}.pbo".format(PREFIX,module)
    if module == "WarFXPE":
        formatPath = "{}.pbo".format(module)
    if not os.path.exists(os.path.join(addonspath, formatPath)):
        return True
    return mod_time(os.path.join(addonspath, module)) > mod_time(os.path.join(addonspath, formatPath))

def check_for_obsolete_pbos(addonspath, file):
    module = file[len(PREFIX):-4]
    if file == "WarFXPE.pbo":
        module = file[:-4]
    if not os.path.exists(os.path.join(addonspath, module)):
        return True
    return False

def main():
    print("""
  ####################
  # BCE Debug Build  #
  ####################
""")

    scriptpath = os.path.realpath(__file__)
    projectpath = os.path.dirname(os.path.dirname(scriptpath))
    addonspath = os.path.join(projectpath, "addons")

    os.chdir(addonspath)

    made = 0
    failed = 0
    skipped = 0
    removed = 0

    for file in os.listdir(addonspath):
        if os.path.isfile(file):
            if check_for_obsolete_pbos(addonspath, file):
                removed += 1
                print("  Removing obsolete file => " + file)
                os.remove(file)
    print("")

    for p in os.listdir(addonspath):
        path = os.path.join(addonspath, p)
        if not os.path.isdir(path):
            continue
        if p[0] == ".":
            continue
        if not check_for_changes(addonspath, p):
            skipped += 1
            print("  Skipping {}.".format(p))
            continue

        print("# Making {} ...".format(p))

        try:
            formatPath = "-@={}\\{}\\addons\\{}".format(MAINPREFIX,PREFIX.rstrip("_"),p)
            formatName = "{}{}.pbo".format(PREFIX,p)

            if p == "WarFXPE":
                formatPath = "-@=WarFXPE"
                formatName = "WarFXPE.pbo"

            subprocess.check_output([
                "makepbo",
                "-NUP",
                formatPath,
                p,
                formatName
            ], stderr=subprocess.STDOUT)
        except:
            failed += 1
            print("  Failed to make {}.".format(p))
        else:
            made += 1
            print("  Successfully made {}.".format(p))

    print("\n# Done.")
    print("  Made {}, skipped {}, removed {}, failed to make {}.".format(made, skipped, removed, failed))


if __name__ == "__main__":
    sys.exit(main())
