//included by "ui_tr_base.hpp"

// RIGHT HAND SIDE -- INHERITED BELOW
class vn_tr_disp_showPlayerInfo_rhs : vn_mf_RscControlsGroupNoScrollbarHV
{
	idc = -1;
	onLoad = "";

	x = VN_TR_SHEET_R_X;
	y = VN_TR_SHEET_R_Y;
	w = VN_TR_SHEET_R_W;
	h = VN_TR_SHEET_R_H;

	class controls
	{
		class mainInfoBackground: vn_mf_RscPicture
		{
			idc = -1;
			x = UIW(0);
			y = UIH(0);
			w = VN_TR_SHEET_L_W;
			h = VN_TR_SHEET_L_H;
			colorText[] = {1,1,1,1};
			colorBackground[] = {1,1,1,1};
			text = "\vn\ui_f_vietnam\ui\taskroster\img\tr_mainInfo.paa";
			tooltip = "";
		};

		class title: vn_mf_RscText
		{
			idc = -1;
			x = UIW(2.5);
			y = UIH(1);
			w = UIW(9);
			h = UIH(2);
			sizeEx = TXT_L;
			colorText[] = {0,0,0,1};
			colorBackground[] = {0,0,0,0};
			text = "Your Roles";
			tooltip = "";
			font = USEDFONT_B;
		};

		class RolesHeader: vn_mf_RscControlsGroupNoScrollbarH
		{
			idc = -1;
			x = UIW(2.4);
			y = UIH(3);
			w = UIW(16);
			h = UIH(0.75);
			class controls
			{
				class RoleIcon: vn_mf_RscStructuredText
				{
					text = $STR_vn_mf_taskRoster_Main_rolesHeaderName;
					x = 0;
					y = 0;
					w = UIW(3);
					h = UIH(0.75);
					size = TXT_S;
					class Attributes
					{
						align = "left";
						color = "#000000";
						colorLink = "#D09B43";
						font = USEDFONT_B;
						size = 1;
						shadow = 0;
					};
				};
				class Description: RoleIcon
				{
					text = "Role Tasks";
					x = UIW(9);
					w = UIW(5.5);
				};
			};
		};
		class RolesGroup: rolesHeader
		{
			idc = VN_TR_PLAYERINFO_ROLES_IDC;
			y = UIH(3.75);
			h = UIH(5.5);
			class controls {};
		};

		// go find a duty officer and press 6 on them
		class rhs_helper_title: vn_mf_RscStructuredText
		{
			idc = -1;
			x = UIW(2);
			y = UIH(11.5);
			w = UIW(16);
			h = UIH(1);

			colorText[] = {0.1,0.1,0.1,0.9};
			colorBackground[] = {0,0,0,0.0};
			text = "Getting Additional Roles";
			size = UIH(0.9);
			tooltip = "";
			class Attributes
			{
				align = "left";
				valign = "middle";
				color = "#000000";
				colorLink = "#D09B43";
				font = USEDFONT_B;
				size = 0.9;
				shadow = 0;
			};
		};

		// go find a duty officer and press 6 on them
		class rhs_helper_blurb: vn_mf_RscStructuredText
		{
			idc = -1;
			x = UIW(2);
			y = UIH(12.5);
			w = UIW(16);
			h = UIH(5);

			colorText[] = {0.1,0.1,0.1,0.9};
			colorBackground[] = {0,0,0,0.0};
			text = "Walk up to a duty officer and press the 6 key while looking at them. This will bring up a wheel menu where you can click on the role(s) you want. Duty officers can be located by the white dot markers on the map around the main base.";
			size = UIH(0.69);
			tooltip = "";
			class Attributes
			{
				align = "left";
				valign = "middle";
				color = "#000000";
				colorLink = "#D09B43";
				font = USEDFONT;
				size = 1;
				shadow = 0;
			};
		};

		class rhs_img_dutyofficer_map: vn_mf_RscPicture
		{
			idc = -1;
			x = UIW(1);
			y = UIH(16.5);
			w = UIW(5);
			h = UIH(5);
			text = "custom\taskroster\help\img_duty_officer_map.paa";
			tooltip = "Duty officers are marked by white dots on the map at the main base.";
		};

		class rhs_img_dutyofficer_map_caption: vn_mf_RscText
		{
			idc = -1;
			x = UIW(1.5);
			y = UIH(21.5);
			w = UIW(5);
			h = UIH(1);
			sizeEx = TXT_S;
			colorText[] = {0, 0, 0, 1};
			text = "Map Markers";
		};

		class rhs_img_dutyofficer_unit: vn_mf_RscPicture
		{
			idc = -1;
			x = UIW(7);
			y = UIH(16.5);
			w = UIW(5);
			h = UIH(5);

			text = "custom\taskroster\help\img_duty_officer_unit.paa";
			tooltip = "A Duty Officer.";
		};

