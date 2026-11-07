#include "defines.hpp"

// ---------------------------------------------------------------------------
// CfgPatches
// ---------------------------------------------------------------------------

class CfgPatches
{
    class AFN_Characters
    {
        units[] = {
            "AFN_TDF_Rifleman",
            "AFN_TDF_Medic",
            "AFN_TDF_Grenadier",
            "AFN_TDF_AutomaticRifleman",
            "AFN_TDF_AntiTank",
            "AFN_TDF_TeamLeader",
            "AFN_TDF_SquadLeader",
            "AFN_TDF_Crewman",
            "AFN_TDF_Sniper",
            "AFN_TDF_Marksman",
            "AFN_LF_Rifleman",
            "AFN_LF_CombatEngineer",
            "AFN_LF_Grenadier",
            "AFN_LF_Medic",
            "AFN_LF_AutomaticRifleman",
            "AFN_LF_AntiTank",
            "AFN_LF_TeamLeader",
            "AFN_LF_SquadLeader",
            "AFN_LF_Sniper",
            "AFN_LF_Marksman",
            "AFN_LF_Crewman",
            "AFN_SOF_Operator",
            "AFN_SOF_Operator_M4A1SD",
			"AFN_SOF_DemolitionsSpecialist",
            "AFN_SOF_TeamLeader",
            "AFN_SOF_SquadLeader",
            "AFN_SOF_Sniper",
            "AFN_SOF_Marksman",
        };

        weapons[] = {};

        requiredVersion = 1.14;

        requiredAddons[] = {
            "CACharacters"
        };
    };
};

// ---------------------------------------------------------------------------
// Faction
// ---------------------------------------------------------------------------

class CfgFactionClasses
{
    class AFN {
        displayName = "Armed Forces of Nogova";
        side = West;
    };
};

// ---------------------------------------------------------------------------
// Editor vehicle classes
// ---------------------------------------------------------------------------

class CfgVehicleClasses
{
    class AFN_TerritorialDefenseForces {
        displayName = "AFN Territorial Defense Forces";
    };

    class AFN_LandForces {
        displayName = "AFN Land Forces";
    };

    class AFN_SpecialOperationForces {
        displayName = "AFN Special Operation Forces";
    };
};

// ---------------------------------------------------------------------------
// Units
// ---------------------------------------------------------------------------

class CfgVehicles
{
    class SoldierWB;

    class AFN_SoldierBase : SoldierWB {
        scope = protected;
        side = West;
        faction = "AFN";
		
		class Wounds {
            tex[]={};
            mat[]={
                "ca\characters\data\us_rukavy_hhl.rvmat",
                "ca\characters\data\us_rukavy_hhl_wound1.rvmat",
                "ca\characters\data\us_rukavy_hhl_wound2.rvmat",
                "ca\characters\data\us_soldier_b_body.rvmat",
                "ca\characters\data\us_soldier_b_body_wound1.rvmat",
                "ca\characters\data\us_soldier_b_body_wound2.rvmat"
            };
        };
    };

    // -----------------------------------------------------------------------
    // Territorial Defense Forces
    // -----------------------------------------------------------------------

    class AFN_TDF_Rifleman : AFN_SoldierBase {
        scope = public;
        vehicleClass = "AFN_TerritorialDefenseForces";
        displayName = "AFN TDF Rifleman";

        model = "\edf_characters\edf_tdf_soldier_b.p3d";
        picture ="\Ca\characters\data\Ico\i_null_CA.paa";
        icon = "\Ca\characters\data\map_ico\i_wojak_CA.paa";

        accuracy = 0.7;
        cost = 40000;

        weapons[] = {
            "AK74",
            DefaultEquip
        };

        magazines[] = {
            AK_MAGAZINES_6,
            DEFAULT_GRENADES
        };

        respawnWeapons[] = {
            "AK74",
            DefaultEquip
        };

        respawnMagazines[] = {
            AK_MAGAZINES_6,
            DEFAULT_GRENADES
        };
    };

    class AFN_TDF_Grenadier : AFN_TDF_Rifleman {
        displayName = "AFN TDF Grenadier";
        nameSound = "grenadier";

        model = "\edf_characters\edf_tdf_soldier_g.p3d";

        cost=60000;
        accuracy = 1000; // never recognized

        weapons[] = {
            "AK74GL",
            DefaultEquip
        };

