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
		"loberg_TFV_ammobox_ammo",
		"TFV_CargoNet"
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
			class _xx_30Rnd_556x45_Stanag { magazine="30Rnd_556x45_Stanag"; count=50; };
			class _xx_20Rnd_mas_762x51_Stanag { magazine="20Rnd_mas_762x51_Stanag"; count=50; };
			class _xx_200Rnd_mas_556x45_T_Stanag { magazine="200Rnd_mas_556x45_T_Stanag"; count=50; };
			class _xx_150Rnd_762x51_Box_Tracer { magazine="150Rnd_762x51_Box_Tracer"; count=50; };
			class _xx_sti_200Rnd_556x45_Tracer { magazine="sti_200Rnd_556x45_Tracer"; count=50; };
			class _xx_sti_100Rnd_762x51_Tracer { magazine="sti_100Rnd_762x51_Tracer"; count=50; };
			class _xx_sti_100Rnd_556x45_Tracer { magazine="sti_100Rnd_556x45_Tracer"; count=50; };
			class _xx_100Rnd_mas_762x51_Stanag { magazine="100Rnd_mas_762x51_Stanag"; count=20; };
			class _xx_5Rnd_mas_762x51_Stanag { magazine="5Rnd_mas_762x51_Stanag"; count=10; };
			class _xx_5Rnd_mas_127x99_Stanag { magazine="5Rnd_mas_127x99_Stanag"; count=10; };
			class _xx_STI_84MM_HEAT { magazine="STI_84MM_HEAT"; count=10; };
			class _xx_STI_84MM_HE { magazine="STI_84MM_HE"; count=10; };
			class _xx_STI_84MM_SMOKE { magazine="STI_84MM_SMOKE"; count=50; };
			};
			
			class TransportItems
			{
			class _xx_AGM_CableTie { name="AGM_CableTie"; count=20; };
			class _xx_cse_bandage_basic { name="cse_bandage_basic"; count=20; };
			class _xx_cse_morphine { name="cse_morphine"; count=20; };
			class _xx_cse_epinephrine { name="cse_epinephrine"; count=30; };
			class _xx_cse_saline_iv { name="cse_saline_iv"; count=30; };

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
			class _xx_hlc_rifle_Colt727_GL { weapon="hlc_rifle_Colt727_GL"; count=10; };
			class _xx_rhs_m4_m320 { weapon="rhs_m4_m320"; count=10; };
			class _xx_rhs_m4a1_m320 { weapon="rhs_m4a1_m320"; count=10; };
			class _xx_RHARD_M4DDRGLD_F { weapon="RHARD_M4DDRGLD_F"; count=10; };
			class _xx_arifle_Mk20_GL_plain_F { weapon="arifle_Mk20_GL_plain_F"; count=10; };
			class _xx_arifle_MX_GL_Black_F { weapon="arifle_MX_GL_Black_F"; count=10; };
			class _xx_arifle_mas_mk16_l_gl { weapon="arifle_mas_mk16_l_gl"; count=10; };
			class _xx_arifle_mas_hk416_gl { weapon="arifle_mas_hk416_gl"; count=10; };
			};

		class TransportMagazines
			{
			class _xx_rhs_mag_m4009 { magazine="rhs_mag_m4009"; count=100; };
			class _xx_1Rnd_HE_Grenade_shell { magazine="1Rnd_HE_Grenade_shell"; count=100; };
			class _xx_1Rnd_Smoke_Grenade_shell { magazine="1Rnd_Smoke_Grenade_shell"; count=100; };
			class _xx_1Rnd_SmokeRed_Grenade_shell { magazine="1Rnd_SmokeRed_Grenade_shell"; count=100; };
			class _xx_30Rnd_556x45_Stanag { magazine="30Rnd_556x45_Stanag"; count=300; };
			class _xx_30Rnd_556x45_Stanag_Tracer_Green { magazine="30Rnd_556x45_Stanag_Tracer_Green"; count=100; };
			class _xx_30Rnd_65x39_caseless_mag { magazine="30Rnd_65x39_caseless_mag"; count=100; };
			class _xx_AGM_30Rnd_65x39_caseless_mag_Tracer_Dim { magazine="AGM_30Rnd_65x39_caseless_mag_Tracer_Dim"; count=100; };
			class _xx_SmokeShell { magazine="SmokeShell"; count=100; };
			class _xx_SmokeShellRed { magazine="SmokeShellRed"; count=100; };
			class _xx_SmokeShellGreen { magazine="SmokeShellGreen"; count=100; };
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
			class _xx_muzzle_snds_H { name="muzzle_snds_H"; count=10; };
			class _xx_hlc_muzzle_556NATO_KAC { name="hlc_muzzle_556NATO_KAC"; count=10; };
			class _xx_R3F_SILENCIEUX_HK416 { name="R3F_SILENCIEUX_HK416"; count=10; };
			class _xx_FHQ_acc_LLM01L { name="FHQ_acc_LLM01L"; count=10; };
			class _xx_FHQ_acc_ANPEQ15_black { name="FHQ_acc_ANPEQ15_black"; count=10; };
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
			class _xx_hlc_smg_mp5n { weapon="hlc_smg_mp5n"; count=10; };
			class _xx_C1987_MP7 { weapon="C1987_MP7"; count=10; };
			class _xx_arifle_Mk20C_plain_F { weapon="arifle_Mk20C_plain_F"; count=10; };
			class _xx_arifle_MXC_Black_F { weapon="arifle_MXC_Black_F"; count=10; };
			class _xx_hlc_rifle_CQBR { weapon="hlc_rifle_CQBR"; count=10; };
			};
		
		class TransportMagazines
			{
			class _xx_SmokeShell { magazine="SmokeShell"; count=100; };
			class _xx_hlc_30Rnd_9x19_B_MP5 { magazine="hlc_30Rnd_9x19_B_MP5"; count=300; };
			class _xx_hlc_30Rnd_9x19_SD_MP5 { magazine="hlc_30Rnd_9x19_SD_MP5"; count=100; };
			class _xx_30Rnd_556x45_Stanag { magazine="30Rnd_556x45_Stanag"; count=300; };
			class _xx_30Rnd_556x45_Stanag_Tracer_Green { magazine="30Rnd_556x45_Stanag_Tracer_Green"; count=100; };
			class _xx_C1987_40Rnd_46x30_mp7 { magazine="C1987_40Rnd_46x30_mp7"; count=300; };
			};
			
		class TransportItems
			{
			class _xx_cse_packing_bandage { name="cse_packing_bandage"; count=300; };
			class _xx_cse_morphine { name="cse_morphine"; count=100; };
			class _xx_cse_epinephrine { name="cse_epinephrine"; count=100; };
			class _xx_cse_tourniquet { name="cse_tourniquet"; count=100; };
			class _xx_cse_atropine { name="cse_atropine"; count=100; };
			class _xx_cse_saline_iv { name="cse_saline_iv"; count=100; };
			class _xx_cse_bandageElastic { name="cse_bandageElastic"; count=100; };
			class _xx_cse_personal_aid_kit { name="cse_personal_aid_kit"; count=10; };
			class _xx_cse_itemBodyBag { name="cse_itemBodyBag"; count=100; };
			class _xx_optic_mas_aim { name="optic_mas_aim"; count=10; };
			class _xx_rhsusf_acc_compm4 { name="rhsusf_acc_compm4"; count=10; };
			class _xx_FHQ_optic_AC11704_tan { name="FHQ_optic_AC11704_tan"; count=10; };
			class _xx_FHQ_optic_AC11704 { name="FHQ_optic_AC11704"; count=10; };
			class _xx_optic_mas_Holosight_blk { name="optic_mas_Holosight_blk"; count=10; };
			class _xx_optic_Holosight { name="optic_Holosight"; count=10; };
			class _xx_muzzle_snds_M { name="muzzle_snds_M"; count=10; };
			class _xx_muzzle_snds_L { name="muzzle_snds_L"; count=10; };
			class _xx_muzzle_snds_H { name="muzzle_snds_H"; count=10; };
			class _xx_C1987_o_suppressor { name="C1987_o_suppressor"; count=10; };
			class _xx_FHQ_acc_LLM01L { name="FHQ_acc_LLM01L"; count=10; };
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
			class _xx_hlc_rifle_RU556 { weapon="hlc_rifle_RU556"; count=10; };
			class _xx_hlc_rifle_Colt727 { weapon="hlc_rifle_Colt727"; count=10; };
			class _xx_hlc_rifle_M4 { weapon="hlc_rifle_M4"; count=10; };
			class _xx_rhs_weap_m16a4 { weapon="rhs_weap_m16a4"; count=10; };
			class _xx_rhs_weap_m4a1 { weapon="rhs_weap_m4a1"; count=10; };
			class _xx_RHARD_M4DDRPD_F { weapon="RHARD_M4DDRPD_F"; count=10; };
			class _xx_RHARD_MK18AFG_F { weapon="RHARD_MK18AFG_F"; count=10; };
			class _xx_arifle_Mk20_plain_F { weapon="arifle_Mk20_plain_F"; count=10; };
			class _xx_arifle_MX_Black_F { weapon="arifle_MX_Black_F"; count=10; };
			class _xx_arifle_mas_mk16_l { weapon="arifle_mas_mk16_l"; count=10; };
			class _xx_R3F_HK416M { weapon="R3F_HK416M"; count=10; };
			class _xx_STI_MAAWS { weapon="STI_MAAWS"; count=10; };
			};
		
		class TransportMagazines
			{
			class _xx_SmokeShell { magazine="SmokeShell"; count=100; };
			class _xx_30Rnd_556x45_Stanag { magazine="30Rnd_556x45_Stanag"; count=300; };
			class _xx_30Rnd_556x45_Stanag_Tracer_Green { magazine="30Rnd_556x45_Stanag_Tracer_Green"; count=100; };
			class _xx_30Rnd_65x39_caseless_mag { magazine="30Rnd_65x39_caseless_mag"; count=100; };
			class _xx_AGM_30Rnd_65x39_caseless_mag_Tracer_Dim { magazine="AGM_30Rnd_65x39_caseless_mag_Tracer_Dim"; count=100; };
			class _xx_STI_84MM_HEAT { magazine="STI_84MM_HEAT"; count=20; };
			class _xx_STI_84MM_HE { magazine="STI_84MM_HE"; count=20; };
			class _xx_STI_84MM_SMOKE { magazine="STI_84MM_SMOKE"; count=20; };
			};
			
		class TransportItems
			{
			class _xx_rhsusf_acc_compm4 { name="rhsusf_acc_compm4"; count=10; };
			class _xx_FHQ_optic_AIM_tan { name="FHQ_optic_AIM_tan"; count=10; };
			class _xx_FHQ_optic_AC11704_tan { name="FHQ_optic_AC11704_tan"; count=10; };
			class _xx_FHQ_optic_AC11704 { name="FHQ_optic_AC11704"; count=10; };
			class _xx_optic_mas_Holosight_blk { name="optic_mas_Holosight_blk"; count=10; };
			class _xx_optic_Holosight { name="optic_Holosight"; count=10; };
			class _xx_muzzle_snds_M { name="muzzle_snds_M"; count=10; };
			class _xx_muzzle_snds_H { name="muzzle_snds_H"; count=10; };
			class _xx_hlc_muzzle_556NATO_KAC { name="hlc_muzzle_556NATO_KAC"; count=10; };
			class _xx_R3F_SILENCIEUX_HK416 { name="R3F_SILENCIEUX_HK416"; count=10; };
			class _xx_FHQ_acc_LLM01L { name="FHQ_acc_LLM01L"; count=10; };
			class _xx_FHQ_acc_ANPEQ15_black { name="FHQ_acc_ANPEQ15_black"; count=10; };	
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
			class _xx_hlc_rifle_Colt727_GL { weapon="hlc_rifle_Colt727_GL"; count=10; };
			class _xx_rhs_m4_m320 { weapon="rhs_m4_m320"; count=10; };
			class _xx_rhs_m4a1_m320 { weapon="rhs_m4a1_m320"; count=10; };
			class _xx_RHARD_M4DDRGLD_F { weapon="RHARD_M4DDRGLD_F"; count=10; };
			class _xx_arifle_Mk20_GL_plain_F { weapon="arifle_Mk20_GL_plain_F"; count=10; };
			class _xx_arifle_MX_GL_Black_F { weapon="arifle_MX_GL_Black_F"; count=10; };
			class _xx_arifle_mas_mk16_l_gl { weapon="arifle_mas_mk16_l_gl"; count=10; };
			class _xx_arifle_mas_hk416_gl { weapon="arifle_mas_hk416_gl"; count=10; };
			};
		
		class TransportMagazines
			{
			class _xx_SmokeShell { magazine="SmokeShell"; count=100; };
			class _xx_rhs_mag_m4009 { magazine="rhs_mag_m4009"; count=100; };
			class _xx_1Rnd_HE_Grenade_shell { magazine="1Rnd_HE_Grenade_shell"; count=100; };
			class _xx_1Rnd_Smoke_Grenade_shell { magazine="1Rnd_Smoke_Grenade_shell"; count=100; };
			class _xx_1Rnd_SmokeRed_Grenade_shell { magazine="1Rnd_SmokeRed_Grenade_shell"; count=100; };
			class _xx_30Rnd_556x45_Stanag { magazine="30Rnd_556x45_Stanag"; count=300; };
			class _xx_30Rnd_556x45_Stanag_Tracer_Green { magazine="30Rnd_556x45_Stanag_Tracer_Green"; count=100; };
			class _xx_30Rnd_65x39_caseless_mag { magazine="30Rnd_65x39_caseless_mag"; count=100; };
			class _xx_AGM_30Rnd_65x39_caseless_mag_Tracer_Dim { magazine="AGM_30Rnd_65x39_caseless_mag_Tracer_Dim"; count=100; };	
			};
			
		class TransportItems
			{
			class _xx_rhsusf_acc_compm4 { name="rhsusf_acc_compm4"; count=10; };
			class _xx_FHQ_optic_AIM_tan { name="FHQ_optic_AIM_tan"; count=10; };
			class _xx_FHQ_optic_AC11704_tan { name="FHQ_optic_AC11704_tan"; count=10; };
			class _xx_FHQ_optic_AC11704 { name="FHQ_optic_AC11704"; count=10; };
			class _xx_optic_mas_Holosight_blk { name="optic_mas_Holosight_blk"; count=10; };
			class _xx_optic_Holosight { name="optic_Holosight"; count=10; };
			class _xx_muzzle_snds_M { name="muzzle_snds_M"; count=10; };
			class _xx_muzzle_snds_H { name="muzzle_snds_H"; count=10; };
			class _xx_hlc_muzzle_556NATO_KAC { name="hlc_muzzle_556NATO_KAC"; count=10; };
			class _xx_R3F_SILENCIEUX_HK416 { name="R3F_SILENCIEUX_HK416"; count=10; };
			class _xx_FHQ_acc_LLM01L { name="FHQ_acc_LLM01L"; count=10; };
			class _xx_FHQ_acc_ANPEQ15_black { name="FHQ_acc_ANPEQ15_black"; count=10; };
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
			class _xx_R3F_HK417L { weapon="R3F_HK417L"; count=10; };
			class _xx_srifle_mas_lrr { weapon="srifle_mas_lrr"; count=10; };
			class _xx_rhs_weap_m14ebrri { weapon="rhs_weap_m14ebrri"; count=10; };
			class _xx_rhs_weap_XM2010 { weapon="rhs_weap_XM2010"; count=10; };
			class _xx_srifle_mas_m24 { weapon="srifle_mas_m24"; count=10; };
			class _xx_srifle_mas_mk17s { weapon="srifle_mas_mk17s"; count=10; };
			class _xx_rhs_weap_m16a4_bipod { weapon="rhs_weap_m16a4_bipod"; count=10; };
			class _xx_hlc_smg_mp5k_PDW { weapon="hlc_smg_mp5k_PDW"; count=10; };
			class _xx_Laserdesignator { weapon="Laserdesignator"; count=10; };
			};
		
		class TransportMagazines
			{
			class _xx_SmokeShell { magazine="SmokeShell"; count=100; };
			class _xx_SmokeShellPurple { magazine="SmokeShellPurple"; count=100; };
			class _xx_R3F_20Rnd_762x51_HK417 { magazine="R3F_20Rnd_762x51_HK417"; count=30; };
			class _xx_10Rnd_mas_338_Stanag { magazine="10Rnd_mas_338_Stanag"; count=30; };
			class _xx_20Rnd_762x51_Mag { magazine="20Rnd_762x51_Mag"; count=30; };
			class _xx_rhsusf_5Rnd_300winmag_xm2010 { magazine="rhsusf_5Rnd_300winmag_xm2010"; count=30; };
			class _xx_5Rnd_mas_762x51_Stanag { magazine="5Rnd_mas_762x51_Stanag"; count=30; };
			class _xx_20Rnd_mas_762x51_Stanag { magazine="20Rnd_mas_762x51_Stanag"; count=30; };
			class _xx_30Rnd_556x45_Stanag { magazine="30Rnd_556x45_Stanag"; count=300; };
			class _xx_hlc_30Rnd_9x19_B_MP5 { magazine="hlc_30Rnd_9x19_B_MP5"; count=300; };
			};
			
		class TransportItems
			{
			class _xx_Laserbatteries { name="Laserbatteries"; count=10; };
			class _xx_cse_ab_Kestrel4500 { name="cse_ab_Kestrel4500"; count=10; };
			class _xx_cse_ab_ATragMX { name="cse_ab_ATragMX"; count=10; };
			class _xx_R3F_SILENCIEUX_HK417 { name="R3F_SILENCIEUX_HK417"; count=10; };
			class _xx_R3F_POINTEUR_SURB { name="R3F_POINTEUR_SURB"; count=10; };
			class _xx_R3F_NF { name="R3F_NF"; count=10; };
			class _xx_optic_SOS { name="optic_SOS"; count=10; };
			class _xx_optic_MRCO { name="optic_MRCO"; count=10; };
			class _xx_optic_mas_LRPS { name="optic_mas_LRPS"; count=10; };
			class _xx_muzzle_mas_snds_SHc { name="muzzle_mas_snds_SHc"; count=10; };
			class _xx_muzzle_snds_H { name="muzzle_snds_H"; count=10; };
			class _xx_rhsusf_acc_LEUPOLDMK4 { name="rhsusf_acc_LEUPOLDMK4"; count=10; };
			class _xx_rhsusf_acc_M2010S { name="rhsusf_acc_M2010S"; count=10; };
			class _xx_rhsusf_acc_anpeq15A { name="rhsusf_acc_anpeq15A"; count=10; };
			class _xx_rhsusf_acc_LEUPOLDMK4_2 { name="rhsusf_acc_LEUPOLDMK4_2"; count=10; };
			class _xx_muzzle_mas_snds_SH { name="muzzle_mas_snds_SH"; count=10; };
			class _xx_FHQ_optic_AC11704 { name="FHQ_optic_AC11704"; count=10; };
			class _xx_hlc_muzzle_Tundra { name="hlc_muzzle_Tundra"; count=10; };
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
			class _xx_rhs_weap_m240B { weapon="rhs_weap_m240B"; count=10; };
			class _xx_rhs_weap_m249_pip { weapon="rhs_weap_m249_pip"; count=10; };
			class _xx_STI_MK46MOD0 { weapon="STI_MK46MOD0"; count=10; };
			};
		
		class TransportMagazines
			{
			
			class _xx_SmokeShell { magazine="SmokeShell"; count=100; };
			class _xx_rhsusf_100Rnd_762x51 { magazine="rhsusf_100Rnd_762x51"; count=100; };
			class _xx_rhsusf_100Rnd_556x45_soft_pouch { magazine="rhsusf_100Rnd_556x45_soft_pouch"; count=100; };
			class _xx_sti_200Rnd_556x45 { magazine="sti_200Rnd_556x45"; count=100; };
			class _xx_sti_200Rnd_556x45_Tracer { magazine="sti_200Rnd_556x45_Tracer"; count=100; };
			};
			
		class TransportItems
			{
			class _xx_rhsusf_acc_compm4 { name="rhsusf_acc_compm4"; count=10; };
			class _xx_FHQ_optic_AIM_tan { name="FHQ_optic_AIM_tan"; count=10; };
			class _xx_FHQ_optic_AC11704_tan { name="FHQ_optic_AC11704_tan"; count=10; };
			class _xx_FHQ_optic_AC11704 { name="FHQ_optic_AC11704"; count=10; };
			class _xx_optic_mas_Holosight_blk { name="optic_mas_Holosight_blk"; count=10; };
			class _xx_optic_Holosight { name="optic_Holosight"; count=10; };
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
			class _xx_hlc_rifle_RU556 { weapon="hlc_rifle_RU556"; count=10; };
			class _xx_hlc_rifle_Colt727 { weapon="hlc_rifle_Colt727"; count=10; };
			class _xx_hlc_rifle_M4 { weapon="hlc_rifle_M4"; count=10; };
			class _xx_rhs_weap_m16a4 { weapon="rhs_weap_m16a4"; count=10; };
			class _xx_rhs_weap_m4a1 { weapon="rhs_weap_m4a1"; count=10; };
			class _xx_RHARD_M4DDRPD_F { weapon="RHARD_M4DDRPD_F"; count=10; };
			class _xx_RHARD_MK18AFG_F { weapon="RHARD_MK18AFG_F"; count=10; };
			class _xx_arifle_Mk20_plain_F { weapon="arifle_Mk20_plain_F"; count=10; };
			class _xx_arifle_MX_Black_F { weapon="arifle_MX_Black_F"; count=10; };
			class _xx_arifle_mas_mk16_l { weapon="arifle_mas_mk16_l"; count=10; };
			class _xx_R3F_HK416M { weapon="R3F_HK416M"; count=10; };
			};
		
		class TransportMagazines
			{
			class _xx_SmokeShell { magazine="SmokeShell"; count=100; };
			class _xx_30Rnd_556x45_Stanag { magazine="30Rnd_556x45_Stanag"; count=300; };
			class _xx_30Rnd_556x45_Stanag_Tracer_Green { magazine="30Rnd_556x45_Stanag_Tracer_Green"; count=100; };
			class _xx_30Rnd_65x39_caseless_mag { magazine="30Rnd_65x39_caseless_mag"; count=100; };
			class _xx_AGM_30Rnd_65x39_caseless_mag_Tracer_Dim { magazine="AGM_30Rnd_65x39_caseless_mag_Tracer_Dim"; count=100; };
			};
			
		class TransportItems
			{
			class _xx_rhsusf_acc_compm4 { name="rhsusf_acc_compm4"; count=10; };
			class _xx_FHQ_optic_AIM_tan { name="FHQ_optic_AIM_tan"; count=10; };
			class _xx_FHQ_optic_AC11704_tan { name="FHQ_optic_AC11704_tan"; count=10; };
			class _xx_FHQ_optic_AC11704 { name="FHQ_optic_AC11704"; count=10; };
			class _xx_optic_mas_Holosight_blk { name="optic_mas_Holosight_blk"; count=10; };
			class _xx_optic_Holosight { name="optic_Holosight"; count=10; };
			class _xx_muzzle_snds_M { name="muzzle_snds_M"; count=10; };
			class _xx_muzzle_snds_H { name="muzzle_snds_H"; count=10; };
			class _xx_hlc_muzzle_556NATO_KAC { name="hlc_muzzle_556NATO_KAC"; count=10; };
			class _xx_R3F_SILENCIEUX_HK416 { name="R3F_SILENCIEUX_HK416"; count=10; };
			class _xx_FHQ_acc_LLM01L { name="FHQ_acc_LLM01L"; count=10; };
			class _xx_FHQ_acc_ANPEQ15_black { name="FHQ_acc_ANPEQ15_black"; count=10; };
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
			class _xx_30Rnd_556x45_Stanag { magazine="30Rnd_556x45_Stanag"; count=300; };
			class _xx_20Rnd_mas_762x51_Stanag { magazine="20Rnd_mas_762x51_Stanag"; count=300; };
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
			class _xx_cse_bandage_basic { name="cse_bandage_basic"; count=300; };
			class _xx_cse_morphine { name="cse_morphine"; count=100; };
			class _xx_cse_epinephrine { name="cse_epinephrine"; count=100; };
			class _xx_cse_saline_iv { name="cse_saline_iv"; count=100; };
			};
			
		class TransportBackpacks
			{
			
			};
		
		
	};
	
};
