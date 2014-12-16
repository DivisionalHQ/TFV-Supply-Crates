class CfgPatches
{
	class loberg_TFV_ammobox
	{
		units[] = {
		"loberg_TFV_ammobox_tl",
		"loberg_TFV_ammobox_medic",
		"loberg_TFV_ammobox_at",
		"loberg_TFV_ammobox_grenadier",
		"loberg_TFV_ammobox_marksman",
		"loberg_TFV_ammobox_mg",
		"loberg_TFV_ammobox_multi",
		"loberg_TFV_ammobox_rifleman",
		"loberg_TFV_ammobox_vehicle",
		"loberg_TFV_ammobox_crew",
		"loberg_TFV_ammobox_aviation",
		"loberg_TFV_ammobox_eod",
		"loberg_TFV_ammobox_ammo"
		};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Weapons_F_Ammoboxes"};
		author[] = {"Loberg test"};
		version = 0.6;
		versionStr = "0.6";
	};
};

class CfgVehicles {
	class Box_NATO_AmmoVeh_F;
	class B_CargoNet_01_ammo_F;
	
	class TFV_CargoNet: B_CargoNet_01_ammo_F {
		displayName = "TFV Cargo Net";
		descriptionShort = "TFV Cargo Net";
		
			class TransportWeapons
			{
			};
			
			class TransportMagazines
			{
			class _xx_SmokeShell { magazine="SmokeShell"; count=50; };
			class _xx_SmokeShellRed { magazine="SmokeShellRed"; count=50; };
			class _xx_30Rnd_mas_556x45_Stanag { magazine="30Rnd_mas_556x45_Stanag"; count=50; };
			class _xx_20Rnd_mas_762x51_Stanag { magazine="20Rnd_mas_762x51_Stanag"; count=50; };
			class _xx_L85_30Rnd_556x45_Stanag { magazine="L85_30Rnd_556x45_Stanag"; count=50; };
			class _xx_g36_mag { magazine="g36_mag"; count=50; };
			class _xx_R3F_30Rnd_556x45_FAMAS { magazine="R3F_30Rnd_556x45_FAMAS"; count=50; };
			class _xx_200Rnd_mas_556x45_T_Stanag { magazine="200Rnd_mas_556x45_T_Stanag"; count=20; };
			class _xx_150Rnd_762x51_Box_Tracer { magazine="150Rnd_762x51_Box_Tracer"; count=10; };
			class _xx_sti_200Rnd_556x45_Tracer { magazine="sti_200Rnd_556x45_Tracer"; count=10; };
			class _xx_sti_100Rnd_762x51_Tracer { magazine="sti_100Rnd_762x51_Tracer"; count=10; };
			class _xx_sti_100Rnd_556x45_Tracer { magazine="sti_100Rnd_556x45_Tracer"; count=10; };
			class _xx_100Rnd_mas_762x51_Stanag { magazine="100Rnd_mas_762x51_Stanag"; count=50; };
			class _xx_5Rnd_mas_762x51_Stanag { magazine="5Rnd_mas_762x51_Stanag"; count=30; };
			class _xx_5Rnd_mas_127x99_Stanag { magazine="5Rnd_mas_127x99_Stanag"; count=30; };
			class _xx_STI_84MM_HEAT { magazine="STI_84MM_HEAT"; count=20; };
			class _xx_STI_84MM_HE { magazine="STI_84MM_HE"; count=20; };
			class _xx_STI_84MM_SMOKE { magazine="STI_84MM_SMOKE"; count=20; };
			};
			
			class TransportItems
			{
			class _xx_AGM_CableTie { name="AGM_CableTie"; count=30; };
			class _xx_AGM_Bandage { name="AGM_Bandage"; count=50; };
			class _xx_AGM_Morphine { name="AGM_Morphine"; count=30; };
			class _xx_AGM_Epipen { name="AGM_Epipen"; count=30; };
			class _xx_AGM_Bloodbag { name="AGM_Bloodbag"; count=30; };

			};
			
			class TransportBackpacks
			{
			};
			
		};
	
	class loberg_TFV_ammobox_tl: Box_NATO_AmmoVeh_F {
		displayName = "TFV TL Supplies";
		descriptionShort = "TFV TL Supplies";
		maximumLoad = 999999;
		
	class EventHandlers {
			init = "_this execVM '\lel_tfvammoboxes\boxWeight.sqf'";
		};
		
		icon="iconCrateWpns";
		hiddenSelectionsTextures[]=
		{
			"\lel_tfvammoboxes\data\TFV_supply_tl.paa",
			"\lel_tfvammoboxes\data\AmmoVeh_CO.paa"
		};
	
		class TransportWeapons
			{	
			class _xx_Laserdesignator { weapon="Laserdesignator"; count=10; };
			class _xx_arifle_mas_m4_m203_sd { weapon="arifle_mas_m4_m203_sd"; count=10; };
			class _xx_arifle_mas_m4_m203c_sd { weapon="arifle_mas_m4_m203c_sd"; count=10; };
			class _xx_arifle_mas_hk416_m203_sd { weapon="arifle_mas_hk416_m203_sd"; count=10; };
			class _xx_arifle_mas_hk416_m203c_sd { weapon="arifle_mas_hk416_m203c_sd"; count=10; };
			class _xx_arifle_mas_l119_m203_sd { weapon="arifle_mas_l119_m203_sd"; count=10; };
			class _xx_arifle_mas_mk16_l_gl_sd { weapon="arifle_mas_mk16_l_gl_sd"; count=10; };
			class _xx_arifle_mas_mk17_gl_sd { weapon="arifle_mas_mk17_gl_sd"; count=10; };
			class _xx_arifle_mas_m16_gl_sd { weapon="arifle_mas_m16_gl_sd"; count=10; };
			class _xx_R3F_Famas_G2_M203 { weapon="R3F_Famas_G2_M203"; count=10; };
			class _xx_G36k_rgl { weapon="G36k_rgl"; count=10; };
			class _xx_arifle_mas_g3s_m203 { weapon="arifle_mas_g3s_m203"; count=10; };
			};