        magazines[] = {
            AK_MAGAZINES_6,
            GP25_GRENADES_8,
            DEFAULT_GRENADES
        };

        respawnWeapons[] = {
            "AK74GL",
            DefaultEquip
        };

        respawnMagazines[] = {
            AK_MAGAZINES_6,
            GP25_GRENADES_8,
            DEFAULT_GRENADES
        };
    };

    class AFN_TDF_Medic : AFN_TDF_Rifleman {
        displayName = "AFN TDF Medic";
        nameSound = "medic2";

        model = "\edf_characters\afn_tdf_medic.p3d";
        picture = "\Ca\characters\data\Ico\i_Med_CA.paa";
        Icon = "\Ca\characters\data\map_ico\i_medyk_CA.paa";

        accuracy=1000; // never recognized
        cost = 60000;
        attendant = true;
        weaponSlots = WeaponSlotPrimary + WeaponSlotSecondary + 8 * WeaponSlotItem + 2 * WeaponSlotBinocular + WeaponSlotHandGun + 4*WeaponSlotHandGunItem;

        class Wounds {
            tex[]={};
            mat[]={
                "ca\characters\data\us_hhl.rvmat",
                "ca\characters\data\us_hhl_wound1.rvmat",
                "ca\characters\data\us_hhl_wound2.rvmat",
                "ca\characters\data\us_soldier_medic_body.rvmat",
                "ca\characters\data\us_soldier_medic_body_wound1.rvmat",
                "ca\characters\data\us_soldier_medic_body_wound2.rvmat"
            };
        };
    };

    class AFN_TDF_AutomaticRifleman: AFN_TDF_Rifleman
    {
        displayName = "AFN TDF Automatic Rifleman";
        nameSound = "machineGunner";

        model = "\edf_characters\edf_tdf_soldier_ar.p3d";

        accuracy = 1.5;
        cost = 60000;
        threat[] = {1, 0.1, 0.8};

        weapons[] = {
            "PK",
            DefaultEquip
        };

        magazines[] = {
            PK_MAGAZINES_4,
            HANDGRENADE_2
        };

        respawnWeapons[] = {
            "PK",
            DefaultEquip
        };

        respawnMagazines[] = {
            PK_MAGAZINES_4,
            HANDGRENADE_2
        };

        class Wounds
        {
            tex[]={};
            mat[]={
                "ca\characters\data\us_hhl.rvmat",
                "ca\characters\data\us_hhl_wound1.rvmat",
                "ca\characters\data\us_hhl_wound2.rvmat",
                "ca\characters\data\us_soldier_ar_body.rvmat",
                "ca\characters\data\us_soldier_ar_body_wound1.rvmat",
                "ca\characters\data\us_soldier_ar_body_wound2.rvmat"
            };
        };
    };

    class AFN_TDF_AntiTank: AFN_TDF_Rifleman
    {
        displayName = "AFN TDF AT Soldier";
        nameSound = "missileSoldier";

        model = "\edf_characters\edf_tdf_soldier_at.p3d";

        accuracy=1.5;
        cost=150000;
        nightVision=true;
        threat[]={1, 0.9, 0.1};

        weapons[] = {
            "AK74",
            "RPG7V",
            DefaultEquip
        };

        magazines[] = {
            AK_MAGAZINES_6,
            RPG7_ROUNDS_3,
            DEFAULT_GRENADES
        };

        respawnWeapons[] = {
            "AK74",
            "RPG7V",
            DefaultEquip
        };

        respawnMagazines[] = {
            AK_MAGAZINES_6,
            RPG7_ROUNDS_3,
            DEFAULT_GRENADES
        };
    };

    class AFN_TDF_TeamLeader : AFN_TDF_Rifleman {
        displayName = "AFN TDF Team Leader";
		nameSound = "officer";

        model = "\edf_characters\afn_tdf_teamleader.p3d";
        Picture= "\Ca\characters\data\Ico\i_tleader_CA.paa";
        Icon= "\Ca\characters\data\map_ico\i_lider_CA.paa";

        accuracy = 2.0;
        cost = 500000;
        nightVision = true;

        weapons[] = {
            "AK74",
            "Binocular",
            "NVGoggles",
            DefaultEquip
        };

        magazines[] = {
            AK_MAGAZINES_6,
            DEFAULT_GRENADES
        };

        respawnWeapons[] = {
            "AK74",
            "Binocular",
            "NVGoggles",
            DefaultEquip
        };

