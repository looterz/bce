class CfgVehicles
{
	class Land;
	class LandVehicle;
	class car: LandVehicle
	{
		class DestructionEffects
		{
			class Light1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=3;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
				type="Fire";
			};
			class Fire1
			{
				simulation="particles";
				type="ObjectDestructionFire1Small";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=2;
			};
			class Smoke1
			{
				simulation="particles";
				type="ObjectDestructionSmokeSmall";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=2.5;
			};
			class Sparks1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class FireSparks1
			{
				simulation="particles";
				type="FireSparks";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=2.8;
			};
			class Fire2
			{
				simulation="particles";
				type="ObjectDestructionFire2Small";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class Smoke1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2Small";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class Smoke2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=3.2;
			};
		};
	};
	class tank: LandVehicle
	{
		class DestructionEffects
		{
			class LightFlames1
			{
				simulation="particles";
				type="FlameLightBC";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0.5;
				enabled="distToWater";
			};
			class LightBig1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=2;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
				type="Fire";
			};
			class FireBig1
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1
			{
				simulation="particles";
				type="ObjectDestructionSmoke";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SparksBig1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class FireSparksBig1
			{
				simulation="particles";
				type="FireSparks";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=2.8;
			};
			class FireBig2
			{
				simulation="particles";
				type="ObjectDestructionFire2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SmokeBig2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=3.2;
			};
		};
	};
	class B_Truck_01_mover_F;
	class B_Truck_01_fuel_F: B_Truck_01_mover_F
	{
		class DestructionEffects
		{
			class Light1
			{
				simulation = "light";
				type = "ObjectDestructionLightFuel";
				position = "destructionEffect1";
				intensity = 1;
				interval = 1;
				lifeTime = 0;
			};
            class Smoke1
			{
				simulation = "particles";
				type = "FuelTruck_Explosion";
				position = "destructionEffect1";
				intensity = 1;
				interval = 1;
				lifeTime = 0.001;
			};
			class LightFlames1
			{
				simulation="particles";
				type="FlameLightBC";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0.5;
				enabled="distToWater";
			};
			class LightBig1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=2;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
				type="Fire";
			};
			class FireBig1
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=2;
			};
			class SmokeBig1
			{
				simulation="particles";
				type="ObjectDestructionSmoke";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SparksBig1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class FireSparksBig1
			{
				simulation="particles";
				type="FireSparks";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=2.8;
			};
			class FireBig2
			{
				simulation="particles";
				type="ObjectDestructionFire2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SmokeBig2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=3.2;
			};
		};
	};
	class B_Truck_01_ammo_F: B_Truck_01_mover_F
	{
		class DestructionEffects
		{
			class Light1
			{
				simulation = "light";
				type = "ObjectDestructionLight";
				position = "destructionEffect1";
				intensity = 1;
				interval = 1;
				lifeTime = 0.5;
			};
			class Smoke1
			{
				simulation = "particles";
				type = "AmmoTruck_Explosion";
				position = "destructionEffect1";
				intensity = 1;
				interval = 1;
				lifeTime = 0.001;
			};
			class LightFlames1
			{
				simulation="particles";
				type="FlameLightBC";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0.5;
				enabled="distToWater";
			};
			class LightBig1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=2;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
				type="Fire";
			};
			class FireBig1
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1
			{
				simulation="particles";
				type="ObjectDestructionSmoke";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SparksBig1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class FireSparksBig1
			{
				simulation="particles";
				type="FireSparks";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=2.8;
			};
			class FireBig2
			{
				simulation="particles";
				type="ObjectDestructionFire2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SmokeBig2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=3.2;
			};
		};
	};
	class Truck_02_base_F;
	class Truck_02_fuel_base_F: Truck_02_base_F
	{
		class DestructionEffects
		{
			class Light1
			{
				simulation = "light";
				type = "ObjectDestructionLightFuel";
				position = "destructionEffect1";
				intensity = 1;
				interval = 1;
				lifeTime = 0.0;
			};
			class Smoke1
			{
				simulation = "particles";
				type = "FuelTruck_Explosion";
				position = "destructionEffect1";
				intensity = 1;
				interval = 1;
				lifeTime = 0.001;
			};
			class LightFlames1
			{
				simulation="particles";
				type="FlameLightBC";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0.5;
				enabled="distToWater";
			};
			class LightBig1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=2;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
				type="Fire";
			};
			class FireBig1
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1
			{
				simulation="particles";
				type="ObjectDestructionSmoke";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SparksBig1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class FireSparksBig1
			{
				simulation="particles";
				type="FireSparks";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=2.8;
			};
			class FireBig2
			{
				simulation="particles";
				type="ObjectDestructionFire2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SmokeBig2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=3.2;
			};
		};
	};
	class Truck_02_Ammo_base_F: Truck_02_base_F
	{
		class DestructionEffects
		{
			class Light1
			{
				simulation = "light";
				type = "ObjectDestructionLight";
				position = "destructionEffect1";
				intensity = 1;
				interval = 1;
				lifeTime = 0.5;
			};
			class Smoke1
			{
				simulation = "particles";
				type = "AmmoTruck_Explosion";
				position = "destructionEffect1";
				intensity = 1;
				interval = 1;
				lifeTime = 0.001;
			};
			class LightFlames1
			{
				simulation="particles";
				type="FlameLightBC";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0.5;
				enabled="distToWater";
			};
			class LightBig1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=2;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
				type="Fire";
			};
			class FireBig1
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1
			{
				simulation="particles";
				type="ObjectDestructionSmoke";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SparksBig1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0;
			};
			class FireSparksBig1
			{
				simulation="particles";
				type="FireSparks";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=2.8;
			};
			class FireBig2
			{
				simulation="particles";
				type="ObjectDestructionFire2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SmokeBig2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=3.2;
			};
		};
	};

	class NonStrategic;
	class CraterLong: NonStrategic
	{
		model="\A3\data_f\ParticleEffects\CraterLong\CraterLong.p3d";
		mapSize=2;
		accuracy=1000;
		destrType="DestructNo";
		armor=20;
	};
	class CraterLong_small: CraterLong
	{
		model="\A3\data_f\ParticleEffects\CraterLong\CraterLong_small.p3d";
		mapSize=1;
	};
};
class AirDestructionEffects
{
	class LightBig1
	{
		simulation="light";
		type="ObjectDestructionLight";
		position="0,0,0";
		intensity=1;
		interval=1;
		start="damage - 0.99";
		enabled="distToWater";
		lifeTime=200;
	};
	class Sound
	{
		simulation="sound";
		position="destructionEffect1";
		intensity=1;
		interval=1;
		type="Fire";
		start="damage - 0.99";
		lifeTime=200;
	};
	class FireBig1
	{
		simulation="particles";
		type="AirObjectDestructionFire";
		position="destructionEffect1";
		intensity=0.15000001;
		interval=1;
		start="damage - 0.99";
		lifeTime=200;
	};
	class FireLarge
	{
		simulation="particles";
		type="AirObjectDestructionFireLarge";
		position="destructionEffect1";
		intensity=0.15000001;
		interval=1;
		start="damage - 0.99";
		lifeTime=1;
	};
	class Parts
	{
		simulation="particles";
		type="AirObjectDestructionParts";
		position="destructionEffect1";
		intensity=0.15000001;
		interval=1;
		start="damage - 0.99";
		lifeTime=1;
	};
	class Fireball
	{
		simulation="particles";
		type="AirObjectDestructionFireball";
		position="destructionEffect1";
		intensity=0.15000001;
		interval=1;
		start="damage - 0.99";
		lifeTime=1;
	};
	class Sparks
	{
		simulation="particles";
		type="AirObjectDestructionSparks";
		position="destructionEffect1";
		intensity=0.15000001;
		interval=1;
		start="damage - 0.99";
		lifeTime=0.5;
	};
	class FireBig3
	{
		simulation="particles";
		type="AirObjectDestructionFire2";
		position="destructionEffect1";
		intensity=1;
		interval=1;
		start="damage - 0.99";
		lifeTime=2;
	};
	class FireBig4
	{
		simulation="particles";
		type="AirObjectDestructionFire3";
		position="destructionEffect1";
		intensity=1;
		interval=1;
		start="damage - 0.99";
		lifeTime=2;
	};
	class SmokeBig1
	{
		simulation="particles";
		type="AirObjectDestructionSmoke";
		position="destructionEffect1";
		intensity=0.15000001;
		interval=1;
		start="damage - 0.99";
		lifeTime=100;
	};
	class FireSparksBig1
	{
		simulation="particles";
		type="AirFireSparks";
		position="destructionEffect1";
		intensity=1;
		interval=1;
		start="damage - 0.99";
		lifeTime=200;
	};
	class FireBig2
	{
		simulation="particles";
		type="AirObjectDestructionFire";
		position="destructionEffect1";
		intensity=0.15000001;
		interval=1;
		start="damage - 0.99";
		lifeTime=200;
	};
	class SmokeBig1_2
	{
		simulation="particles";
		type="AirObjectDestructionSmoke1";
		position="destructionEffect1";
		intensity=0.15000001;
		interval=1;
		start="damage - 0.99";
		lifeTime=200;
	};
};
class AircraftDebris
{
	class AirObjectDestructionSmokeTrail
	{
		simulation="particles";
		type="AirObjectDestructionFireTrail";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=3;
	};
	class LightBig1
	{
		simulation="light";
		type="ObjectDestructionLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=200;
	};
	class AirObjectDestructionSmokeTrail2
	{
		simulation="particles";
		type="AirObjectDestructionSmokeTrail";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=3;
	};
};
class AircraftDebris2
{
	class AirObjectDestructionSmokeTrail
	{
		simulation="particles";
		type="AirObjectDestructionFireTrail2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=3;
	};
	class AirObjectDestructionSmokeTrail2
	{
		simulation="particles";
		type="AirObjectDestructionSmokeTrail2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=3;
	};
};
class AircraftFireball
{
	class AircraftFireball2
	{
		simulation="particles";
		type="AirObjectDestructionFireLarge";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=3;
	};
};
class 155mm_Smoke
{
	class Smoke_Trail_Artillery_Emitter
	{
		simulation="particles";
		type="Smoke_Trail_Artillery_Emitter_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_Trail_Artillery_Emit
	{
		simulation="particles";
		type="Smoke_Trail_Artillery_Emitter_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class DirtArty
	{
		simulation="particles";
		type="DirtArty";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class DirtBig
	{
		simulation="particles";
		type="DirtBig";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Dirt
	{
		simulation="particles";
		type="DirtMed";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class BattleDust_02
	{
		simulation="particles";
		type="BattleDust_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 105_stones
	{
		simulation="particles";
		type="105_stones";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.3;
	};
};
class 80mm_Smoke
{
	class Smoke_Trail_TankRound_Emitter
	{
		simulation="particles";
		type="Smoke_Trail_TankRound_Emitter_01";
		position[]={0,0,0};
		intensity=0.2;
		interval=1;
		lifeTime=0.025;
	};
	class Smoke_Trail_TankRound_Emitter2
	{
		simulation="particles";
		type="Smoke_Trail_TankRound_Emitter_02";
		position[]={0,0,0};
		intensity=0.2;
		interval=1;
		lifeTime=0.025;
	};
	class Smoke_Trail_TankRound_Emitter3
	{
		simulation="particles";
		type="Smoke_Trail_TankRound_Emitter";
		position[]={0,0,0};
		intensity=0.2;
		interval=1;
		lifeTime=0.025;
	};
	class Smoke_Trail_TankRound_Emitter4
	{
		simulation="particles";
		type="Smoke_Trail_TankRound_Emitter_BaseSmoke";
		position[]={0,0,0};
		intensity=0.2;
		interval=1;
		lifeTime=0.025;
	};
	class hydra_smoke_up_02
	{
		simulation="particles";
		type="hydra_smoke_up_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class hydra_smoke_up_03
	{
		simulation="particles";
		type="hydra_smoke_up_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class hydra_smoke_up_04
	{
		simulation="particles";
		type="hydra_smoke_up_04";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Dirt
	{
		simulation="particles";
		type="DirtRocket";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Stones
	{
		simulation="particles";
		type="Hydra_Explode_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_02";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class MK82_Smoke
{
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_02";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class mk82_smoke_01
	{
		simulation="particles";
		type="mk82_smoke_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class mk82_smoke_02
	{
		simulation="particles";
		type="mk82_smoke_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class mk82_smoke_01_ground
	{
		simulation="particles";
		type="mk82_smoke_01_ground";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class mk82_smoke_02_ground
	{
		simulation="particles";
		type="mk82_smoke_02_ground";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class mk82_smoke_03_ground
	{
		simulation="particles";
		type="mk82_smoke_03_ground";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class mk82_smoke_04_ground
	{
		simulation="particles";
		type="mk82_smoke_04_ground";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class DirtImpact_MK82_Stones
	{
		simulation="particles";
		type="DirtImpact_MK82_Stones";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class dirtmassive
	{
		simulation="particles";
		type="dirtmassive";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class DirtMK82
	{
		simulation="particles";
		type="DirtMK82";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_TrailBC1
	{
		simulation="particles";
		type="Smoke_TrailBC1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};

	class Smoke_TrailBC2
	{
		simulation="particles";
		type="Smoke_TrailBC2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class hydra_smoke_up_01
	{
		simulation="particles";
		type="hydra_smoke_up_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class hydra_smoke_up_02
	{
		simulation="particles";
		type="hydra_smoke_up_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class hydra_smoke_up_03
	{
		simulation="particles";
		type="hydra_smoke_up_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class hydra_smoke_up_04
	{
		simulation="particles";
		type="hydra_smoke_up_04";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class ATMissileExplosion
{
	class HellfireLight_01
	{
		simulation="light";
		type="Hellfire_light_source";
		position[]={0,0,5};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class HellfireLight_02
	{
		simulation="light";
		type="Hellfire_light_source_02";
		position[]={0,0,5};
		intensity=1;
		interval=1;
		lifeTime=0.4;
	};
	class Hellfire_Explosion_01
	{
		simulation="particles";
		type="Hellfire_Explosion_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Hellfire_Explosion_02
	{
		simulation="particles";
		type="Hellfire_Explosion_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Hellfire_Smoke_Trail_Emit_01
	{
		simulation="particles";
		type="Hellfire_Smoke_Trail_Emit_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Hellfire_Blast_Glow
	{
		simulation="particles";
		type="Hellfire_Blast_Glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class Sparks_med
	{
		simulation="particles";
		type="sparks_med";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Shockwave_medium
	{
		simulation="particles";
		type="Shockwave_medium";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.15;
	};
	class LightExp
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {0,1.5,0};
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.0;
	};
	class Explosion1
	{
		simulation = "particles";
		type = "ExplosionParticles";
		position[] = {0,0,0};
		intensity = 3;
		interval = 1;
		lifeTime = 0.0;
	};
	class SmallSmoke1
	{
		simulation = "particles";
		type = "CloudMedDark";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0;
	};
};
class ATMissileCrater
{
	class MissileCircleDust
	{
		simulation = "particles";
		type = "CircleDustMed";
		enabled = "distToWater interpolate [0.2,0.21,-1,1]";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.0;
	};
	class RocketSmokeTrails1H
	{
		simulation = "particles";
		type = "RocketSmokeTrails";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.0;
		qualityLevel = 2;
	};
	class RocketSmokeTrails1M
	{
		simulation = "particles";
		type = "RocketSmokeTrails";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.0;
		qualityLevel = 1;
	};
	class RocketSmokeTrails2H
	{
		simulation = "particles";
		type = "RocketSmokeTrails2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.0;
		qualityLevel = 2;
	};
	class RocketSmokeTrails2M
	{
		simulation = "particles";
		type = "RocketSmokeTrails2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.0;
		qualityLevel = 1;
	};
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_Trail_Rocket_Emitter
	{
		simulation="particles";
		type="Smoke_Trail_Rocket_Emitter_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class hydra_smoke_up_01
	{
		simulation="particles";
		type="hydra_smoke_up_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class hydra_smoke_up_02
	{
		simulation="particles";
		type="hydra_smoke_up_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class hydra_smoke_up_03
	{
		simulation="particles";
		type="hydra_smoke_up_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class hydra_smoke_up_04
	{
		simulation="particles";
		type="hydra_smoke_up_04";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Dirt
	{
		simulation="particles";
		type="DirtRocket";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Stones
	{
		simulation="particles";
		type="Hydra_Explode_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class HERocketCrater
{
	class MissileCircleDust
	{
		simulation = "particles";
		type = "CircleDustMed";
		enabled = "distToWater interpolate [0.2,0.21,-1,1]";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.0;
	};
	class Smoke_Trail_TankRound_Emitter
	{
		simulation="particles";
		type="Smoke_Trail_TankRound_Emitter_01";
		position[]={0,0,0};
		intensity=0.2;
		interval=1;
		lifeTime=0.025;
	};
	class Smoke_Trail_TankRound_Emitter2
	{
		simulation="particles";
		type="Smoke_Trail_TankRound_Emitter_02";
		position[]={0,0,0};
		intensity=0.2;
		interval=1;
		lifeTime=0.025;
	};
	class Smoke_Trail_TankRound_Emitter3
	{
		simulation="particles";
		type="Smoke_Trail_TankRound_Emitter";
		position[]={0,0,0};
		intensity=0.2;
		interval=1;
		lifeTime=0.025;
	};
	class Smoke_Trail_TankRound_Emitter4
	{
		simulation="particles";
		type="Smoke_Trail_TankRound_Emitter_BaseSmoke";
		position[]={0,0,0};
		intensity=0.2;
		interval=1;
		lifeTime=0.025;
	};
	class hydra_smoke_up_02
	{
		simulation="particles";
		type="hydra_smoke_up_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class hydra_smoke_up_03
	{
		simulation="particles";
		type="hydra_smoke_up_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class hydra_smoke_up_04
	{
		simulation="particles";
		type="hydra_smoke_up_04";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Dirt
	{
		simulation="particles";
		type="DirtRocket";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Stones
	{
		simulation="particles";
		type="Hydra_Explode_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_02";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class AAMissileExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLightFast";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class LightExp2
	{
		simulation="light";
		type="ExploLightFast_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class AA_Explosion_01
	{
		simulation="particles";
		type="AA_Explosion_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class AA_Explosion_02
	{
		simulation="particles";
		type="AA_Explosion_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Hellfire_Blast_Glow
	{
		simulation="particles";
		type="Hellfire_Blast_Glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Sparks_med
	{
		simulation="particles";
		type="sparks_med";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class AA_SmokeHit_01
	{
		simulation="particles";
		type="AA_SmokeHit_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class AA_SmokeHit_02
	{
		simulation="particles";
		type="AA_SmokeHit_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class AA_SmokeHit_03
	{
		simulation="particles";
		type="AA_SmokeHit_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class AA_SmokeHit_04
	{
		simulation="particles";
		type="AA_SmokeHit_04";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Explosion1
	{
		simulation = "particles";
		type = "ExplosionParticles";
		position[] = {0,0,0};
		intensity = 3;
		interval = 1;
		lifeTime = 0.0;
	};
	class SmallSmoke1
	{
		simulation = "particles";
		type = "CloudMedLight";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0;
	};
};
class AAMissileCrater
{
	class 25mmSmoke1
	{
		simulation="particles";
		type="25mm_Smoke_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mmSmoke2
	{
		simulation="particles";
		type="25mm_Smoke_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class GrenadeSmoke1
	{
		simulation="particles";
		type="GrenadeSmoke1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class MissileCircleDust
	{
		simulation = "particles";
		type = "CircleDustMed";
		enabled = "distToWater interpolate [0.2,0.21,-1,1]";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.0;
	};
	class RocketSmokeTrails1H
	{
		simulation = "particles";
		type = "RocketSmokeTrails";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0;
		qualityLevel = 2;
	};
	class RocketSmokeTrails1M
	{
		simulation = "particles";
		type = "RocketSmokeTrails";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0;
		qualityLevel = 1;
	};
	class RocketSmokeTrails2H
	{
		simulation = "particles";
		type = "RocketSmokeTrails2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0;
		qualityLevel = 2;
	};
	class RocketSmokeTrails2M
	{
		simulation = "particles";
		type = "RocketSmokeTrails2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0;
		qualityLevel = 1;
	};
	class CircleDust
	{
		simulation = "particles";
		type = "CircleDustMed";
		enabled = "distToWater interpolate [0.2,0.21,-1,1]";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0;
	};
};
class ATRocketExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLightFastSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.05;
	};
	class LightExp2
	{
		simulation="light";
		type="ExploLightFastSmall2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.025;
	};
	class M136_Explode_01
	{
		simulation="particles";
		type="M136_Explode_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class M136_Explode_02
	{
		simulation="particles";
		type="M136_Explode_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class 30mmFlashGlow
	{
		simulation="particles";
		type="30mm_Blast_Glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Sparks_med
	{
		simulation="particles";
		type="sparks_med";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class 25mmSmoke1
	{
		simulation="particles";
		type="25mm_Smoke_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mmSmoke2
	{
		simulation="particles";
		type="25mm_Smoke_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mmSmoke3
	{
		simulation="particles";
		type="25mm_Smoke_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class GrenadeSmoke1
	{
		simulation="particles";
		type="GrenadeSmoke1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class BattleDust_02
	{
		simulation="particles";
		type="BattleDust_02";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};

	class Explosion1
	{
		simulation = "particles";
		type = "ExplosionParticles";
		position[] = {0,0,0};
		intensity = 3;
		interval = 1;
		lifeTime = 0.0;
	};
	class SmallSmoke1
	{
		simulation = "particles";
		type = "CloudBigLight";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0;
	};
};
class ATRocketCrater{};
class BombExplosion
{
	class LightExp
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {0,1.5,0};
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.0;
	};
	class BombExp1
	{
		simulation = "particles";
		type = "BombExp1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.0;
	};
	class mk82_light
	{
		simulation="light";
		type="mk82_light_source";
		position[]={0,0,5};
		intensity=1;
		interval=1;
		lifeTime=0.08;
	};
	class mk82_light_02
	{
		simulation="light";
		type="mk82_light_source_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class mk82_explosion
	{
		simulation="particles";
		type="mk82_explosion";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class airblast
	{
		simulation="particles";
		type="airblast";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class explosion_glow_01
	{
		simulation="particles";
		type="explosion_glow_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class mk82_glow
	{
		simulation="particles";
		type="mk82_glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class sparks_large
	{
		simulation="particles";
		type="sparks_large";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
		qualityLevel=2;
	};
	class sparks_huge
	{
		simulation="particles";
		type="sparks_huge";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
		qualityLevel=2;
	};

	class shockwave
	{
		simulation="particles";
		type="shockwave_large";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=2;
	};
};
class BombCrater
{
	class BombSmk1
	{
		simulation = "particles";
		type = "BombSmk1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0;
	};
	class BombSmk2
	{
		simulation = "particles";
		type = "BombSmk2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0;
	};
	class BombSmk3
	{
		simulation = "particles";
		type = "BombSmk3";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0;
	};
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_02";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class mk82_smoke_01
	{
		simulation="particles";
		type="mk82_smoke_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class mk82_smoke_02
	{
		simulation="particles";
		type="mk82_smoke_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class mk82_smoke_01_ground
	{
		simulation="particles";
		type="mk82_smoke_01_ground";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class mk82_smoke_02_ground
	{
		simulation="particles";
		type="mk82_smoke_02_ground";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class mk82_smoke_03_ground
	{
		simulation="particles";
		type="mk82_smoke_03_ground";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class mk82_smoke_04_ground
	{
		simulation="particles";
		type="mk82_smoke_04_ground";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class DirtImpact_MK82_Stones
	{
		simulation="particles";
		type="DirtImpact_MK82_Stones";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class dirtmassive
	{
		simulation="particles";
		type="dirtmassive";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class DirtMK82
	{
		simulation="particles";
		type="DirtMK82";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_TrailBC1
	{
		simulation="particles";
		type="Smoke_TrailBC1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_TrailBC2
	{
		simulation="particles";
		type="Smoke_TrailBC2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_Trail_Rocket_Emitter
	{
		simulation="particles";
		type="Smoke_Trail_Rocket_Emitter_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class hydra_smoke_up_01
	{
		simulation="particles";
		type="hydra_smoke_up_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class hydra_smoke_up_02
	{
		simulation="particles";
		type="hydra_smoke_up_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class hydra_smoke_up_03
	{
		simulation="particles";
		type="hydra_smoke_up_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class hydra_smoke_up_04
	{
		simulation="particles";
		type="hydra_smoke_up_04";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class AA_Explode
{
	class LightExp
	{
		simulation="light";
		type="ExploLightFast";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class LightExp2
	{
		simulation="light";
		type="ExploLightFast_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class AA_Explosion_01
	{
		simulation="particles";
		type="AA_Explosion_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class AA_Explosion_02
	{
		simulation="particles";
		type="AA_Explosion_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Hellfire_Blast_Glow
	{
		simulation="particles";
		type="Hellfire_Blast_Glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Sparks_med
	{
		simulation="particles";
		type="sparks_med";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class AA_SmokeHit_01
	{
		simulation="particles";
		type="AA_SmokeHit_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class AA_SmokeHit_02
	{
		simulation="particles";
		type="AA_SmokeHit_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class AA_SmokeHit_03
	{
		simulation="particles";
		type="AA_SmokeHit_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class AA_SmokeHit_04
	{
		simulation="particles";
		type="AA_SmokeHit_04";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class AA_Smoke
{
	class 25mmSmoke1
	{
		simulation="particles";
		type="25mm_Smoke_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 25mmSmoke2
	{
		simulation="particles";
		type="25mm_Smoke_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class GrenadeSmoke1
	{
		simulation="particles";
		type="GrenadeSmoke1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
};
class Hellfire_Smoke
{
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Smoke_Trail_Rocket_Emitter
	{
		simulation="particles";
		type="Smoke_Trail_Rocket_Emitter_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class hydra_smoke_up_01
	{
		simulation="particles";
		type="hydra_smoke_up_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class hydra_smoke_up_02
	{
		simulation="particles";
		type="hydra_smoke_up_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class hydra_smoke_up_03
	{
		simulation="particles";
		type="hydra_smoke_up_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class hydra_smoke_up_04
	{
		simulation="particles";
		type="hydra_smoke_up_04";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Dirt
	{
		simulation="particles";
		type="DirtRocket";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Stones
	{
		simulation="particles";
		type="Hydra_Explode_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class 30mmSmoke
{};
class Hellfire_Explode
{
	class HellfireLight_01
	{
		simulation="light";
		type="Hellfire_light_source";
		position[]={0,0,5};
		intensity=1;
		interval=1;
		lifeTime=0.05;
	};
	class HellfireLight_02
	{
		simulation="light";
		type="Hellfire_light_source_02";
		position[]={0,0,5};
		intensity=1;
		interval=1;
		lifeTime=0.3;
	};
	class Hellfire_Explosion_01
	{
		simulation="particles";
		type="Hellfire_Explosion_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Hellfire_Explosion_02
	{
		simulation="particles";
		type="Hellfire_Explosion_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Hellfire_Smoke_Trail_Emit_01
	{
		simulation="particles";
		type="Hellfire_Smoke_Trail_Emit_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Hellfire_Blast_Glow
	{
		simulation="particles";
		type="Hellfire_Blast_Glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.3;
	};
	class Sparks_med
	{
		simulation="particles";
		type="sparks_med";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Shockwave_medium
	{
		simulation="particles";
		type="Shockwave_medium";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.15;
	};
};
class SABOT_Explode
{
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class 25mmFlash
	{
		simulation="particles";
		type="25mm_Explode";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.15000001;
	};
	class 30mmSparks
	{
		simulation="particles";
		type="30mmSparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.15000001;
	};
};
class SABOT_Smoke
{
	class Dirt
	{
		simulation="particles";
		type="DirtA10";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.40000001;
	};
	class ImpactBulletBig01
	{
		simulation="particles";
		type="ImpactBulletBig01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
	};
	class ImpactBulletBig02
	{
		simulation="particles";
		type="ImpactBulletBig02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
	};
};
class MK82_Explode
{
	class mk82_light
	{
		simulation="light";
		type="mk82_light_source";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.08;
	};
	class mk82_light_02
	{
		simulation="light";
		type="mk82_light_source_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class mk82_explosion
	{
		simulation="particles";
		type="mk82_explosion";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class airblast
	{
		simulation="particles";
		type="airblast";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class explosion_glow_01
	{
		simulation="particles";
		type="explosion_glow_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class mk82_glow
	{
		simulation="particles";
		type="mk82_glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class sparks_large
	{
		simulation="particles";
		type="sparks_large";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
		qualityLevel=2;
	};
	class sparks_huge
	{
		simulation="particles";
		type="sparks_huge";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
		qualityLevel=2;
	};

	class shockwave
	{
		simulation="particles";
		type="shockwave_large";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
		qualityLevel=2;
	};
};
class HERound_Emitter
{
	class Trail2
	{
		simulation="particles";
		type="Heround_smoke_01";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail3
	{
		simulation="particles";
		type="Heround_smoke_02";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class hellfire_explosiontrail
{
	class Trail
	{
		simulation="particles";
		type="Hellfire_Explosion_02";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail2
	{
		simulation="particles";
		type="hellfire_smoke_01";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail3
	{
		simulation="particles";
		type="hellfire_smoke_02";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class M136_explosiontrail
{
	class Trail2
	{
		simulation="particles";
		type="M136_Smoke_01";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail3
	{
		simulation="particles";
		type="M136_Smoke_02";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Hellfire_SmokeTrail_01
{
	class Trail
	{
		simulation="particles";
		type="Hellfire_Smoke_Trail_01";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Demo_Charge_Explosion_Emitter
{
	class Trail
	{
		simulation="particles";
		type="Demo_Explosion";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail2
	{
		simulation="particles";
		type="Demo_smoke_01";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail3
	{
		simulation="particles";
		type="Demo_smoke_02";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class mk82_explosiontrail
{
	class Trail
	{
		simulation="particles";
		type="mk82_explosion_01";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=0.2;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail2
	{
		simulation="particles";
		type="mk82_smoke_01";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=0.2;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail3
	{
		simulation="particles";
		type="mk82_smoke_02";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=0.2;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class mk82_light_02
	{
		simulation="light";
		type="mk82_light_source_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class cloudlight_large
	{
		simulation="particles";
		type="cloudlight_large";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
		qualityLevel=2;
	};
};
class FuelTruck_ExplosionLink
{
	class Trail
	{
		simulation="particles";
		type="FuelTruck_Explosion_01";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=3;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail2
	{
		simulation="particles";
		type="FuelTruck_Explosion_02";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=3;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail3
	{
		simulation="particles";
		type="FuelTruckSmoke";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=3;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class cloudlight_large_fire
	{
		simulation="particles";
		type="cloudlight_large_fire";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
		qualityLevel=2;
	};
};
class FuelTruck_FireLight
{
	class FireLight
	{
		simulation="light";
		type="ObjectDestructionLightFuel";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=1.7;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class AmmoTruck_ExplosionLink
{
	class Trail
	{
		simulation="particles";
		type="AmmoTruck_Explosion_01";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail2
	{
		simulation="particles";
		type="AmmoTruck_Explosion_02";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		qualityLevel=2;
		enabled="distToWater interpolate [0,0.0001,-1,1]";
	};
};
class MLRS_Explode
{
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class 155mm_Explode_01
	{
		simulation="particles";
		type="155mm_Explode_01";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 155mm_Explode_02
	{
		simulation="particles";
		type="155mm_Explode_02";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 155mm_Explode_03
	{
		simulation="particles";
		type="155mm_Explode_03";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Explode_Glow
	{
		simulation="particles";
		type="105mm_Explode_Glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class HERoundExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLightFastSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.05;
	};
	class LightExp2
	{
		simulation="light";
		type="ExploLightFastSmall2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.025;
	};
	class 25mm_Explode
	{
		simulation="particles";
		type="25mm_Explode";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 30mmFlashGlow
	{
		simulation="particles";
		type="30mm_Blast_Glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class 30mm_Sparks
	{
		simulation="particles";
		type="30mmSparks";
		position[]={0,0,0};
		intensity=100;
		interval=1;
		lifeTime=0.2;
	};
	class 30mm_Sparks_02
	{
		simulation="particles";
		type="30mmSparks_02";
		position[]={0,0,0};
		intensity=100;
		interval=1;
		lifeTime=0.2;
	};
	class Grenade_01
	{
		simulation="particles";
		type="Grenade_01";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.3;
	};
	class Grenade_02
	{
		simulation="particles";
		type="Grenade_02";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.3;
	};
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_01";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class 25mm_Explode
{
	class LightExp
	{
		simulation="light";
		type="ExploLightFastSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.05;
	};
	class LightExp2
	{
		simulation="light";
		type="ExploLightFastSmall2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.025;
	};
	class 25mm_Explode
	{
		simulation="particles";
		type="25mm_Explode";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 30mmFlashGlow
	{
		simulation="particles";
		type="30mm_Blast_Glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class 30mm_Sparks
	{
		simulation="particles";
		type="30mmSparks";
		position[]={0,0,0};
		intensity=100;
		interval=1;
		lifeTime=0.2;
	};
	class 30mm_Sparks_02
	{
		simulation="particles";
		type="30mmSparks_02";
		position[]={0,0,0};
		intensity=100;
		interval=1;
		lifeTime=0.2;
	};
	class Grenade_01
	{
		simulation="particles";
		type="Grenade_01";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.3;
	};
	class Grenade_02
	{
		simulation="particles";
		type="Grenade_02";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.3;
	};
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_01";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class ExploAmmoExplosion
{
	class LightExp
	{
		simulation="light";
		type="ExploLightFastSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.05;
	};
	class LightExp2
	{
		simulation="light";
		type="ExploLightFastSmall2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.025;
	};
	class 25mm_Explode
	{
		simulation="particles";
		type="25mm_Explode";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 30mmFlashGlow
	{
		simulation="particles";
		type="30mm_Blast_Glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class 30mm_Sparks
	{
		simulation="particles";
		type="30mmSparks";
		position[]={0,0,0};
		intensity=100;
		interval=1;
		lifeTime=0.2;
	};
	class 30mm_Sparks_02
	{
		simulation="particles";
		type="30mmSparks_02";
		position[]={0,0,0};
		intensity=100;
		interval=1;
		lifeTime=0.2;
	};
	class Grenade_01
	{
		simulation="particles";
		type="Grenade_01";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.3;
	};
	class Grenade_02
	{
		simulation="particles";
		type="Grenade_02";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.3;
	};
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_01";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class 30mmExplode
{
	class LightExp
	{
		simulation="light";
		type="ExploLightFastSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.05;
	};
	class LightExp2
	{
		simulation="light";
		type="ExploLightFastSmall2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.025;
	};
	class 25mm_Explode
	{
		simulation="particles";
		type="25mm_Explode";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 30mmFlashGlow
	{
		simulation="particles";
		type="30mm_Blast_Glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class 30mm_Sparks
	{
		simulation="particles";
		type="30mmSparks";
		position[]={0,0,0};
		intensity=100;
		interval=1;
		lifeTime=0.2;
	};
	class 30mm_Sparks_02
	{
		simulation="particles";
		type="30mmSparks_02";
		position[]={0,0,0};
		intensity=100;
		interval=1;
		lifeTime=0.2;
	};
	class Grenade_01
	{
		simulation="particles";
		type="Grenade_01";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.3;
	};
	class Grenade_02
	{
		simulation="particles";
		type="Grenade_02";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.3;
	};
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_01";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class 30mmExplode_Gatling
{
	class LightExp
	{
		simulation="light";
		type="ExploLightFastSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.05;
	};
	class LightExp2
	{
		simulation="light";
		type="ExploLightFastSmall2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.025;
	};
	class 25mm_Explode
	{
		simulation="particles";
		type="25mm_Explode";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class 30mmFlashGlow
	{
		simulation="particles";
		type="30mm_Blast_Glow";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class 30mm_Sparks
	{
		simulation="particles";
		type="30mmSparks";
		position[]={0,0,0};
		intensity=100;
		interval=1;
		lifeTime=0.2;
	};
	class 30mm_Sparks_02
	{
		simulation="particles";
		type="30mmSparks_02";
		position[]={0,0,0};
		intensity=100;
		interval=1;
		lifeTime=0.2;
	};
	class Grenade_01
	{
		simulation="particles";
		type="Grenade_01";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.6;
	};
	class Grenade_02
	{
		simulation="particles";
		type="Grenade_02";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.6;
	};
	class BattleDust_01
	{
		simulation="particles";
		type="BattleDust_01";
		position[]={0,0,0};
		qualityLevel=2;
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class 120mm_HE
{
	class LightExp
	{
		simulation="light";
		type="ExploLightFast";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class LightExp2
	{
		simulation="light";
		type="GrenadeExploLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class BlastcoreImpactEffectsBlood
{
	class BlastcoreBlood
	{
		simulation = "particles";
		type = "BlastcoreBlood";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
};
class ImpactEffectsBlood
{
	class BlastcoreBlood
	{
		simulation = "particles";
		type = "BlastcoreBlood";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class BlastcoreBlood2
	{
		simulation = "particles";
		type = "BlastcoreBlood2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Blood
	{
		simulation = "particles";
		type = "Blood";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0;
	};
	class Blood1
	{
		simulation = "particles";
		type = "Blood1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0;
	};
	class Blood2
	{
		simulation = "particles";
		type = "Blood2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0;
	};
	class Blood3
	{
		simulation = "particles";
		type = "Blood3";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0;
	};
	class BloodUnderwater1
	{
		simulation = "particles";
		type = "BloodUnderwater1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.4;
	};
};
class collisionEffect
{
	class collisionVeh1
	{
		simulation="particles";
		type="collisionVeh1";
		lifeTime=0.2;
	};
	class collisionVeh2
	{
		simulation="particles";
		type="collisionVeh2";
		lifeTime=0.2;
	};
	class collisionVehSmoke
	{
		simulation="particles";
		type="collisionVehSmoke";
		lifeTime=0.2;
	};
};
class FireDamage
{
	class FireDamage1
	{
		simulation="particles";
		type="FireDamage1";
	};
};
class EmptyEffect
{
};
class ScubaEffect
{
	class BubblesMedium1
	{
		simulation="particles";
		type="BubblesMedium";
		lifeTime=0.89999998;
	};
	class BubblesSmall1
	{
		simulation="particles";
		type="BubblesSmall";
		lifeTime=0.44999999;
	};
};
class WingVortices
{
	class WingTrail1
	{
		simulation="particles";
		type="WingTrail";
		qualityLevel=2;
	};
	class WingTrail1Med
	{
		simulation="particles";
		type="WingTrailMed";
		qualityLevel=1;
	};
};
class BodyVortices
{
	class BodyTrail1
	{
		simulation="particles";
		type="BodyTrail";
		qualityLevel=2;
	};
	class BodyTrail1Med
	{
		simulation="particles";
		type="BodyTrailMed";
		qualityLevel=1;
	};
};
class BulletBubbles
{
	class BulletBubbles1
	{
		simulation="particles";
		type="BulletBubbles1";
	};
};
class ImpactUnderwater
{
	class ImpactUnderwater1
	{
		simulation="particles";
		type="ImpactUnderwater1";
	};
};