		class TransportMagazines
			{
			class _xx_SmokeShell { magazine="SmokeShell"; count=100; };
			class _xx_SmokeShellRed { magazine="SmokeShellRed"; count=100; };
			class _xx_SmokeShellGreen { magazine="SmokeShellGreen"; count=100; };
			class _xx_1Rnd_HE_Grenade_shell { magazine="1Rnd_HE_Grenade_shell"; count=100; };
			class _xx_1Rnd_Smoke_Grenade_shell { magazine="1Rnd_Smoke_Grenade_shell"; count=100; };
			class _xx_1Rnd_SmokeRed_Grenade_shell { magazine="1Rnd_SmokeRed_Grenade_shell"; count=100; };
			class _xx_30Rnd_mas_556x45_Stanag { magazine="30Rnd_mas_556x45_Stanag"; count=300; };
			class _xx_30Rnd_mas_556x45_T_Stanag { magazine="30Rnd_mas_556x45_T_Stanag"; count=100; };
			class _xx_20Rnd_mas_762x51_Stanag { magazine="20Rnd_mas_762x51_Stanag"; count=300; };
			class _xx_20Rnd_mas_762x51_T_Stanag { magazine="20Rnd_mas_762x51_T_Stanag"; count=100; };
			class _xx_R3F_30Rnd_556x45_FAMAS { magazine="R3F_30Rnd_556x45_FAMAS"; count=300; };
			class _xx_R3F_30Rnd_556x45_TRACER_FAMAS { magazine="R3F_30Rnd_556x45_TRACER_FAMAS"; count=100; };
			class _xx_g36_mag { magazine="g36_mag"; count=300; };
			class _xx_L85_30Rnd_556x45_Stanag_Tracer { magazine="L85_30Rnd_556x45_Stanag_Tracer"; count=100; };
			};			

		class TransportItems
			{
			class _xx_Laserbatteries { name="Laserbatteries"; count=10; };
			class _xx_ItemcTab { name="ItemcTab"; count=10; };
			class _xx_optic_mas_MRCO_camo { name="optic_mas_MRCO_camo"; count=10; };
			class _xx_optic_MRCO { name="optic_MRCO"; count=10; };
			class _xx_optic_mas_acog { name="optic_mas_acog"; count=10; };
			class _xx_FHQ_optic_AC11704_tan { name="FHQ_optic_AC11704_tan"; count=10; };
			class _xx_FHQ_optic_AC11704 { name="FHQ_optic_AC11704"; count=10; };
			class _xx_FHQ_optic_HWS_G33_tan { name="FHQ_optic_HWS_G33_tan"; count=10; };
			class _xx_FHQ_optic_HWS_G33 { name="FHQ_optic_HWS_G33"; count=10; };
			class _xx_muzzle_snds_M { name="muzzle_snds_M"; count=10; };
			class _xx_FHQ_acc_LLM01L { name="FHQ_acc_LLM01L"; count=10; };
			};
			
		class TransportBackpacks
			{
			class _xx_tf_rt1523g { backpack="tf_rt1523g"; count=5; };
			class _xx_tf_anprc155 { backpack="tf_anprc155"; count=5; };
			class _xx_tf_rt1523g_sage { backpack="tf_rt1523g_sage"; count=5; };
			};	
		
	};
	
	class loberg_TFV_ammobox_medic: Box_NATO_AmmoVeh_F
	{
		displayName = "TFV Medic Supplies";
		descriptionShort = "TFV Medic Supplies";
		maximumLoad = 999999;
		
		class EventHandlers {
			init = "_this execVM '\lel_tfvammoboxes\boxWeight.sqf'";
		};
		
		icon="iconCrateWpns";
		hiddenSelectionsTextures[]=
		{
			"\lel_tfvammoboxes\data\TFV_supply_medic.paa",
			"\lel_tfvammoboxes\data\AmmoVeh_CO.paa"
		};
		
		class TransportWeapons
			{
			class _xx_arifle_mas_m4c_sd { weapon="arifle_mas_m4c_sd"; count=10; };
			class _xx_arifle_mas_hk416c_sd { weapon="arifle_mas_hk416c_sd"; count=10; };
			class _xx_arifle_mas_l119_sd { weapon="arifle_mas_l119_sd"; count=10; };
			class _xx_arifle_mas_mk16_sd { weapon="arifle_mas_mk16_sd"; count=10; };
			class _xx_arifle_mas_mp5_sd { weapon="arifle_mas_mp5_sd"; count=10; };
			class _xx_G36c { weapon="G36c"; count=10; };
			class _xx_C1987_Mp7_sand { weapon="C1987_Mp7_sand"; count=10; };
			};
		
		class TransportMagazines
			{
			class _xx_SmokeShell { magazine="SmokeShell"; count=100; };
			class _xx_30Rnd_mas_556x45_Stanag { magazine="30Rnd_mas_556x45_Stanag"; count=300; };
			class _xx_30Rnd_mas_556x45_T_Stanag { magazine="30Rnd_mas_556x45_T_Stanag"; count=100; };
			class _xx_20Rnd_mas_762x51_Stanag { magazine="20Rnd_mas_762x51_Stanag"; count=300; };
			class _xx_20Rnd_mas_762x51_T_Stanag { magazine="20Rnd_mas_762x51_T_Stanag"; count=300; };
			class _xx_30Rnd_mas_9x21_Stanag { magazine="30Rnd_mas_9x21_Stanag"; count=100; };
			class _xx_C1987_40Rnd_46x30_mp7 { magazine="C1987_40Rnd_46x30_mp7"; count=300; };
			class _xx_g36_mag { magazine="g36_mag"; count=300; };
			};
			