        respawnMagazines[] = {
            AK_MAGAZINES_6,
            DEFAULT_GRENADES
        };
    };
	
	class AFN_TDF_SquadLeader : AFN_TDF_TeamLeader {
        displayName = "AFN TDF Squad Leader";

        model = "\edf_characters\afn_tdf_squadleader.p3d";
        picture = "\Ca\characters\data\Ico\i_sleader_CA.paa";

		enableGPS = true;
		
		class Wounds
		{
			tex[]={};
			mat[]={
				"ca\characters\data\us_soldier_sqleader_body.rvmat",
				"ca\characters\data\us_soldier_sqleader_body_wound1.rvmat",
				"ca\characters\data\us_soldier_sqleader_body_wound2.rvmat",
				"ca\characters\data\us_spec_hhl.rvmat",
				"ca\characters\data\us_spec_hhl_wound1.rvmat",
				"ca\characters\data\us_spec_hhl_wound2.rvmat"
			};
		};
    };

    class AFN_TDF_Sniper : AFN_TDF_Rifleman {
        displayName = "AFN TDF Sniper";
        nameSound="sniper";

        picture = "\Ca\characters\data\Ico\i_SF_CA.paa";
        icon = "\Ca\characters\data\map_ico\i_wojak_CA.paa";
        model = "\edf_characters\edf_tdf_soldier.p3d";

        accuracy = 3.5;
        nightVision = true;
        cost = 250000;
        sensitivity = 2;
        camouflage = 0.6;
        threat[] = {1, 0.1, 0.1};

        weapons[] = {
            "SVD",
            "Makarov",
            "Binocular",
            DefaultEquip
        };

        magazines[] = {
            SVD_MAGAZINES_6,
            MAKAROV_MAGAZINES_4
        };

        respawnWeapons[]={
            "SVD",
            "Makarov",
            "Binocular",
            DefaultEquip
        };

        respawnMagazines[] = {
            SVD_MAGAZINES_6,
            MAKAROV_MAGAZINES_4
        };
    };

    class AFN_TDF_Marksman : AFN_TDF_Rifleman
    {
        displayName = "AFN TDF Marksman";

        weapons[] = {
            "aks74pso",
            "MakarovSD",
            "NVGoggles",
            DefaultEquip
        };

        magazines[] = {
            AK_MAGAZINES_6,
            MAKAROV_SD_MAGAZINES_4,
            DEFAULT_GRENADES
        };

        respawnWeapons[] = {
            "aks74pso",
            "MakarovSD",
            "NVGoggles",
            DefaultEquip
        };

        respawnMagazines[] = {
            AK_MAGAZINES_6,
            MAKAROV_SD_MAGAZINES_4,
            DEFAULT_GRENADES
        };
    };

    class AFN_TDF_Crewman : AFN_TDF_Rifleman {
        displayName = "AFN TDF Crew";
        nameSound = "crew";

        model = "\edf_characters\afn_tdf_crew.p3d";

        accuracy = 1000; // never recognize

        weapons[] = {
            "AKS74U",
            "Makarov",
            "NVGoggles",
            DefaultEquip
        };

        magazines[] = {
            AK_MAGAZINES_6,
            MAKAROV_MAGAZINES_4,
            SMOKE_SHELL_GREEN_2
        };

        respawnWeapons[] = {
            "AKS74U",
            "Makarov",
            "NVGoggles",
            DefaultEquip
        };

        respawnMagazines[] = {
            AK_MAGAZINES_6,
            MAKAROV_MAGAZINES_4,
            SMOKE_SHELL_GREEN_2
        };
    };

    // -----------------------------------------------------------------------
    // Land Forces
    // -----------------------------------------------------------------------

    class AFN_LF_Rifleman : AFN_SoldierBase
    {
        scope = public;
        vehicleClass = "AFN_LandForces";
        displayName = "AFN LF Rifleman";

        picture="\Ca\characters\data\Ico\i_null_CA.paa";
        Icon= "\Ca\characters\data\map_ico\i_wojak_CA.paa";
        model = "\edf_characters\afn_lf_rifleman.p3d";

        accuracy = 0.7;
        cost = 40000;

        weapons[] = {
            "AK74",
            DefaultEquip
        };

        magazines[] = {
            AK_MAGAZINES_6,
            DEFAULT_GRENADES
        };

        respawnWeapons[] = {
            "AK74",
            DefaultEquip
        };