		class rhs_img_dutyofficer_unit_caption: rhs_img_dutyofficer_map_caption
		{
			x = UIW(7.5);
			text = "Duty Officer";
		};

		class rhs_img_dutyofficer_wheel: vn_mf_RscPicture
		{
			idc = -1;
			x = UIW(13);
			y = UIH(16.5);
			w = UIW(5);
			h = UIH(5);

			text = "custom\taskroster\help\img_duty_officer_wheel.paa";
			tooltip = "Pressing the 6 key will bring up the wheel menu where you can gain additional roles.";
		};

		class rhs_img_dutyofficer_wheel_caption: rhs_img_dutyofficer_map_caption
		{
			x = UIW(13.5);
			text = "Wheel Menu";
		};
	};
};

class vn_tr_disp_showPlayerInfo
{
	name = "vn_tr_disp_showPlayerInfo";
	//If already opened -> Recalling it -> Reloading the Dialog (e.g. like updating the view, without "closing" it)
	onLoad = "[""onLoad"",_this,""vn_tr_disp_showPlayerInfo"",''] call (uinamespace getvariable 'BIS_fnc_initDisplay'); call vn_mf_fnc_tr_playerInfo_show;";
	onUnload = "[""onUnload"",_this,""vn_tr_disp_showPlayerInfo"",''] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [] spawn vn_mf_fnc_tr_overview_init;";
	idd = THISISWRONGONPURPOSE;
	movingEnable = 1;
	enableSimulation = 1;

	class ControlsBackground
	{
		class folderBackground: vn_mf_RscPicture
		{
			idc = -1;
			x = VN_TR_FOLDER_X;
			y = VN_TR_FOLDER_Y;
			w = VN_TR_FOLDER_W;
			h = VN_TR_FOLDER_H;
			colorText[] = {1,1,1,1};
			colorBackground[] = {1,1,1,1};
			text = "\vn\ui_f_vietnam\ui\taskroster\img\tr_folder_background_sheetL.paa";
		};

		//MUST be in the background, otherwise it could "pop up", when clicking on it, covering up the cordles
		class rhs: vn_tr_disp_showPlayerInfo_rhs
		{
			idc = VN_TR_PLAYERINFO_RHS_IDC;
		};
	};

	class Controls
	{
		class title: vn_mf_RscText
		{
			idc = -1;
			x = UIW(0);
			y = UIH(2);
			w = UIW(15);
			h = UIH(2);

			style = "0x10 + 0x0200";
			colorText[] = {0.1,0.1,0.1,0.9};
			colorBackground[] = {0,0,0,0.0};
			shadow = 0;
			text = "Your Info/Stats";
			font = USEDFONT_B;
			sizeEx = TXT_L;
		};

		class playername: vn_mf_RscStructuredText
		{
			idc = VN_TR_PLAYERINFO_NAME_IDC;
			x = UIW(0);
			y = UIH(4);
			w = UIW(15);
			h = UIH(0.8);

			style = "0x10 + 0x0200";
			colorText[] = {0.1,0.1,0.1,0.9};
			colorBackground[] = {0,0,0,0.0};
			shadow = 0;
			text = "playername";
			font = USEDFONT;
			sizeEx = TXT_S;
			tooltip = "Player Name";
			class Attributes
			{
				align = "left";
				color = "#000000";
				colorLink = "#D09B43";
				font = USEDFONT;
				size = 0.85;
				shadow = 0;
			};
		};
		class serialnumber: playername
		{
			idc = VN_TR_PLAYERINFO_SNUM_IDC;
			y = UIH(5);
			text = "serialnumber";
			tooltip = "Serial Number";
		};
		class playeruid: playername
		{
			idc = VN_TR_PLAYERINFO_UID_IDC;
			y = UIH(6);
			text = "playeruid";
			tooltip = "Player UID";
		};
		class playerrank: playername
		{
			idc = VN_TR_PLAYERINFO_RANK_IDC;
			y = UIH(7);
			text = "playerrank";
			tooltip = "Player Rank";
		};
		class killtracking: playername
		{
			idc = VN_TR_PLAYERINFO_KILLS_IDC;
			y = UIH(8);
			text = "sessionkills";
			tooltip = "Session Kills";
		};
		class deaths: playername
		{
			idc = VN_TR_PLAYERINFO_DEATHS_IDC;
			y = UIH(9);
			text = "-1";
			tooltip = "Session Deaths";
		};
		class rankpoints: playername
		{
			idc = VN_TR_PLAYERINFO_POINTS_IDC;
			y = UIH(10);
			text = "-1";
			tooltip = "Rank Points";
		};
		class rankprogress: playername
		{
			idc = VN_TR_PLAYERINFO_PROGR_IDC;
			y = UIH(11);
			text = "-1";
			tooltip = "Rank Progress";
		};
		class ribbon_medal_preview: vn_mf_RscPicture
		{
			idc = VN_TR_PLAYERINFO_MEDAL_RIBBON_IDC;