		class TransportItems
			{
			class _xx_optic_mas_MRCO_camo { name="optic_mas_MRCO_camo"; count=10; };
			class _xx_optic_MRCO { name="optic_MRCO"; count=10; };
			class _xx_optic_mas_acog { name="optic_mas_acog"; count=10; };
			class _xx_FHQ_optic_AC11704_tan { name="FHQ_optic_AC11704_tan"; count=10; };
			class _xx_FHQ_optic_AC11704 { name="FHQ_optic_AC11704"; count=10; };
			class _xx_FHQ_optic_HWS_G33_tan { name="FHQ_optic_HWS_G33_tan"; count=10; };
			class _xx_FHQ_optic_HWS_G33 { name="FHQ_optic_HWS_G33"; count=10; };
			class _xx_muzzle_snds_M { name="muzzle_snds_M"; count=10; };
			class _xx_FHQ_acc_LLM01L { name="FHQ_acc_LLM01L"; count=10; };
			class _xx_C1987_o_suppressor_sand { name="C1987_o_suppressor_sand"; count=10; };
			class _xx_cse_packing_bandage { name="cse_packing_bandage"; count=300; };
			class _xx_cse_morphine { name="cse_morphine"; count=100; };
			class _xx_cse_epinephrine { name="cse_epinephrine"; count=100; };
			class _xx_cse_blood_iv { name="cse_blood_iv"; count=100; };
			class _xx_cse_tourniquet { name="cse_tourniquet"; count=100; };
			class _xx_cse_splint { name="cse_splint"; count=100; };
			class _xx_cse_atropine { name="cse_atropine"; count=100; };
			class _xx_cse_plasma_iv { name="cse_plasma_iv"; count=100; };
			class _xx_cse_saline_iv { name="cse_saline_iv"; count=100; };
			class _xx_cse_quikclot { name="cse_quikclot"; count=100; };
			class _xx_cse_nasopharyngeal_tube { name="cse_nasopharyngeal_tube"; count=100; };
			class _xx_cse_opa { name="cse_opa"; count=100; };
			class _xx_cse_bandageElastic { name="cse_bandageElastic"; count=100; };
			class _xx_cse_liquidSkin { name="cse_liquidSkin"; count=100; };
			class _xx_cse_chestseal { name="cse_chestseal"; count=100; };
			class _xx_cse_personal_aid_kit { name="cse_personal_aid_kit"; count=100; };
			class _xx_cse_surgical_kit { name="cse_surgical_kit"; count=100; };
			class _xx_cse_itemBodyBag { name="cse_itemBodyBag"; count=100; };
			};
			
		class TransportBackpacks
			{
			
			};
	};
	
	class loberg_TFV_ammobox_at: Box_NATO_AmmoVeh_F
	{
		displayName = "TFV AT Supplies";
		descriptionShort = "TFV AT Supplies";
		maximumLoad = 999999;
		
		class EventHandlers {
			init = "_this execVM '\lel_tfvammoboxes\boxWeight.sqf'";
		};

		icon="iconCrateWpns";
		hiddenSelectionsTextures[]=
		{
			"\lel_tfvammoboxes\data\TFV_supply_at.paa",
			"\lel_tfvammoboxes\data\AmmoVeh_CO.paa"
		};
		class TransportWeapons
			{
			class _xx_arifle_mas_m4_sd { weapon="arifle_mas_m4_sd"; count=10; };
			class _xx_arifle_mas_m4c_sd { weapon="arifle_mas_m4c_sd"; count=10; };
			class _xx_arifle_mas_hk416_sd { weapon="arifle_mas_hk416_sd"; count=10; };
			class _xx_arifle_mas_hk416c_sd { weapon="arifle_mas_hk416c_sd"; count=10; };
			class _xx_arifle_mas_l119_sd { weapon="arifle_mas_l119_sd"; count=10; };
			class _xx_arifle_mas_mk16_l_sd { weapon="arifle_mas_mk16_l_sd"; count=10; };
			class _xx_arifle_mas_mk17_sd { weapon="arifle_mas_mk17_sd"; count=10; };
			class _xx_arifle_mas_m16_sd { weapon="arifle_mas_m16_sd"; count=10; };
			class _xx_R3F_Famas_G2_HG { weapon="R3F_Famas_G2_HG"; count=10; };
			class _xx_G36k_r { weapon="G36k_r"; count=10; };
			class _xx_kio_l85a2_s { weapon="kio_l85a2_s"; count=10; };
			class _xx_STI_MAAWS { weapon="STI_MAAWS"; count=10; };
			};
		
		class TransportMagazines
			{
			class _xx_SmokeShell { magazine="SmokeShell"; count=100; };
			class _xx_30Rnd_mas_556x45_Stanag { magazine="30Rnd_mas_556x45_Stanag"; count=300; };
			class _xx_30Rnd_mas_556x45_T_Stanag { magazine="30Rnd_mas_556x45_T_Stanag"; count=100; };
			class _xx_20Rnd_mas_762x51_Stanag { magazine="20Rnd_mas_762x51_Stanag"; count=300; };
			class _xx_20Rnd_mas_762x51_T_Stanag { magazine="20Rnd_mas_762x51_T_Stanag"; count=100; };
			class _xx_R3F_30Rnd_556x45_FAMAS { magazine="R3F_30Rnd_556x45_FAMAS"; count=300; };
			class _xx_R3F_30Rnd_556x45_TRACER_FAMAS { magazine="R3F_30Rnd_556x45_TRACER_FAMAS"; count=100; };
			class _xx_g36_mag { magazine="g36_mag"; count=300; };
			class _xx_L85_30Rnd_556x45_Stanag { magazine="L85_30Rnd_556x45_Stanag"; count=300; };
			class _xx_L85_30Rnd_556x45_Stanag_Tracer { magazine="L85_30Rnd_556x45_Stanag_Tracer"; count=100; };
			class _xx_STI_84MM_HEAT { magazine="STI_84MM_HEAT"; count=20; };
			class _xx_STI_84MM_HE { magazine="STI_84MM_HE"; count=20; };
			class _xx_STI_84MM_SMOKE { magazine="STI_84MM_SMOKE"; count=20; };
			};
			
		class TransportItems
			{
			class _xx_optic_mas_MRCO_camo { name="optic_mas_MRCO_camo"; count=10; };
			class _xx_optic_MRCO { name="optic_MRCO"; count=10; };
			class _xx_optic_mas_acog { name="optic_mas_acog"; count=10; };
			class _xx_FHQ_optic_AC11704_tan { name="FHQ_optic_AC11704_tan"; count=10; };
			class _xx_FHQ_optic_AC11704 { name="FHQ_optic_AC11704"; count=10; };
			class _xx_FHQ_optic_HWS_G33_tan { name="FHQ_optic_HWS_G33_tan"; count=10; };
			class _xx_FHQ_optic_HWS_G33 { name="FHQ_optic_HWS_G33"; count=10; };
			class _xx_muzzle_snds_M { name="muzzle_snds_M"; count=10; };
			class _xx_FHQ_acc_LLM01L { name="FHQ_acc_LLM01L"; count=10; };			
			};
			
		class TransportBackpacks
			{
			
			};		
		
		
	};
	
	class loberg_TFV_ammobox_grenadier: Box_NATO_AmmoVeh_F
	{
		displayName = "TFV Grenadier Supplies";
		descriptionShort = "TFV Grenadier Supplies";
		maximumLoad = 999999;
		