        respawnMagazines[] = {
            AK_MAGAZINES_6,
            DEFAULT_GRENADES
        };
    };

    class AFN_LF_CombatEngineer : AFN_LF_Rifleman
    {
        displayName = "AFN LF Combat Engineer";
    };

    class AFN_LF_Grenadier : AFN_LF_Rifleman {
        displayName = "AFN LF Grenadier";
        nameSound = "grenadier";

        model = "\edf_characters\afn_lf_grenadier.p3d";

        cost=60000;
        accuracy = 1000; // never recognized

        weapons[] = {
            "AK74GL",
            DefaultEquip
        };

        magazines[] = {
            AK_MAGAZINES_6,
            GP25_GRENADES_8,
            DEFAULT_GRENADES
        };

        respawnWeapons[] = {
            "AK74GL",
            DefaultEquip
        };

        respawnMagazines[] = {
            AK_MAGAZINES_6,
            GP25_GRENADES_8,
            DEFAULT_GRENADES
        };
    };

    class AFN_LF_Medic : AFN_LF_Rifleman {
        displayName = "AFN LF Medic";
        nameSound = "medic2";

        picture = "\Ca\characters\data\Ico\i_Med_CA.paa";
        Icon = "\Ca\characters\data\map_ico\i_medyk_CA.paa";

        accuracy = 1000; // never recognized
        cost = 60000;
        attendant = true;
        weaponSlots = WeaponSlotPrimary + WeaponSlotSecondary + 8 * WeaponSlotItem + 2 * WeaponSlotBinocular + WeaponSlotHandGun + 4*WeaponSlotHandGunItem;
    };

    class AFN_LF_AutomaticRifleman: AFN_LF_Rifleman
    {
        displayName = "AFN LF Automatic Rifleman";
        nameSound = "machineGunner";
		
		model = "\edf_characters\afn_lf_automatic_rifleman.p3d";

        accuracy = 1.5;
        cost = 60000;
        threat[] = {1, 0.1, 0.8};

        weapons[] = {
            "M249",
            DefaultEquip
        };

        magazines[] = {
            M249_MAGAZINES_4,
            HANDGRENADE_TIMED_2
        };

        respawnWeapons[] = {
            "M249",
            DefaultEquip
        };

        respawnMagazines[] = {
            M249_MAGAZINES_4,
            HANDGRENADE_TIMED_2
        };
    };

    class AFN_LF_AntiTank: AFN_LF_Rifleman
    {
        displayName = "AFN LF AT Soldier";
        nameSound = "missileSoldier";
		
		model = "\edf_characters\afn_lf_anti_tank.p3d";

        accuracy=1.5;
        cost=150000;
        nightVision=true;
        threat[]={1, 0.9, 0.1};

        weapons[] = {
            "AK74",
            "RPG7V",
            DefaultEquip
        };

        magazines[] = {
            AK_MAGAZINES_6,
            RPG7_ROUNDS_3,
            DEFAULT_GRENADES
        };

        respawnWeapons[] = {
            "AK74",
            "RPG7V",
            DefaultEquip
        };

        respawnMagazines[] = {
            AK_MAGAZINES_6,
            RPG7_ROUNDS_3,
            DEFAULT_GRENADES
        };
    };

    class AFN_LF_TeamLeader : AFN_LF_Rifleman {
        displayName = "AFN LF Team Leader";

        Picture= "\Ca\characters\data\Ico\i_tleader_CA.paa";
        Icon= "\Ca\characters\data\map_ico\i_lider_CA.paa";

        accuracy=2.0;
        cost=600000;
        nightVision=true;

        weapons[] = {
            "AK74",
            "Binocular",
            "NVGoggles",
            DefaultEquip
        };

        magazines[] = {
            AK_MAGAZINES_6,
            DEFAULT_GRENADES
        };

        respawnWeapons[] = {
            "AK74",
            "Binocular",
            "NVGoggles",
            DefaultEquip
        };

        respawnMagazines[] = {
            AK_MAGAZINES_6,
            DEFAULT_GRENADES
        };
    };

    class AFN_LF_SquadLeader : AFN_LF_TeamLeader {
        displayName = "AFN LF Squad Leader";

        Picture = "\Ca\characters\data\Ico\i_sleader_CA.paa";

        enableGPS = true;
    };

    class AFN_LF_Sniper : AFN_LF_Rifleman {
        displayName = "AFN LF Sniper";
        nameSound="sniper";

