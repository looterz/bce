#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"

// Default versioning level
#define DEFAULT_VERSIONING_LEVEL 2

#define DGVAR(varName)    if(isNil "BCE_DEBUG_NAMESPACE") then { BCE_DEBUG_NAMESPACE = []; }; if(!(QUOTE(GVAR(varName)) in BCE_DEBUG_NAMESPACE)) then { PUSH(BCE_DEBUG_NAMESPACE, QUOTE(GVAR(varName))); }; GVAR(varName)
#define DVAR(varName)     if(isNil "BCE_DEBUG_NAMESPACE") then { BCE_DEBUG_NAMESPACE = []; }; if(!(QUOTE(varName) in BCE_DEBUG_NAMESPACE)) then { PUSH(BCE_DEBUG_NAMESPACE, QUOTE(varName)); }; varName
#define DFUNC(var1) TRIPLES(ADDON,fnc,var1)
#define DEFUNC(var1,var2) TRIPLES(DOUBLES(PREFIX,var1),fnc,var2)

#define QFUNC(var1) QUOTE(DFUNC(var1))
#define QEFUNC(var1,var2) QUOTE(DEFUNC(var1,var2))

#define PATHTOEF(var1,var2) PATHTOF_SYS(PREFIX,var1,var2)

#define GETVAR_SYS(var1,var2) getVariable [ARR_2(QUOTE(var1),var2)]
#define SETVAR_SYS(var1,var2) setVariable [ARR_2(QUOTE(var1),var2)]
#define SETPVAR_SYS(var1,var2) setVariable [ARR_3(QUOTE(var1),var2,true)]

#define GETVAR(var1,var2,var3) var1 GETVAR_SYS(var2,var3)
#define GETMVAR(var1,var2) missionNamespace GETVAR_SYS(var1,var2)
#define GETUVAR(var1,var2) uiNamespace GETVAR_SYS(var1,var2)
#define GETPRVAR(var1,var2) profileNamespace GETVAR_SYS(var1,var2)
#define GETPAVAR(var1,var2) parsingNamespace GETVAR_SYS(var1,var2)

#define SETVAR(var1,var2,var3) var1 SETVAR_SYS(var2,var3)
#define SETPVAR(var1,var2,var3) var1 SETPVAR_SYS(var2,var3)
#define SETMVAR(var1,var2) missionNamespace SETVAR_SYS(var1,var2)
#define SETUVAR(var1,var2) uiNamespace SETVAR_SYS(var1,var2)
#define SETPRVAR(var1,var2) profileNamespace SETVAR_SYS(var1,var2)
#define SETPAVAR(var1,var2) parsingNamespace SETVAR_SYS(var1,var2)

#define GETGVAR(var1,var2) GETMVAR(GVAR(var1),var2)
#define GETEGVAR(var1,var2,var3) GETMVAR(EGVAR(var1,var2),var3)

#define ARR_SELECT(ARRAY,INDEX,DEFAULT) if (count ARRAY > INDEX) then {ARRAY select INDEX} else {DEFAULT}

#define MACRO_ADDWEAPON(WEAPON,COUNT) class _xx_##WEAPON { \
    weapon = #WEAPON; \
    count = COUNT; \
}

#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
}

#define MACRO_ADDMAGAZINE(MAGAZINE,COUNT) class _xx_##MAGAZINE { \
    magazine = #MAGAZINE; \
    count = COUNT; \
}

#define MACRO_ADDBACKPACK(BACKPACK,COUNT) class _xx_##BACKPACK { \
    backpack = #BACKPACK; \
    count = COUNT; \
}

// item types
#define TYPE_DEFAULT 0
#define TYPE_MUZZLE 101
#define TYPE_OPTICS 201
#define TYPE_FLASHLIGHT 301
#define TYPE_BIPOD 302
#define TYPE_FIRST_AID_KIT 401
#define TYPE_FINS 501 // not implemented
#define TYPE_BREATHING_BOMB 601 // not implemented
#define TYPE_NVG 602
#define TYPE_GOGGLE 603
#define TYPE_SCUBA 604 // not implemented
#define TYPE_HEADGEAR 605
#define TYPE_FACTOR 607
#define TYPE_RADIO 611
#define TYPE_HMD 616
#define TYPE_BINOCULAR 617
#define TYPE_MEDIKIT 619
#define TYPE_TOOLKIT 620
#define TYPE_UAV_TERMINAL 621
#define TYPE_VEST 701
#define TYPE_UNIFORM 801
#define TYPE_BACKPACK 901