		class EventHandlers {
			init = "_this execVM '\lel_tfvammoboxes\boxWeight.sqf'";
		};
		
		icon="iconCrateWpns";
		hiddenSelectionsTextures[]=
		{
			"\lel_tfvammoboxes\data\TFV_supply_grenadier.paa",
			"\lel_tfvammoboxes\data\AmmoVeh_CO.paa"
		};
		
		class TransportWeapons
			{
			class _xx_arifle_mas_m4_m203_sd { weapon="arifle_mas_m4_m203_sd"; count=10; };
			class _xx_arifle_mas_m4_m203c_sd { weapon="arifle_mas_m4_m203c_sd"; count=10; };
			class _xx_arifle_mas_hk416_m203_sd { weapon="arifle_mas_hk416_m203_sd"; count=10; };
			class _xx_arifle_mas_hk416_m203c_sd { weapon="arifle_mas_hk416_m203c_sd"; count=10; };
			class _xx_arifle_mas_l119_m203_sd { weapon="arifle_mas_l119_m203_sd"; count=10; };
			class _xx_arifle_mas_mk16_l_gl_sd { weapon="arifle_mas_mk16_l_gl_sd"; count=10; };
			class _xx_arifle_mas_mk17_gl_sd { weapon="arifle_mas_mk17_gl_sd"; count=10; };
			class _xx_arifle_mas_m16_gl_sd { weapon="arifle_mas_m16_gl_sd"; count=10; };
			class _xx_R3F_Famas_G2_M203 { weapon="R3F_Famas_G2_M203"; count=10; };
			class _xx_G36k_rgl { weapon="G36k_rgl"; count=10; };
			class _xx_arifle_mas_g3s_m203 { weapon="arifle_mas_g3s_m203"; count=10; };
			};
		
		class TransportMagazines
			{
			class _xx_SmokeShell { magazine="SmokeShell"; count=100; };
			class _xx_30Rnd_mas_556x45_Stanag { magazine="30Rnd_mas_556x45_Stanag"; count=300; };
			class _xx_30Rnd_mas_556x45_T_Stanag { magazine="30Rnd_mas_556x45_T_Stanag"; count=100; };
			class _xx_20Rnd_mas_762x51_Stanag { magazine="20Rnd_mas_762x51_Stanag"; count=300; };
			class _xx_20Rnd_mas_762x51_T_Stanag { magazine="20Rnd_mas_762x51_T_Stanag"; count=100; };
			class _xx_R3F_30Rnd_556x45_FAMAS { magazine="R3F_30Rnd_556x45_FAMAS"; count=300; };
			class _xx_R3F_30Rnd_556x45_TRACER_FAMAS { magazine="R3F_30Rnd_556x45_TRACER_FAMAS"; count=100; };
			class _xx_g36_mag { magazine="g36_mag"; count=300; };
			class _xx_L85_30Rnd_556x45_Stanag { magazine="L85_30Rnd_556x45_Stanag"; count=300; };
			class _xx_L85_30Rnd_556x45_Stanag_Tracer { magazine="L85_30Rnd_556x45_Stanag_Tracer"; count=100; };
			class _xx_1Rnd_HE_Grenade_shell { magazine="1Rnd_HE_Grenade_shell"; count=100; };
			class _xx_1Rnd_Smoke_Grenade_shell { magazine="1Rnd_Smoke_Grenade_shell"; count=100; };
			class _xx_1Rnd_SmokeRed_Grenade_shell { magazine="1Rnd_SmokeRed_Grenade_shell"; count=100; };	
			};
			
		class TransportItems
			{
			class _xx_optic_mas_MRCO_camo { name="optic_mas_MRCO_camo"; count=10; };
			class _xx_optic_MRCO { name="optic_MRCO"; count=10; };
			class _xx_optic_mas_acog { name="optic_mas_acog"; count=10; };
			class _xx_FHQ_optic_AC11704_tan { name="FHQ_optic_AC11704_tan"; count=10; };
			class _xx_FHQ_optic_AC11704 { name="FHQ_optic_AC11704"; count=10; };
			class _xx_FHQ_optic_HWS_G33_tan { name="FHQ_optic_HWS_G33_tan"; count=10; };
			class _xx_FHQ_optic_HWS_G33 { name="FHQ_optic_HWS_G33"; count=10; };
			class _xx_muzzle_snds_M { name="muzzle_snds_M"; count=10; };
			class _xx_FHQ_acc_LLM01L { name="FHQ_acc_LLM01L"; count=10; };		
			};
			
		class TransportBackpacks
			{
			
			};
		
	};
	
	class loberg_TFV_ammobox_marksman: Box_NATO_AmmoVeh_F
	{
		displayName = "TFV Marksman Supplies";
		descriptionShort = "TFV Marksman Supplies";
		maximumLoad = 999999;
		
		class EventHandlers {
			init = "_this execVM '\lel_tfvammoboxes\boxWeight.sqf'";
		};
		
		icon="iconCrateWpns";
		hiddenSelectionsTextures[]=
		{
			"\lel_tfvammoboxes\data\TFV_supply_marksman.paa",
			"\lel_tfvammoboxes\data\AmmoVeh_CO.paa"
		};
		
		class TransportWeapons
			{
			class _xx_Laserdesignator { weapon="Laserdesignator"; count=10; };
			class _xx_srifle_mas_ebr_h { weapon="srifle_mas_ebr_h"; count=10; };
			class _xx_srifle_mas_mk17s_h { weapon="srifle_mas_mk17s_h"; count=10; };
			class _xx_srifle_mas_hk417_h { weapon="srifle_mas_hk417_h"; count=10; };
			class _xx_srifle_mas_sr25_h { weapon="srifle_mas_sr25_h"; count=10; };
			class _xx_srifle_mas_m24_h { weapon="srifle_mas_m24_h"; count=10; };
			class _xx_srifle_mas_m107_h { weapon="srifle_mas_m107_h"; count=10; };
			};
		