		model = "\edf_characters\afn_lf_sniper.p3d";
        picture = "\Ca\characters\data\Ico\i_SF_CA.paa";
        icon = "\Ca\characters\data\map_ico\i_wojak_CA.paa";
		
        accuracy = 3.5;
        nightVision = true;
        cost = 250000;
        sensitivity = 2;
        camouflage = 0.6;
        threat[] = {1, 0.1, 0.1};

        weapons[] = {
            "SVD",
            "Makarov",
            "Binocular",
            DefaultEquip
        };

        magazines[] = {
            SVD_MAGAZINES_6,
            MAKAROV_MAGAZINES_4
        };

        respawnWeapons[]={
            "SVD",
            "Makarov",
            "Binocular",
            DefaultEquip
        };

        respawnMagazines[] = {
            SVD_MAGAZINES_6,
            MAKAROV_MAGAZINES_4
        };
    };

    class AFN_LF_Marksman : AFN_LF_Rifleman
    {
        displayName = "AFN LF Marksman";

        weapons[] = {
            "M16A4_ACG",
            "MakarovSD",
            "NVGoggles",
            DefaultEquip
        };

        magazines[] = {
            STANAG_MAGAZINES_6,
            MAKAROV_SD_MAGAZINES_4,
            DEFAULT_GRENADES
        };

        respawnWeapons[] = {
            "M16A4_ACG",
            "MakarovSD",
            "NVGoggles",
            DefaultEquip
        };

        respawnMagazines[] = {
            STANAG_MAGAZINES_6,
            MAKAROV_SD_MAGAZINES_4,
            DEFAULT_GRENADES
        };
    };

    class AFN_LF_Crewman : AFN_LF_Rifleman {
        displayName = "AFN LF Crew";
        nameSound = "crew";

        accuracy = 1000; // never recognize

        weapons[] = {
            "AKS74U",
            "Makarov",
            "NVGoggles",
            DefaultEquip
        };

        magazines[] = {
            AK_MAGAZINES_6,
            MAKAROV_MAGAZINES_4,
            SMOKE_SHELL_GREEN_2
        };

        respawnWeapons[] = {
            "AKS74U",
            "Makarov",
            "NVGoggles",
            DefaultEquip
        };

        respawnMagazines[] = {
            AK_MAGAZINES_6,
            MAKAROV_MAGAZINES_4,
            SMOKE_SHELL_GREEN_2
        };
    };
	
    // -----------------------------------------------------------------------
    // Special Operations Forces
    // -----------------------------------------------------------------------

    class AFN_SOF_Operator : AFN_SoldierBase {
        scope = public;
        vehicleClass = "AFN_SpecialOperationForces";
        displayName = "AFN SOF Operator (M4A1 Aimpoint)";
		nameSound = "blackOp";

		model = "\edf_characters\afn_sof_operator.p3d";
        picture = "\Ca\characters\data\Ico\i_SF_CA.paa";
        Icon = "\Ca\characters\data\map_ico\i_komandos_CA.paa";

		camouflage = 0.7;
		threat[] = {1, 0.5, 0.1};		
        accuracy = 3.5;
		cost = 400000;
		
		canHideBodies = true;
		canDeactivateMines = true;
		nightVision = true;
		enableGPS = true;

        weapons[] = {
            "M4AIM",
            DefaultEquip
        };

        magazines[] = {
            STANAG_MAGAZINES_6,
            DEFAULT_GRENADES
        };

        respawnWeapons[] = {
            "M4AIM",
            DefaultEquip
        };

        respawnMagazines[] = {
            STANAG_MAGAZINES_6,
            DEFAULT_GRENADES
        };
    };

    class AFN_SOF_Operator_M4A1SD : AFN_SOF_Operator {
        displayName = "AFN SOF Operator (M4A1 SD)";

        weapons[] = {
            "M4A1SD",
            DefaultEquip
        };

        magazines[] = {
            STANAG_MAGAZINES_6,
            DEFAULT_GRENADES
        };

        respawnWeapons[] = {
            "M4A1SD",
            DefaultEquip
        };

        respawnMagazines[] = {
            STANAG_MAGAZINES_6,
            DEFAULT_GRENADES
        };
    };

	class AFN_SOF_DemolitionsSpecialist : AFN_SOF_Operator {
        displayName = "AFN SOF Demolitions Specialist";
		