#ifdef DISABLE_COMPILE_CACHE
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QUOTE(PATHTOF(functions\DOUBLES(fnc,fncName).sqf))
#else
    #define PREP(fncName) [QUOTE(PATHTOF(functions\DOUBLES(fnc,fncName).sqf)), QFUNC(fncName)] call SLX_XEH_COMPILE_NEW
#endif

#define PREP_MODULE(folder) [] call compile preprocessFileLineNumbers QUOTE(PATHTOF(folder\__PREP__.sqf))

#define HASH_CREATE                    ([] call EFUNC(common,hashCreate))
#define HASH_SET(hash, key, val)    ([hash, key, val, __FILE__, __LINE__] call EFUNC(common,hashSet))
#define HASH_GET(hash, key)            ([hash, key, __FILE__, __LINE__] call EFUNC(common,hashGet))
#define HASH_REM(hash, key)            ([hash, key, __FILE__, __LINE__] call EFUNC(common,hashRem))
#define HASH_HASKEY(hash, key)        ([hash, key, __FILE__, __LINE__] call EFUNC(common,hashHasKey))

#define HASHLIST_CREATELIST(keys)                ([keys] call EFUNC(common,hashListCreateList))
#define HASHLIST_CREATEHASH(hashList)            ([hashList] call EFUNC(common,hashListCreateHash))
#define HASHLIST_SELECT(hashList, index)        ([hashList, index, __FILE__, __LINE__] call EFUNC(common,hashListSelect))
#define HASHLIST_SET(hashList, index, value)    ([hashList, index, value, __FILE__, __LINE__] call EFUNC(common,hashListSet))
#define HASHLIST_PUSH(hashList, value)            ([hashList, value, __FILE__, __LINE__] call EFUNC(common,hashListPush))

// Time functions for accuracy per frame
#define BCE_tickTime (BCE_time + (diag_tickTime - BCE_diagTime))

#define BCE_isHC (!hasInterface && !isDedicated)

#define IDC_STAMINA_BAR 193

//By default CBA's TRACE/LOG/WARNING spawn a buffer, which can cause messages to be logged out of order:
#ifdef CBA_DEBUG_SYNCHRONOUS
    #define CBA_fnc_log { params ["_file","_lineNum","_message"]; diag_log [diag_frameNo, diag_tickTime, time,  _file + ":"+str(_lineNum + 1), _message]; }
#endif

#define BCE_LOG(module,level,message) diag_log text BCE_LOGFORMAT(module,level,message)
#define BCE_LOGFORMAT(module,level,message) FORMAT_2(QUOTE([ACE] (module) %1: %2),level,message)

#define BCE_LOGERROR(message) BCE_LOG(COMPONENT,"ERROR",message)
#define BCE_LOGERROR_1(message,arg1) BCE_LOGERROR(FORMAT_1(message,arg1))
#define BCE_LOGERROR_2(message,arg1,arg2) BCE_LOGERROR(FORMAT_2(message,arg1,arg2))
#define BCE_LOGERROR_3(message,arg1,arg2,arg3) BCE_LOGERROR(FORMAT_3(message,arg1,arg2,arg3))
#define BCE_LOGERROR_4(message,arg1,arg2,arg3,arg4) BCE_LOGERROR(FORMAT_4(message,arg1,arg2,arg3,arg4))
#define BCE_LOGERROR_5(message,arg1,arg2,arg3,arg4,arg5) BCE_LOGERROR(FORMAT_5(message,arg1,arg2,arg3,arg4,arg5))
#define BCE_LOGERROR_6(message,arg1,arg2,arg3,arg4,arg5,arg6) BCE_LOGERROR(FORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6))
#define BCE_LOGERROR_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7) BCE_LOGERROR(FORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7))
#define BCE_LOGERROR_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) BCE_LOGERROR(FORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8))

#define BCE_ERRORFORMAT(message) BCE_LOGFORMAT(COMPONENT,"ERROR",message)
#define BCE_ERRORFORMAT_1(message,arg1) BCE_ERRORFORMAT(FORMAT_1(message,arg1))
#define BCE_ERRORFORMAT_2(message,arg1,arg2) BCE_ERRORFORMAT(FORMAT_2(message,arg1,arg2))
#define BCE_ERRORFORMAT_3(message,arg1,arg2,arg3) BCE_ERRORFORMAT(FORMAT_3(message,arg1,arg2,arg3))
#define BCE_ERRORFORMAT_4(message,arg1,arg2,arg3,arg4) BCE_ERRORFORMAT(FORMAT_4(message,arg1,arg2,arg3,arg4))
#define BCE_ERRORFORMAT_5(message,arg1,arg2,arg3,arg4,arg5) BCE_ERRORFORMAT(FORMAT_5(message,arg1,arg2,arg3,arg4,arg5))
#define BCE_ERRORFORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6) BCE_ERRORFORMAT(FORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6))
#define BCE_ERRORFORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7) BCE_ERRORFORMAT(FORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7))
#define BCE_ERRORFORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) BCE_ERRORFORMAT(FORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8))