		class TransportMagazines
			{
			class _xx_SmokeShell { magazine="SmokeShell"; count=100; };
			class _xx_SmokeShellPurple { magazine="SmokeShellPurple"; count=100; };
			class _xx_20Rnd_mas_762x51_Stanag { magazine="20Rnd_mas_762x51_Stanag"; count=30; };
			class _xx_20Rnd_mas_762x51_T_Stanag { magazine="20Rnd_mas_762x51_T_Stanag"; count=30; };
			class _xx_5Rnd_mas_762x51_Stanag { magazine="5Rnd_mas_762x51_Stanag"; count=30; };
			class _xx_5Rnd_mas_762x51_T_Stanag { magazine="5Rnd_mas_762x51_T_Stanag"; count=10; };
			class _xx_5Rnd_mas_127x99_Stanag { magazine="5Rnd_mas_127x99_Stanag"; count=30; };
			class _xx_5Rnd_mas_127x99_T_Stanag { magazine="5Rnd_mas_127x99_T_Stanag"; count=10; };
			class _xx_5Rnd_mas_127x99_dem_Stanag { magazine="5Rnd_mas_127x99_dem_Stanag"; count=10; };
			};
			
		class TransportItems
			{
			class _xx_Laserbatteries { name="Laserbatteries"; count=10; };
			class _xx_cse_ab_Kestrel4500 { name="cse_ab_Kestrel4500"; count=10; };
			class _xx_cse_ab_ATragMX { name="cse_ab_ATragMX"; count=10; };
			class _xx_muzzle_mas_snds_SH { name="muzzle_mas_snds_SH"; count=10; };
			class _xx_muzzle_mas_snds_SM { name="muzzle_mas_snds_SM"; count=10; };
			class _xx_muzzle_mas_snds_SV { name="muzzle_mas_snds_SV"; count=10; };
			class _xx_optic_SOS { name="optic_SOS"; count=10; };
			class _xx_optic_MRCO { name="optic_MRCO"; count=10; };
			class _xx_optic_LRPS { name="optic_LRPS"; count=10; };
			class _xx_FHQ_optic_LeupoldERT { name="FHQ_optic_LeupoldERT"; count=10; };
			class _xx_U_mas_uk_B_GhillieSuit { name="U_mas_uk_B_GhillieSuit"; count=2; };
			class _xx_U_mas_uk_B_GhillieSuit_v { name="U_mas_uk_B_GhillieSuit_v"; count=2; };
			class _xx_U_mas_uk_B_GhillieSuit_d { name="U_mas_uk_B_GhillieSuit_d"; count=2; };
			class _xx_U_mas_uk_B_GhillieSuit_w { name="U_mas_uk_B_GhillieSuit_w"; count=2; };
			class _xx_V_mas_uk_ChestrigB_rgr_w { name="V_mas_uk_ChestrigB_rgr_w"; count=2; };
			};
			
		class TransportBackpacks
			{
			
			};
		
	};
	
	class loberg_TFV_ammobox_mg: Box_NATO_AmmoVeh_F
	{
		displayName = "TFV MG Supplies";
		descriptionShort = "TFV MG Supplies";
		maximumLoad = 999999;
		
		class EventHandlers {
			init = "_this execVM '\lel_tfvammoboxes\boxWeight.sqf'";
		};
		
		icon="iconCrateWpns";
		hiddenSelectionsTextures[]=
		{
			"\lel_tfvammoboxes\data\TFV_supply_mg.paa",
			"\lel_tfvammoboxes\data\AmmoVeh_CO.paa"
		};
		
		class TransportWeapons
			{
			class _xx_LMG_mas_Mk200_F { weapon="LMG_mas_Mk200_F"; count=10; };
			class _xx_LMG_mas_M249_F { weapon="LMG_mas_M249_F"; count=10; };
			class _xx_LMG_mas_M249a_F { weapon="LMG_mas_M249a_F"; count=10; };
			class _xx_LMG_mas_Mk48_F { weapon="LMG_mas_Mk48_F"; count=10; };
			class _xx_LMG_mas_M240_F { weapon="LMG_mas_M240_F"; count=10; };
			class _xx_LMG_mas_mg3_F { weapon="LMG_mas_mg3_F"; count=10; };
			class _xx_STI_L110A2 { weapon="STI_L110A2"; count=10; };
			class _xx_STI_KSP90 { weapon="STI_KSP90"; count=10; };
			class _xx_STI_M60E4 { weapon="STI_M60E4"; count=10; };
			class _xx_STI_MK46MOD0 { weapon="STI_MK46MOD0"; count=10; };
			class _xx_STI_FNMAG { weapon="STI_FNMAG"; count=10; };
			};
		
		class TransportMagazines
			{
			
			class _xx_SmokeShell { magazine="SmokeShell"; count=100; };
			class _xx_200Rnd_mas_556x45_Stanag { magazine="200Rnd_mas_556x45_Stanag"; count=300; };
			class _xx_200Rnd_mas_556x45_T_Stanag { magazine="200Rnd_mas_556x45_T_Stanag"; count=100; };
			class _xx_100Rnd_mas_762x51_Stanag { magazine="100Rnd_mas_762x51_Stanag"; count=300; };
			class _xx_150Rnd_762x51_Box { magazine="150Rnd_762x51_Box"; count=300; };
			class _xx_150Rnd_762x51_Box_Tracer { magazine="150Rnd_762x51_Box_Tracer"; count=100; };
			class _xx_sti_100Rnd_556x45 { magazine="sti_100Rnd_556x45"; count=300; };
			class _xx_sti_100Rnd_556x45_Tracer { magazine="sti_100Rnd_556x45_Tracer"; count=100; };
			class _xx_sti_200Rnd_556x45 { magazine="sti_200Rnd_556x45"; count=300; };
			class _xx_sti_200Rnd_556x45_Tracer { magazine="sti_200Rnd_556x45_Tracer"; count=100; };
			class _xx_sti_100Rnd_762x51 { magazine="sti_100Rnd_762x51"; count=300; };
			class _xx_sti_100Rnd_762x51_Tracer { magazine="sti_100Rnd_762x51_Tracer"; count=100; };
			};
			
		class TransportItems
			{
			class _xx_optic_mas_MRCO_camo { name="optic_mas_MRCO_camo"; count=10; };
			class _xx_optic_MRCO { name="optic_MRCO"; count=10; };
			class _xx_optic_mas_acog { name="optic_mas_acog"; count=10; };
			class _xx_FHQ_optic_AC11704_tan { name="FHQ_optic_AC11704_tan"; count=10; };
			class _xx_FHQ_optic_AC11704 { name="FHQ_optic_AC11704"; count=10; };
			class _xx_FHQ_optic_HWS_G33_tan { name="FHQ_optic_HWS_G33_tan"; count=10; };
			class _xx_FHQ_optic_HWS_G33 { name="FHQ_optic_HWS_G33"; count=10; };
			class _xx_muzzle_snds_M { name="muzzle_snds_M"; count=10; };
			class _xx_FHQ_acc_LLM01L { name="FHQ_acc_LLM01L"; count=10; };
			};
			