		weapons[] = {
            "AKS74UN",
            DefaultEquip
        };

        magazines[] = {
            AK_MAGAZINES_6,
            DEFAULT_GRENADES,
			PIPEBOMBS_3
        };

        respawnWeapons[] = {
            "AKS74UN",
            DefaultEquip
        };

        respawnMagazines[] = {
            AK_MAGAZINES_6,
            DEFAULT_GRENADES,
			PIPEBOMBS_3
        };
    };

    class AFN_SOF_Marksman : AFN_SOF_Operator
    {
        displayName = "AFN SOF Marksman";

        weapons[] = {
            "M4SPR",
            "MakarovSD",
            "NVGoggles",
			"LaserDesignator",
            DefaultEquip
        };

        magazines[] = {
            AK_MAGAZINES_6,
            MAKAROV_SD_MAGAZINES_4,
            DEFAULT_GRENADES,
			"Laserbatteries"
        };

        respawnWeapons[] = {
            "aks74pso",
            "MakarovSD",
            "NVGoggles",
			"LaserDesignator",
            DefaultEquip
        };

        respawnMagazines[] = {
            AK_MAGAZINES_6,
            MAKAROV_SD_MAGAZINES_4,
            DEFAULT_GRENADES,
			"Laserbatteries"
        };
    };
};

class CfgGroups {
    class West {
        name = "Armed Forces of Nogova";

        class AFN_TD {
            name = "AFN Territorial Defense";

            class AFN_TDF_InfantrySquad {
                name = "TDF Infantry Squad (7)";

                class Unit0 {
                    side = 1;
                    vehicle = "AFN_TDF_SquadLeader";
                    rank = "SERGEANT";
                    position[] = {0, 0, 0};
                };

                // Group A
                class Unit1 {
                    side = 1;
                    vehicle = "AFN_TDF_Rifleman";
                    rank = "CORPORAL";
                    position[] = {5, -5, 0};
                };

                class Unit2 {
                    side = 1;
                    vehicle = "AFN_TDF_AutomaticRifleman";
                    rank = "PRIVATE";
                    position[] = {10, -10, 0};
                };

                class Unit3 {
                    side = 1;
                    vehicle = "AFN_TDF_AntiTank";
                    rank = "PRIVATE";
                    position[] = {15, -15, 0};
                };

                // Group B
                class Unit4 {
                    side = 1;
                    vehicle = "AFN_TDF_Grenadier";
                    rank = "CORPORAL";
                    position[] = {-5, -5, 0};
                };

                class Unit5 {
                    side = 1;
                    vehicle = "AFN_TDF_Marksman";
                    rank = "PRIVATE";
                    position[] = {-10, -10, 0};
                };

                class Unit6 {
                    side = 1;
                    vehicle = "AFN_TDF_Medic";
                    rank = "PRIVATE";
                    position[] = {-15, -15, 0};
                };
            };
        };

        class AFN_LF {
            name = "AFN Land Forces";

            class AFN_LF_InfantrySquad {
                name = "LF Infantry Squad (7)";

                class Unit0 {
                    side = 1;
                    vehicle = "AFN_LF_SquadLeader";
                    rank = "SERGEANT";
                    position[] = {0, 0, 0};
                };

                // Group A
                class Unit1 {
                    side = 1;
                    vehicle = "AFN_LF_Rifleman";
                    rank = "CORPORAL";
                    position[] = {5, -5, 0};
                };

                class Unit2 {
                    side = 1;
                    vehicle = "AFN_LF_AutomaticRifleman";
                    rank = "PRIVATE";
                    position[] = {10, -10, 0};
                };

                class Unit3 {
                    side = 1;
                    vehicle = "AFN_LF_AntiTank";
                    rank = "PRIVATE";
                    position[] = {15, -15, 0};
                };

                // Group B
                class Unit4 {
                    side = 1;
                    vehicle = "AFN_LF_Grenadier";
                    rank = "CORPORAL";
                    position[] = {-5, -5, 0};
                };

                class Unit5 {
                    side = 1;
                    vehicle = "AFN_LF_Marksman";
                    rank = "PRIVATE";
                    position[] = {-10, -10, 0};
                };

                class Unit6 {
                    side = 1;
                    vehicle = "AFN_LF_Medic";
                    rank = "PRIVATE";
                    position[] = {-15, -15, 0};
                };
            };
        };
    };
};
