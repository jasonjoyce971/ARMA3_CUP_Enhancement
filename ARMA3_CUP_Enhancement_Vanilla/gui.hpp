// Control types
#define CT_STATIC           0
#define CT_BUTTON           1
#define CT_EDIT             2
#define CT_SLIDER           3
#define CT_COMBO            4
#define CT_LISTBOX          5
#define CT_TOOLBOX          6
#define CT_CHECKBOXES       7
#define CT_PROGRESS         8
#define CT_HTML             9
#define CT_STATIC_SKEW      10
#define CT_ACTIVETEXT       11
#define CT_TREE             12
#define CT_STRUCTURED_TEXT  13
#define CT_CONTEXT_MENU     14
#define CT_CONTROLS_GROUP   15
#define CT_SHORTCUTBUTTON   16
#define CT_XKEYDESC         40
#define CT_XBUTTON          41
#define CT_XLISTBOX         42
#define CT_XSLIDER          43
#define CT_XCOMBO           44
#define CT_ANIMATED_TEXTURE 45
#define CT_OBJECT           80
#define CT_OBJECT_ZOOM      81
#define CT_OBJECT_CONTAINER 82
#define CT_OBJECT_CONT_ANIM 83
#define CT_LINEBREAK        98
#define CT_USER             99
#define CT_MAP              100
#define CT_MAP_MAIN         101
#define CT_LISTNBOX         102

// Static styles
#define ST_POS            0x0F
#define ST_HPOS           0x03
#define ST_VPOS           0x0C
#define ST_LEFT           0x00
#define ST_RIGHT          0x01
#define ST_CENTER         0x02
#define ST_DOWN           0x04
#define ST_UP             0x08
#define ST_VCENTER        0x0C
#define ST_GROUP_BOX       96
#define ST_GROUP_BOX2      112
#define ST_ROUNDED_CORNER  ST_GROUP_BOX + ST_CENTER
#define ST_ROUNDED_CORNER2 ST_GROUP_BOX2 + ST_CENTER

#define ST_TYPE           0xF0
#define ST_SINGLE         0x00
#define ST_MULTI          0x10
#define ST_TITLE_BAR      0x20
#define ST_PICTURE        0x30
#define ST_FRAME          0x40
#define ST_BACKGROUND     0x50
#define ST_GROUP_BOX      0x60
#define ST_GROUP_BOX2     0x70
#define ST_HUD_BACKGROUND 0x80
#define ST_TILE_PICTURE   0x90
#define ST_WITH_RECT      0xA0
#define ST_LINE           0xB0

#define ST_SHADOW         0x100
#define ST_NO_RECT        0x200
#define ST_KEEP_ASPECT_RATIO  0x800

#define ST_TITLE          ST_TITLE_BAR + ST_CENTER

// Slider styles
#define SL_DIR            0x400
#define SL_VERT           0
#define SL_HORZ           0x400

#define SL_TEXTURES       0x10

// progress bar 
#define ST_VERTICAL       0x01
#define ST_HORIZONTAL     0

// Listbox styles
#define LB_TEXTURES       0x10
#define LB_MULTI          0x20

// Tree styles
#define TR_SHOWROOT       1
#define TR_AUTOCOLLAPSE   2

// MessageBox styles
#define MB_BUTTON_OK      1
#define MB_BUTTON_CANCEL  2
#define MB_BUTTON_USER    4


////////////////
//Base Classes//
////////////////

/*class IGUIBack;
class RscFrame;
class RscPicture;
class RscCombo;
class Rsclistbox;
class RscButton;
class RscButtonMenu;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscMapControl;
class RscObject;
class RscText;
class RscHTML;
class RscTextCheckbox;
class RscEdit;*/