		class TransportBackpacks
			{
			
			};	
		
	};
	
	class loberg_TFV_ammobox_multi: Box_NATO_AmmoVeh_F
	{
		displayName = "TFV Multi Supplies";
		descriptionShort = "TFV Multi Supplies";
		maximumLoad = 999999;
		
		class EventHandlers {
			init = "_this execVM '\lel_tfvammoboxes\boxWeight.sqf'";
		};
		
		icon="iconCrateWpns";
		hiddenSelectionsTextures[]=
		{
			"\lel_tfvammoboxes\data\TFV_supply_multi.paa",
			"\lel_tfvammoboxes\data\AmmoVeh_CO.paa"
		};
		
		class TransportWeapons
			{
			class _xx_AGM_Vector { weapon="AGM_Vector"; count=10; };
			class _xx_Binocular { weapon="Binocular"; count=10; };
			};
		
		class TransportMagazines
			{
			class _xx_SmokeShell { magazine="SmokeShell"; count=100; };
			class _xx_B_IR_Grenade { magazine="B_IR_Grenade"; count=100; };
			class _xx_MiniGrenade { magazine="MiniGrenade"; count=100; };
			class _xx_HandGrenade { magazine="HandGrenade"; count=100; };
			class _xx_AGM_HandFlare_Green { magazine="AGM_HandFlare_Green"; count=100; };
			};
			
		class TransportItems
			{
			class _xx_AGM_CableTie { name="AGM_CableTie"; count=100; };
			class _xx_AGM_MapTools { name="AGM_MapTools"; count=100; };
			class _xx_AGM_ItemKestrel { name="AGM_ItemKestrel"; count=100; };
			class _xx_AGM_IR_Strobe_Item { name="AGM_IR_Strobe_Item"; count=100; };
			class _xx_AGM_M84 { name="AGM_M84"; count=100; };
			class _xx_tf_anprc152 { name="tf_anprc152"; count=100; };
			class _xx_tf_microdagr { name="tf_microdagr"; count=100; };
			class _xx_ItemAndroid { name="ItemAndroid"; count=100; };
			class _xx_ItemGPS { name="ItemGPS"; count=100; };
			};
			
		class TransportBackpacks
			{
			class _xx_B_mas_Kitbag_black { backpack="B_mas_Kitbag_black"; count=10; };
			class _xx_B_mas_Kitbag_des { backpack="B_mas_Kitbag_des"; count=10; };
			class _xx_B_mas_Kitbag_rng { backpack="B_mas_Kitbag_rng"; count=10; };
			class _xx_B_mas_Kitbag_mul { backpack="B_mas_Kitbag_mul"; count=10; };
			class _xx_B_mas_Kitbag_wint { backpack="B_mas_Kitbag_wint"; count=10; };
			};
		
	};
	
	
	class loberg_TFV_ammobox_rifleman: Box_NATO_AmmoVeh_F
	{
		displayName = "TFV Rifleman Supplies";
		descriptionShort = "TFV Rifleman Supplies";
		maximumLoad = 999999;
		
		class EventHandlers {
			init = "_this execVM '\lel_tfvammoboxes\boxWeight.sqf'";
		};
		
		icon="iconCrateWpns";
		hiddenSelectionsTextures[]=
		{
			"\lel_tfvammoboxes\data\TFV_supply_rifleman.paa",
			"\lel_tfvammoboxes\data\AmmoVeh_CO.paa"
		};
		
		class TransportWeapons
			{
			class _xx_arifle_mas_m4_sd { weapon="arifle_mas_m4_sd"; count=10; };
			class _xx_arifle_mas_m4c_sd { weapon="arifle_mas_m4c_sd"; count=10; };
			class _xx_arifle_mas_hk416_sd { weapon="arifle_mas_hk416_sd"; count=10; };
			class _xx_arifle_mas_hk416c_sd { weapon="arifle_mas_hk416c_sd"; count=10; };
			class _xx_arifle_mas_l119_sd { weapon="arifle_mas_l119_sd"; count=10; };
			class _xx_arifle_mas_mk16_l_sd { weapon="arifle_mas_mk16_l_sd"; count=10; };
			class _xx_arifle_mas_mk17_sd { weapon="arifle_mas_mk17_sd"; count=10; };
			class _xx_arifle_mas_m16_sd { weapon="arifle_mas_m16_sd"; count=10; };
			class _xx_R3F_Famas_G2_HG { weapon="R3F_Famas_G2_HG"; count=10; };
			class _xx_G36k_r { weapon="G36k_r"; count=10; };
			class _xx_kio_l85a2_s { weapon="kio_l85a2_s"; count=10; };
			};
		
		class TransportMagazines
			{
			class _xx_SmokeShell { magazine="SmokeShell"; count=100; };
			class _xx_30Rnd_mas_556x45_Stanag { magazine="30Rnd_mas_556x45_Stanag"; count=300; };
			class _xx_30Rnd_mas_556x45_T_Stanag { magazine="30Rnd_mas_556x45_T_Stanag"; count=100; };
			class _xx_20Rnd_mas_762x51_Stanag { magazine="20Rnd_mas_762x51_Stanag"; count=300; };
			class _xx_20Rnd_mas_762x51_T_Stanag { magazine="20Rnd_mas_762x51_T_Stanag"; count=100; };
			class _xx_R3F_30Rnd_556x45_FAMAS { magazine="R3F_30Rnd_556x45_FAMAS"; count=300; };
			class _xx_R3F_30Rnd_556x45_TRACER_FAMAS { magazine="R3F_30Rnd_556x45_TRACER_FAMAS"; count=100; };
			class _xx_g36_mag { magazine="g36_mag"; count=300; };
			class _xx_L85_30Rnd_556x45_Stanag { magazine="L85_30Rnd_556x45_Stanag"; count=300; };
			class _xx_L85_30Rnd_556x45_Stanag_Tracer { magazine="L85_30Rnd_556x45_Stanag_Tracer"; count=100; };
			};
			