			x = UIW(0.75);
			y = UIH(13.5);
			w = UIW(1.2);
			h = UIH(2);

			colorText[] = {1,1,1,1};
			colorBackground[] = {1,1,1,1};

			text = "";
			tooltip = "";
		};
		class ribbon_medal_text: vn_mf_RscStructuredText
		{
			idc = VN_TR_PLAYERINFO_REWARD_TEXT_IDC;

			x = UIW(2.5);
			y = UIH(14);
			w = UIW(12.5);
			h = UIH(3);

			colorText[] = {0.1,0.1,0.1,0.9};
			colorBackground[] = {0,0,0,0.0};
			text = "reward";
			size = TXT_M;
			tooltip = "";
			class Attributes
			{
				align = "left";
				color = "#000000";
				colorLink = "#D09B43";
				font = USEDFONT;
				size = 1;
				shadow = 0;
			};
		};

		#define RIBBON_POS(ROW, COL) \
			x = UIW((((2 + 0.25) * COL))); \
			y = UIH((16.5 + (((2/3.3333) + 0.25) * ROW))); \
			w = UIW(2); \
			h = UIH((2/3.3333));

		// col 1
		class ribbon_1: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(0);
			RIBBON_POS(0, 0)
		};
		class ribbon_2: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(1);
			RIBBON_POS(1, 0)
		};
		class ribbon_3: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(2);
			RIBBON_POS(2, 0)
		};
		class ribbon_4: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(3);
			RIBBON_POS(3, 0)
		};
		class ribbon_5: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(4);
			RIBBON_POS(4, 0)
		};

		// col 2
		class ribbon_6: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(5);
			RIBBON_POS(0, 1)
		};
		class ribbon_7: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(6);
			RIBBON_POS(1, 1)
		};
		class ribbon_8: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(7);
			RIBBON_POS(2, 1)
		};
		class ribbon_9: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(8);
			RIBBON_POS(3, 1)
		};
		class ribbon_10: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(9);
			RIBBON_POS(4, 1)
		};

		// col 3
		class ribbon_11: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(10);
			RIBBON_POS(0, 2)
		};
		class ribbon_12: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(11);
			RIBBON_POS(1, 2)
		};
		class ribbon_13: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(12);
			RIBBON_POS(2, 2)
		};
		class ribbon_14: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(13);
			RIBBON_POS(3, 2)
		};
		class ribbon_15: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(14);
			RIBBON_POS(4, 2)
		};

		// col 4
		class ribbon_16: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(15);
			RIBBON_POS(0, 3)
		};
		class ribbon_17: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(16);
			RIBBON_POS(1, 3)
		};
		class ribbon_18: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(17);
			RIBBON_POS(2, 3)
		};
		class ribbon_19: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(18);
			RIBBON_POS(3, 3)
		};
		class ribbon_20: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(19);
			RIBBON_POS(4, 3)
		};

		// col 5
		class ribbon_21: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(20);
			RIBBON_POS(0, 4)
		};
		class ribbon_22: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(21);
			RIBBON_POS(1, 4)
		};
		class ribbon_23: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(22);
			RIBBON_POS(2, 4)
		};
		class ribbon_24: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(23);
			RIBBON_POS(3, 4)
		};
		class ribbon_25: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(24);
			RIBBON_POS(4, 4)
		};

		// col 6
		class ribbon_26: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(25);
			RIBBON_POS(0, 5)
		};
		class ribbon_27: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(26);
			RIBBON_POS(1, 5)
		};
		class ribbon_28: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(27);
			RIBBON_POS(2, 5)
		};
		class ribbon_29: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(28);
			RIBBON_POS(3, 5)
		};
		class ribbon_30: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(29);
			RIBBON_POS(4, 5)
		};

		// col 7
		class ribbon_31: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(30);
			RIBBON_POS(0, 6)
		};
		class ribbon_32: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(31);
			RIBBON_POS(1, 6)
		};
		class ribbon_33: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(32);
			RIBBON_POS(2, 6)
		};
		class ribbon_34: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(33);
			RIBBON_POS(3, 6)
		};
		class ribbon_35: vn_mf_ribbon_base {
			idc = GET_BY_ID_VN_TR_PLAYERINFO_RIBBON_IDC(34);
			RIBBON_POS(4, 6)
		};

		class lhs_back_btn: vn_mf_RscButton
		{
			idc = -1;

			x = UIX_CL(17);
			y = UIY_CU(-9);
			w = UIW(7);
			h = UIH(1.5);

			text = "BACK";
			font = USEDFONT;
			sizeEx = TXT_L;
			onButtonClick = "(ctrlParent param[0]) closeDisplay 2";
			colorText[] = {0,0,0,1};
			colorBackground[] = {0,0,0,0.1};
		};

		//ALWAYS AT THE BOTTOM/LAST OF THE CONTROLS!
		class folder_cordels: vn_tr_cordels
		{};
	};
};