class A143_GUI
{
	idd = -1;
	movingenable = "false";
	class Controls
	{
		class RscFrame_1800: RscFrame
		{
			idc = 1800;
			x = 0.15 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.7 * safezoneW;
			h = 0.7 * safezoneH;
		};
		class a143_picture_background: RscPicture
		{
			idc = 1201;
			x = 0.15 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.7 * safezoneW;
			h = 0.7 * safezoneH;
			text = "ARMA3_CUP_Enhancement_Vanilla\UI\a143_background.paa";
		};
		class RscPicture_1200: RscPicture
		{
			idc = 1200;
			text = "ARMA3_CUP_Enhancement_Vanilla\UI\a143_loadout_ca.paa";
			x = 0.1675 * safezoneW + safezoneX;
			y = 0.206 * safezoneH + safezoneY;
			w = 0.56 * safezoneW;
			h = 0.42 * safezoneH;
		};
		class preset_combo: RscCombo
		{
			idc = 2100;
			x = 0.745 * safezoneW + safezoneX;
			y = 0.234 * safezoneH + safezoneY;
			w = 0.0875 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class hp1_combo: RscCombo
		{
			idc = 2101;
			x = 0.64 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0875 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class hp2_combo: RscCombo
		{
			idc = 2102;
			x = 0.5525 * safezoneW + safezoneX;
			y = 0.71 * safezoneH + safezoneY;
			w = 0.0875 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class hp3_combo: RscCombo
		{
			idc = 2103;
			x = 0.465 * safezoneW + safezoneX;
			y = 0.766 * safezoneH + safezoneY;
			w = 0.0875 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class hp4_combo: RscCombo
		{
			idc = 2104;
			x = 0.3425 * safezoneW + safezoneX;
			y = 0.766 * safezoneH + safezoneY;
			w = 0.0875 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class hp5_combo: RscCombo
		{
			idc = 2105;
			x = 0.255 * safezoneW + safezoneX;
			y = 0.71 * safezoneH + safezoneY;
			w = 0.0875 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class hp6_combo: RscCombo
		{
			idc = 2106;
			x = 0.1675 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0875 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class A143_Apply_Button: RscPicture
		{
			idc = 1902;
			text = "FIR_AirWeaponSystem_US\ui\button_apply.paa";
			x = 0.675 * safezoneW + safezoneX;
			y = 0.766 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.056 * safezoneH;
		};
		class apply_btn: RscButton
		{
			idc = 1600;
			text = ""; //--- ToDo: Localize;
			x = 0.675 * safezoneW + safezoneX;
			y = 0.766 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.056 * safezoneH;
			colorText[] = {-1,-1,-1,-1};
			colorBackground[] = {-1,-1,-1,-1};
			colorActive[] = {-1,-1,-1,-1};
			tooltip = "Apply the Current Loadout"; //--- ToDo: Localize;
			action="_applyhandle = execVM ""\ARMA3_CUP_Enhancement_Vanilla\sqs\Loadout\A143_Loadout.sqf""";
		};
		class A143_Cancel_Button: RscPicture
		{
			idc = 1903;
			text = "FIR_AirWeaponSystem_US\ui\button_cancel.paa";
			x = 0.7625 * safezoneW + safezoneX;
			y = 0.766 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.056 * safezoneH;
		};
		class btn_cancel: RscButton
		{
			idc = 1601;
			text = ""; //--- ToDo: Localize;
			x = 0.7625 * safezoneW + safezoneX;
			y = 0.766 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.056 * safezoneH;
			colorText[] = {-1,-1,-1,-1};
			colorBackground[] = {-1,-1,-1,-1};
			colorActive[] = {-1,-1,-1,-1};
			tooltip = "Close"; //--- ToDo: Localize;
			action="closeDialog 0";
		};
		class A143_repair_Button: RscPicture
		{
			idc = 1904;
			text = "FIR_AirWeaponSystem_US\ui\button_repair.paa";
			x = 0.745 * safezoneW + safezoneX;
			y = 0.318 * safezoneH + safezoneY;
			w = 0.0875 * safezoneW;
			h = 0.056 * safezoneH;
		};
		class btn_repair: RscButton
		{
			idc = 1602;
			text = ""; //--- ToDo: Localize;
			x = 0.745 * safezoneW + safezoneX;
			y = 0.318 * safezoneH + safezoneY;
			w = 0.0875 * safezoneW;
			h = 0.056 * safezoneH;
			colorText[] = {-1,-1,-1,-1};
			colorBackground[] = {-1,-1,-1,-1};
			colorActive[] = {-1,-1,-1,-1};
			tooltip = "Repair"; //--- ToDo: Localize;
			action="_applyhandle = execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\Loadout\A164_Repair.sqf""";
		};
		class A143_refuel_Button: RscPicture
		{
			idc = 1904;
			text = "FIR_AirWeaponSystem_US\ui\button_refuel.paa";
			x = 0.745 * safezoneW + safezoneX;
			y = 0.402 * safezoneH + safezoneY;
			w = 0.0875 * safezoneW;
			h = 0.056 * safezoneH;
		};
		class btn_refuel: RscButton
		{
			idc = 1603;
			text = ""; //--- ToDo: Localize;
			x = 0.745 * safezoneW + safezoneX;
			y = 0.402 * safezoneH + safezoneY;
			w = 0.0875 * safezoneW;
			h = 0.056 * safezoneH;
			colorText[] = {-1,-1,-1,-1};
			colorBackground[] = {-1,-1,-1,-1};
			colorActive[] = {-1,-1,-1,-1};
			tooltip = "Refuel"; //--- ToDo: Localize;
			action="_applyhandle = execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\Loadout\A164_Refuel.sqf""";
		};
		class a143_custom_save_Buttonpic_1: RscPicture
		{
			idc = 1905;
			text = "FIR_AirWeaponSystem_US\ui\button_save1_ca.paa";
			x = 0.73625 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.02625 * safezoneW;
			h = 0.042 * safezoneH;
		};
		class btn_1: RscButton
		{
			idc = 1604;
			text = ""; //--- ToDo: Localize;
			x = 0.73625 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.02625 * safezoneW;
			h = 0.042 * safezoneH;
			colorText[] = {-1,-1,-1,-1};
			colorBackground[] = {-1,-1,-1,-1};
			colorActive[] = {-1,-1,-1,-1};
			action="_custom1handle = [""custom_1""] execVM ""\ARMA3_CUP_Enhancement_Vanilla\sqs\Loadout\a143_SaveCustom.sqf""";
		};
		class a143_custom_save_Buttonpic_2: RscPicture
		{
			idc = 1906;
			text = "FIR_AirWeaponSystem_US\ui\button_save2_ca.paa";
			x = 0.77125 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.02625 * safezoneW;
			h = 0.042 * safezoneH;
		};
		class btn_2: RscButton
		{
			idc = 1605;
			text = "2"; //--- ToDo: Localize;
			x = 0.77125 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.02625 * safezoneW;
			h = 0.042 * safezoneH;
			colorText[] = {-1,-1,-1,-1};
			colorBackground[] = {-1,-1,-1,-1};
			colorActive[] = {-1,-1,-1,-1};
			action="_custom1handle = [""custom_2""] execVM ""\ARMA3_CUP_Enhancement_Vanilla\sqs\Loadout\a143_SaveCustom.sqf""";
		};
		class a143_custom_save_Buttonpic_3: RscPicture
		{
			idc = 1906;
			text = "FIR_AirWeaponSystem_US\ui\button_save3_ca.paa";
			x = 0.80625 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.02625 * safezoneW;
			h = 0.042 * safezoneH;
		};
		class btn_3: RscButton
		{
			idc = 1606;
			text = "3"; //--- ToDo: Localize;
			x = 0.80625 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.02625 * safezoneW;
			h = 0.042 * safezoneH;
			colorText[] = {-1,-1,-1,-1};
			colorBackground[] = {-1,-1,-1,-1};
			colorActive[] = {-1,-1,-1,-1};
			action="_custom1handle = [""custom_3""] execVM ""\ARMA3_CUP_Enhancement_Vanilla\sqs\Loadout\a143_SaveCustom.sqf""";
		};
		class RscText_1000: RscText
		{
			idc = 1000;
			text = "select preset"; //--- ToDo: Localize;
			x = 0.745 * safezoneW + safezoneX;
			y = 0.206 * safezoneH + safezoneY;
			w = 0.09625 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class RscText_1001: RscText
		{
			idc = 1001;
			text = "hardpoint 1"; //--- ToDo: Localize;
			x = 0.64 * safezoneW + safezoneX;
			y = 0.626 * safezoneH + safezoneY;
			w = 0.09625 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class RscText_1002: RscText
		{
			idc = 1002;
			text = "hardpoint 2"; //--- ToDo: Localize;
			x = 0.5525 * safezoneW + safezoneX;
			y = 0.682 * safezoneH + safezoneY;
			w = 0.09625 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class RscText_1003: RscText
		{
			idc = 1003;
			text = "hardpoint 3"; //--- ToDo: Localize;
			x = 0.465 * safezoneW + safezoneX;
			y = 0.738 * safezoneH + safezoneY;
			w = 0.09625 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class RscText_1004: RscText
		{
			idc = 1004;
			text = "hardpoint 4"; //--- ToDo: Localize;
			x = 0.3425 * safezoneW + safezoneX;
			y = 0.738 * safezoneH + safezoneY;
			w = 0.09625 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class RscText_1005: RscText
		{
			idc = 1005;
			text = "hardpoint 5"; //--- ToDo: Localize;
			x = 0.255 * safezoneW + safezoneX;
			y = 0.682 * safezoneH + safezoneY;
			w = 0.09625 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class RscText_1006: RscText
		{
			idc = 1006;
			text = "hardpoint 6"; //--- ToDo: Localize;
			x = 0.1675 * safezoneW + safezoneX;
			y = 0.626 * safezoneH + safezoneY;
			w = 0.09625 * safezoneW;
			h = 0.028 * safezoneH;
		};
	};
};