		class TransportItems
			{
			class _xx_optic_mas_MRCO_camo { name="optic_mas_MRCO_camo"; count=10; };
			class _xx_optic_MRCO { name="optic_MRCO"; count=10; };
			class _xx_optic_mas_acog { name="optic_mas_acog"; count=10; };
			class _xx_FHQ_optic_AC11704_tan { name="FHQ_optic_AC11704_tan"; count=10; };
			class _xx_FHQ_optic_AC11704 { name="FHQ_optic_AC11704"; count=10; };
			class _xx_FHQ_optic_HWS_G33_tan { name="FHQ_optic_HWS_G33_tan"; count=10; };
			class _xx_FHQ_optic_HWS_G33 { name="FHQ_optic_HWS_G33"; count=10; };
			class _xx_muzzle_snds_M { name="muzzle_snds_M"; count=10; };
			class _xx_FHQ_acc_LLM01L { name="FHQ_acc_LLM01L"; count=10; };		
			};
			
		class TransportBackpacks
			{
			
			};
		
	};
	
	class loberg_TFV_ammobox_vehicle: Box_NATO_AmmoVeh_F
	{
		displayName = "TFV Vehicle Supplies";
		descriptionShort = "TFV Vehicle Supplies";
		maximumLoad = 999999;
		
		class EventHandlers {
			init = "_this execVM '\lel_tfvammoboxes\boxWeight.sqf'";
		};
		
		icon="iconCrateWpns";
		hiddenSelectionsTextures[]=
		{
			"\lel_tfvammoboxes\data\TFV_supply_vehicle.paa",
			"\lel_tfvammoboxes\data\AmmoVeh_CO.paa"
		};
		
		class TransportWeapons
			{
			
			};
		
		class TransportMagazines
			{
			
			};
			
		class TransportItems
			{
			
			};
			
		class TransportBackpacks
			{
			
			};
		
	};
	
	class loberg_TFV_ammobox_crew: Box_NATO_AmmoVeh_F
	{
		displayName = "TFV Crew Supplies";
		descriptionShort = "TFV Crew Supplies";
		maximumLoad = 999999;
		

		class EventHandlers {
			init = "_this execVM '\lel_tfvammoboxes\boxWeight.sqf'";
		};
		
		icon="iconCrateWpns";
		hiddenSelectionsTextures[]=
		{
			"\lel_tfvammoboxes\data\TFV_supply_crew.paa",
			"\lel_tfvammoboxes\data\AmmoVeh_CO.paa"
		};
		
		class TransportWeapons
			{
			class _xx_R3F_STINGER { weapon="R3F_STINGER"; count=10; };
			};
		
		class TransportMagazines
			{
			class _xx_Chemlight_green { magazine="Chemlight_green"; count=100; };
			class _xx_SmokeShellYellow { magazine="SmokeShellYellow"; count=100; };
			class _xx_SmokeShell { magazine="SmokeShell"; count=100; };
			class _xx_AGM_HandFlare_Green { magazine="AGM_HandFlare_Green"; count=100; };
			class _xx_AGM_HandFlare_White { magazine="AGM_HandFlare_White"; count=100; };
			class _xx_R3F_STINGER_mag { magazine="R3F_STINGER_mag"; count=100; };
			};
			
		class TransportItems
			{
			class _xx_ToolKit { name="ToolKit"; count=10; };
			class _xx_TEC_H_CrewHelmet { name="TEC_H_CrewHelmet"; count=10; };
			class _xx_NOR_Helmet_Crew { name="NOR_Helmet_Crew"; count=10; };
			class _xx_H_CAF_CG634_TW_net_GDN { name="H_CAF_CG634_TW_net_GDN"; count=10; };
			class _xx_NOR_Uniform_Crew_Standard { name="NOR_Uniform_Crew_Standard"; count=10; };
			class _xx_U_mas_uk_B_CRW { name="U_mas_uk_B_CRW"; count=10; };
			};
			
		class TransportBackpacks
			{
			class _xx_tf_rt1523g { backpack="tf_rt1523g"; count=5; };
			class _xx_O_HMG_01_high_weapon_F { backpack="O_HMG_01_high_weapon_F"; count=3; };
			class _xx_O_HMG_01_support_high_F { backpack="O_HMG_01_support_high_F"; count=3; };
			};
		
	};
	
	class loberg_TFV_ammobox_aviation: Box_NATO_AmmoVeh_F
	{
		displayName = "TFV Aviation Supplies";
		descriptionShort = "TFV Aviation Supplies";
		maximumLoad = 999999;
		
		class EventHandlers {
			init = "_this execVM '\lel_tfvammoboxes\boxWeight.sqf'";
		};
		
		icon="iconCrateWpns";
		hiddenSelectionsTextures[]=
		{
			"\lel_tfvammoboxes\data\TFV_supply_aviation.paa",
			"\lel_tfvammoboxes\data\AmmoVeh_CO.paa"
		};
	
		class TransportWeapons
			{
			class _xx_RH_m9c { weapon="RH_m9c"; count=10; };
			};
		
		class TransportMagazines
			{
			class _xx_SmokeShellGreen { magazine="SmokeShellGreen"; count=100; };
			class _xx_SmokeShellBlue { magazine="SmokeShellBlue"; count=100; };
			class _xx_AGM_HandFlare_Green { magazine="AGM_HandFlare_Green"; count=100; };
			class _xx_AGM_HandFlare_White { magazine="AGM_HandFlare_White"; count=100; };
			class _xx_RH_15Rnd_9x19_M9 { magazine="RH_15Rnd_9x19_M9"; count=100; };
			};
			
		class TransportItems
			{
			class _xx_AGM_UAVBattery { name="AGM_UAVBattery"; count=100; };
			class _xx_B_UavTerminal { name="B_UavTerminal"; count=100; };
			class _xx_ToolKit { name="ToolKit"; count=10; };
			class _xx_Chemlight_green { name="Chemlight_green"; count=100; };
			class _xx_H_PilotHelmetHeli_PMC { name="H_PilotHelmetHeli_PMC"; count=10; };
			class _xx_H_CrewHelmetHeli_B { name="H_CrewHelmetHeli_B"; count=10; };
			class _xx_H_PilotHelmetHeli_B { name="H_PilotHelmetHeli_B"; count=10; };
			class _xx_JS_JC_FA18_PilotHelmet { name="JS_JC_FA18_PilotHelmet"; count=10; };
			class _xx_NOR_Uniform_Crew_Standard { name="NOR_Uniform_Crew_Standard"; count=10; };
			class _xx_JS_S_FA18X_PilotCoveralls { name="JS_S_FA18X_PilotCoveralls"; count=10; };
			class _xx_U_B_HeliPilotCoveralls { name="U_B_HeliPilotCoveralls"; count=10; };
			class _xx_RH_m9qd { name="RH_m9qd"; count=10; };
			class _xx_RH_X300 { name="RH_X300"; count=10; };
			};
			