#define BCE_LOGWARNING(message) BCE_LOG(COMPONENT,"WARNING",message)
#define BCE_LOGWARNING_1(message,arg1) BCE_LOGWARNING(FORMAT_1(message,arg1))
#define BCE_LOGWARNING_2(message,arg1,arg2) BCE_LOGWARNING(FORMAT_2(message,arg1,arg2))
#define BCE_LOGWARNING_3(message,arg1,arg2,arg3) BCE_LOGWARNING(FORMAT_3(message,arg1,arg2,arg3))
#define BCE_LOGWARNING_4(message,arg1,arg2,arg3,arg4) BCE_LOGWARNING(FORMAT_4(message,arg1,arg2,arg3,arg4))
#define BCE_LOGWARNING_5(message,arg1,arg2,arg3,arg4,arg5) BCE_LOGWARNING(FORMAT_5(message,arg1,arg2,arg3,arg4,arg5))
#define BCE_LOGWARNING_6(message,arg1,arg2,arg3,arg4,arg5,arg6) BCE_LOGWARNING(FORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6))
#define BCE_LOGWARNING_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7) BCE_LOGWARNING(FORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7))
#define BCE_LOGWARNING_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) BCE_LOGWARNING(FORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8))

#define BCE_WARNINGFORMAT(message) BCE_LOGFORMAT(COMPONENT,"WARNING",message)
#define BCE_WARNINGFORMAT_1(message,arg1) BCE_WARNINGFORMAT(FORMAT_1(message,arg1))
#define BCE_WARNINGFORMAT_2(message,arg1,arg2) BCE_WARNINGFORMAT(FORMAT_2(message,arg1,arg2))
#define BCE_WARNINGFORMAT_3(message,arg1,arg2,arg3) BCE_WARNINGFORMAT(FORMAT_3(message,arg1,arg2,arg3))
#define BCE_WARNINGFORMAT_4(message,arg1,arg2,arg3,arg4) BCE_WARNINGFORMAT(FORMAT_4(message,arg1,arg2,arg3,arg4))
#define BCE_WARNINGFORMAT_5(message,arg1,arg2,arg3,arg4,arg5) BCE_WARNINGFORMAT(FORMAT_5(message,arg1,arg2,arg3,arg4,arg5))
#define BCE_WARNINGFORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6) BCE_WARNINGFORMAT(FORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6))
#define BCE_WARNINGFORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7) BCE_WARNINGFORMAT(FORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7))
#define BCE_WARNINGFORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) BCE_WARNINGFORMAT(FORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8))

#define BCE_LOGINFO(message) BCE_LOG(COMPONENT,"INFO",message)
#define BCE_LOGINFO_1(message,arg1) BCE_LOGINFO(FORMAT_1(message,arg1))
#define BCE_LOGINFO_2(message,arg1,arg2) BCE_LOGINFO(FORMAT_2(message,arg1,arg2))
#define BCE_LOGINFO_3(message,arg1,arg2,arg3) BCE_LOGINFO(FORMAT_3(message,arg1,arg2,arg3))
#define BCE_LOGINFO_4(message,arg1,arg2,arg3,arg4) BCE_LOGINFO(FORMAT_4(message,arg1,arg2,arg3,arg4))
#define BCE_LOGINFO_5(message,arg1,arg2,arg3,arg4,arg5) BCE_LOGINFO(FORMAT_5(message,arg1,arg2,arg3,arg4,arg5))
#define BCE_LOGINFO_6(message,arg1,arg2,arg3,arg4,arg5,arg6) BCE_LOGINFO(FORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6))
#define BCE_LOGINFO_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7) BCE_LOGINFO(FORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7))
#define BCE_LOGINFO_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) BCE_LOGINFO(FORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8))