		class TransportBackpacks
			{
			class _xx_tf_rt1523g { backpack="tf_rt1523g"; count=5; };
			class _xx_B_MAV_B_BACKPACK { backpack="B_MAV_B_BACKPACK"; count=3; };
			class _xx_I_UAV_01_backpack_F { backpack="I_UAV_01_backpack_F"; count=3; };
			};
		
	};

	class loberg_TFV_ammobox_eod: Box_NATO_AmmoVeh_F
	{
		displayName = "TFV EOD Supplies";
		descriptionShort = "TFV EOD Supplies";
		maximumLoad = 999999;
		
		class EventHandlers {
			init = "_this execVM '\lel_tfvammoboxes\boxWeight.sqf'";
		};
		
		icon="iconCrateWpns";
		hiddenSelectionsTextures[]=
		{
			"\lel_tfvammoboxes\data\TFV_supply_eod.paa",
			"\lel_tfvammoboxes\data\AmmoVeh_CO.paa"
		};
		
		class TransportWeapons
			{
			
			};
		
		class TransportMagazines
			{
			class _xx_ATMine_Range_Mag { magazine="ATMine_Range_Mag"; count=100; };
			class _xx_APERSMine_Range_Mag { magazine="APERSMine_Range_Mag"; count=100; };
			class _xx_APERSBoundingMine_Range_Mag { magazine="APERSBoundingMine_Range_Mag"; count=100; };
			class _xx_SLAMDirectionalMine_Wire_Mag { magazine="SLAMDirectionalMine_Wire_Mag"; count=100; };
			class _xx_ClaymoreDirectionalMine_Remote_Mag { magazine="ClaymoreDirectionalMine_Remote_Mag"; count=100; };
			class _xx_APERSTripMine_Wire_Mag { magazine="APERSTripMine_Wire_Mag"; count=100; };
			class _xx_SatchelCharge_Remote_Mag { magazine="SatchelCharge_Remote_Mag"; count=100; };
			class _xx_DemoCharge_Remote_Mag { magazine="DemoCharge_Remote_Mag"; count=100; };
			};
			
		class TransportItems
			{
			class _xx_AGM_DefusalKit { name="AGM_DefusalKit"; count=100; };
			class _xx_DemoCharge_Remote_Mag { name="DemoCharge_Remote_Mag"; count=100; };
			class _xx_AGM_M26_Clacker { name="AGM_M26_Clacker"; count=100; };
			class _xx_MineDetector { name="MineDetector"; count=100; };
			};
			
		class TransportBackpacks
			{
			
			};
		
	};

	class loberg_TFV_ammobox_ammo: Box_NATO_AmmoVeh_F
	{
		displayName = "TFV Ammunition Supplies";
		descriptionShort = "TFV Ammunition Supplies";
		maximumLoad = 999999;
		
		class EventHandlers {
			init = "_this execVM '\lel_tfvammoboxes\boxWeight.sqf'";
		};

		icon="iconCrateWpns";
		hiddenSelectionsTextures[]=
		{
			"\lel_tfvammoboxes\data\TFV_supply_ammo.paa",
			"\lel_tfvammoboxes\data\AmmoVeh_CO.paa"
		};
		
		class TransportWeapons
			{
			
			};
		
		class TransportMagazines
			{
			class _xx_SmokeShell { magazine="SmokeShell"; count=100; };
			class _xx_SmokeShellRed { magazine="SmokeShellRed"; count=100; };
			class _xx_30Rnd_mas_556x45_Stanag { magazine="30Rnd_mas_556x45_Stanag"; count=300; };
			class _xx_20Rnd_mas_762x51_Stanag { magazine="20Rnd_mas_762x51_Stanag"; count=300; };
			class _xx_L85_30Rnd_556x45_Stanag { magazine="L85_30Rnd_556x45_Stanag"; count=300; };
			class _xx_g36_mag { magazine="g36_mag"; count=300; };
			class _xx_R3F_30Rnd_556x45_FAMAS { magazine="R3F_30Rnd_556x45_FAMAS"; count=300; };
			class _xx_200Rnd_mas_556x45_T_Stanag { magazine="200Rnd_mas_556x45_T_Stanag"; count=100; };
			class _xx_150Rnd_762x51_Box_Tracer { magazine="150Rnd_762x51_Box_Tracer"; count=100; };
			class _xx_sti_200Rnd_556x45_Tracer { magazine="sti_200Rnd_556x45_Tracer"; count=100; };
			class _xx_sti_100Rnd_762x51_Tracer { magazine="sti_100Rnd_762x51_Tracer"; count=100; };
			class _xx_sti_100Rnd_556x45_Tracer { magazine="sti_100Rnd_556x45_Tracer"; count=100; };
			class _xx_100Rnd_mas_762x51_Stanag { magazine="100Rnd_mas_762x51_Stanag"; count=300; };
			class _xx_5Rnd_mas_762x51_Stanag { magazine="5Rnd_mas_762x51_Stanag"; count=30; };
			class _xx_5Rnd_mas_127x99_Stanag { magazine="5Rnd_mas_127x99_Stanag"; count=30; };
			class _xx_STI_84MM_HEAT { magazine="STI_84MM_HEAT"; count=20; };
			class _xx_STI_84MM_HE { magazine="STI_84MM_HE"; count=20; };
			class _xx_STI_84MM_SMOKE { magazine="STI_84MM_SMOKE"; count=20; };
			};
			
		class TransportItems
			{
			class _xx_AGM_CableTie { name="AGM_CableTie"; count=100; };
			class _xx_AGM_Bandage { name="AGM_Bandage"; count=300; };
			class _xx_AGM_Morphine { name="AGM_Morphine"; count=100; };
			class _xx_AGM_Epipen { name="AGM_Epipen"; count=100; };
			class _xx_AGM_Bloodbag { name="AGM_Bloodbag"; count=100; };
			};
			
		class TransportBackpacks
			{
			
			};
		
		
	};
	
};