#define BCE_INFOFORMAT(message) BCE_LOGFORMAT(COMPONENT,"INFO",message)
#define BCE_INFOFORMAT_1(message,arg1) BCE_INFOFORMAT(FORMAT_1(message,arg1))
#define BCE_INFOFORMAT_2(message,arg1,arg2) BCE_INFOFORMAT(FORMAT_2(message,arg1,arg2))
#define BCE_INFOFORMAT_3(message,arg1,arg2,arg3) BCE_INFOFORMAT(FORMAT_3(message,arg1,arg2,arg3))
#define BCE_INFOFORMAT_4(message,arg1,arg2,arg3,arg4) BCE_INFOFORMAT(FORMAT_4(message,arg1,arg2,arg3,arg4))
#define BCE_INFOFORMAT_5(message,arg1,arg2,arg3,arg4,arg5) BCE_INFOFORMAT(FORMAT_5(message,arg1,arg2,arg3,arg4,arg5))
#define BCE_INFOFORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6) BCE_INFOFORMAT(FORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6))
#define BCE_INFOFORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7) BCE_INFOFORMAT(FORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7))
#define BCE_INFOFORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) BCE_INFOFORMAT(FORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8))

#define BCE_LOGDEBUG(message) BCE_LOG(COMPONENT,"DEBUG",message)
#define BCE_LOGDEBUG_1(message,arg1) BCE_LOGDEBUG(FORMAT_1(message,arg1))
#define BCE_LOGDEBUG_2(message,arg1,arg2) BCE_LOGDEBUG(FORMAT_2(message,arg1,arg2))
#define BCE_LOGDEBUG_3(message,arg1,arg2,arg3) BCE_LOGDEBUG(FORMAT_3(message,arg1,arg2,arg3))
#define BCE_LOGDEBUG_4(message,arg1,arg2,arg3,arg4) BCE_LOGDEBUG(FORMAT_4(message,arg1,arg2,arg3,arg4))
#define BCE_LOGDEBUG_5(message,arg1,arg2,arg3,arg4,arg5) BCE_LOGDEBUG(FORMAT_5(message,arg1,arg2,arg3,arg4,arg5))
#define BCE_LOGDEBUG_6(message,arg1,arg2,arg3,arg4,arg5,arg6) BCE_LOGDEBUG(FORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6))
#define BCE_LOGDEBUG_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7) BCE_LOGDEBUG(FORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7))
#define BCE_LOGDEBUG_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) BCE_LOGDEBUG(FORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8))

#define BCE_DEBUGFORMAT(message) BCE_LOGFORMAT(COMPONENT,"DEBUG",message)
#define BCE_DEBUGFORMAT_1(message,arg1) BCE_DEBUGFORMAT(FORMAT_1(message,arg1))
#define BCE_DEBUGFORMAT_2(message,arg1,arg2) BCE_DEBUGFORMAT(FORMAT_2(message,arg1,arg2))
#define BCE_DEBUGFORMAT_3(message,arg1,arg2,arg3) BCE_DEBUGFORMAT(FORMAT_3(message,arg1,arg2,arg3))
#define BCE_DEBUGFORMAT_4(message,arg1,arg2,arg3,arg4) BCE_DEBUGFORMAT(FORMAT_4(message,arg1,arg2,arg3,arg4))
#define BCE_DEBUGFORMAT_5(message,arg1,arg2,arg3,arg4,arg5) BCE_DEBUGFORMAT(FORMAT_5(message,arg1,arg2,arg3,arg4,arg5))
#define BCE_DEBUGFORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6) BCE_DEBUGFORMAT(FORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6))
#define BCE_DEBUGFORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7) BCE_DEBUGFORMAT(FORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7))
#define BCE_DEBUGFORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) BCE_DEBUGFORMAT(FORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8))

#define BCE_DEPRECATED(arg1,arg2,arg3) BCE_LOGWARNING_3("%1 is deprecated. Support will be dropped in version %2. Replaced by: %3",arg1,arg2,arg3)

#define PFORMAT_10(MESSAGE,A,B,C,D,E,F,G,H,I,J) \
    format ['%1: A=%2, B=%3, C=%4, D=%5, E=%6, F=%7, G=%8, H=%9, I=%10 J=%11', MESSAGE, RETNIL(A), RETNIL(B), RETNIL(C), RETNIL(D), RETNIL(E), RETNIL(F), RETNIL(G), RETNIL(H), RETNIL(I), RETNIL(J)]
#ifdef DEBUG_MODE_FULL
#define TRBCE_10(MESSAGE,A,B,C,D,E,F,G,H,I,J) \
    [THIS_FILE_, __LINE__, PFORMAT_10(MESSAGE,A,B,C,D,E,F,G,H,I,J)] call CBA_fnc_log
#else
   #define TRBCE_10(MESSAGE,A,B,C,D,E,F,G,H,I,J) /* disabled */
#endif
