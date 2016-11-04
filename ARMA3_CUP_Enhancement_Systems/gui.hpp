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

class IGUIBack;
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
class RscEdit;
class JAS_FIR_AWS_MFD_N
{
	idd = 5585;
	movingenable = "false";
	
	class controlsBackground
	{
		class FIR_AWS_MFD_MAP: RscMapControl
		{
			idc = 3620;
			maxSatelliteAlpha = 0;
			x = 0.604995 * safezoneW + safezoneX;
			y = 0.429989 * safezoneH + safezoneY;
			w = 0.22749 * safezoneW;
			h = 0.39206 * safezoneH;
		};
	};
	class controls
	{
		class FIR_AWS_MFD_Frame: RscFrame
		{
			idc = 3601;
			x = 0.587496 * safezoneW + safezoneX;
			y = 0.401986 * safezoneH + safezoneY;
			w = 0.262488 * safezoneW;
			h = 0.448068 * safezoneH;
		};
		class FIR_AWS_MFD_Picture: RscPicture
		{
			idc = 3602;
			text = "FIR_AirWeaponSystem_US\ui\mfd_ca.paa";
			x = 0.587496 * safezoneW + safezoneX;
			y = 0.401985 * safezoneH + safezoneY;
			w = 0.262488 * safezoneW;
			h = 0.448068 * safezoneH;
		};
		class FIR_AWS_MFD_SettheTarget: RscButton
		{
			idc = 3603;
			text = ""; //--- ToDo: Localize;
			tooltip = "Designate the Target Location and send to the Memory";
			action="_sethandle = execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\TGTSystem\FIR_AWS_MFD_N_SETTARGET.sqf""";
			x = 0.594000 * safezoneW + safezoneX;
			y = 0.515000 * safezoneH + safezoneY;
			w = 0.0174992 * safezoneW;
			h = 0.0280043 * safezoneH;
		};
		class FIR_AWS_MFD_SettheTarget_Pic: RscPicture
		{
			idc = 3606;
			text = "FIR_AirWeaponSystem_US\ui\mfd_designate_ca.paa"; //--- ToDo: Localize;
			x = 0.594000 * safezoneW + safezoneX;
			y = 0.515000 * safezoneH + safezoneY;
			w = 0.0174992 * safezoneW;
			h = 0.0280043 * safezoneH;
		};
		class FIR_AWS_MFD_DesTarget: RscButton
		{
			idc = 3604;
			text = ""; //--- ToDo: Localize;
			tooltip = "Select / Send the LSR Coordinate To FCS";
			action="_sethandle = execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\TGTSystem\FIR_AWS_MFD_N_DESTARGET.sqf""";
			x = 0.594000 * safezoneW + safezoneX;
			y = 0.564000 * safezoneH + safezoneY;
			w = 0.0174992 * safezoneW;
			h = 0.0280043 * safezoneH;
		};
		class FIR_AWS_MFD_DesTarget_Pic: RscPicture
		{
			idc = 3607;
			text = "FIR_AirWeaponSystem_US\ui\mfd_select_ca.paa"; //--- ToDo: Localize;
			x = 0.594000 * safezoneW + safezoneX;
			y = 0.564000 * safezoneH + safezoneY;
			w = 0.0174992 * safezoneW;
			h = 0.0280043 * safezoneH;
		};				
		class FIR_AWS_MFD_CancelTarget: RscButton
		{
			idc = 3611;
			text = ""; //--- ToDo: Localize;		
			tooltip = "Delete Coordinate from Memory";
			action="_sethandle = execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\TGTSystem\FIR_AWS_MFD_N_CANCELTARGET.sqf""";			
			x = 0.594000 * safezoneW + safezoneX;
			y = 0.613000 * safezoneH + safezoneY;
			w = 0.0174992 * safezoneW;
			h = 0.0280043 * safezoneH;
		};
		class FIR_AWS_MFD_CancelTarget_Pic: RscPicture
		{
			idc = 3612;
			text = "FIR_AirWeaponSystem_US\ui\mfd_clear_ca.paa"; //--- ToDo: Localize;
			x = 0.594000 * safezoneW + safezoneX;
			y = 0.613000 * safezoneH + safezoneY;
			w = 0.0174992 * safezoneW;
			h = 0.0280043 * safezoneH;
		};
		class FIR_AWS_MFD_DelTarget: RscButton
		{
			idc = 3694;
			text = ""; //--- ToDo: Localize;		
			tooltip = "Delete Coordinate from Memory";
			action="_sethandle = execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\TGTSystem\FIR_AWS_MFD_N_DELETETARGET.sqf""";			
			x = 0.594000 * safezoneW + safezoneX;
			y = 0.66000 * safezoneH + safezoneY;
			w = 0.0174992 * safezoneW;
			h = 0.0280043 * safezoneH;
		};
		class FIR_AWS_MFD_DelTarget_Pic: RscPicture
		{
			idc = 3695;
			text = "FIR_AirWeaponSystem_US\ui\mfd_delete_ca.paa"; //--- ToDo: Localize;
			x = 0.594000 * safezoneW + safezoneX;
			y = 0.66000 * safezoneH + safezoneY;
			w = 0.0174992 * safezoneW;
			h = 0.0280043 * safezoneH;
		};
		class FIR_AWS_MFD_EXIT: RscButton
		{
			idc = 3605;
			text = ""; //--- ToDo: Localize;
			tooltip = "EXIT";
			action="closeDialog 0";
			x = 0.770000 * safezoneW + safezoneX;
			y = 0.810000 * safezoneH + safezoneY;
			w = 0.0174992 * safezoneW;
			h = 0.0280043 * safezoneH;
		};
		class FIR_AWS_MFD_EXIT_Pic: RscPicture
		{
			idc = 3608;
			text = "FIR_AirWeaponSystem_US\ui\mfd_exit_ca.paa"; //--- ToDo: Localize;
			x = 0.770000 * safezoneW + safezoneX;
			y = 0.810000 * safezoneH + safezoneY;
			w = 0.0174992 * safezoneW;
			h = 0.0280043 * safezoneH;
		};
		class FIR_AWS_MFD_Enter: RscButton
		{
			idc = 3606;
			text = ""; //--- ToDo: Localize;
			tooltip = "Enter coordinate";
			action="_sethandle = execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\TGTSystem\FIR_AWS_MFD_N_ENTER.sqf""";	
			x = 0.650000 * safezoneW + safezoneX;
			y = 0.810000 * safezoneH + safezoneY;
			w = 0.0174992 * safezoneW;
			h = 0.0280043 * safezoneH;
			
		};
		class FIR_AWS_MFD_Enter_Pic: RscPicture
		{
			idc = 3609;
			text = "FIR_AirWeaponSystem_US\ui\mfd_enter_ca.paa"; //--- ToDo: Localize;
			x = 0.650000 * safezoneW + safezoneX;
			y = 0.810000 * safezoneH + safezoneY;
			w = 0.0174992 * safezoneW;
			h = 0.0280043 * safezoneH;
		};
		class FIR_AWS_MFD_8d: RscButton
		{
			idc = 3691;
			text = ""; //--- ToDo: Localize;
			tooltip = "switch to 8 digits";
			action="_sethandle = [""8D""] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\TGTSystem\FIR_AWS_MFD_N_DIGITS.sqf""";
			x = 0.680000 * safezoneW + safezoneX;
			y = 0.810000 * safezoneH + safezoneY;
			w = 0.0174992 * safezoneW;
			h = 0.0280043 * safezoneH;
		};
		class FIR_AWS_MFD_8d_Pic: RscPicture
		{
			idc = 3692;
			text = "FIR_AirWeaponSystem_US\ui\mfd_8digits_ca.paa"; //--- ToDo: Localize;
			x = 0.680000 * safezoneW + safezoneX;
			y = 0.810000 * safezoneH + safezoneY;
			w = 0.0174992 * safezoneW;
			h = 0.0280043 * safezoneH;
		};	
		class FIR_AWS_MFD_10d: RscButton
		{
			idc = 3607;
			text = ""; //--- ToDo: Localize;
			tooltip = "switch to 10 digits";
			action="_sethandle = [""10D""] execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\TGTSystem\FIR_AWS_MFD_N_DIGITS.sqf""";
			x = 0.710000 * safezoneW + safezoneX;
			y = 0.810000 * safezoneH + safezoneY;
			w = 0.0174992 * safezoneW;
			h = 0.0280043 * safezoneH;
		};
		class FIR_AWS_MFD_10d_Pic: RscPicture
		{
			idc = 3610;
			text = "FIR_AirWeaponSystem_US\ui\mfd_10digits_ca.paa"; //--- ToDo: Localize;
			x = 0.710000 * safezoneW + safezoneX;
			y = 0.810000 * safezoneH + safezoneY;
			w = 0.0174992 * safezoneW;
			h = 0.0280043 * safezoneH;
		};		
		class grid_edit: RscEdit
		{
			idc = 1400;
			x = 0.6300 * safezoneW + safezoneX;
			y = 0.760000 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.028 * safezoneH;
			colorBackground[] = {0.5, 0.5, 0.5, 1};
		};		
		class memory_combo: RscCombo
		{
			idc = 2100;
			x = 0.710000 * safezoneW + safezoneX;
			y = 0.760000 * safezoneH + safezoneY;
			w = 0.1000 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class grid_text: RscText
		{
			idc = 1998;
			text = ""; //--- ToDo: Localize;
			x = 0.700 * safezoneW + safezoneX;
			y = 0.470000 * safezoneH + safezoneY;
			w = 0.14 * safezoneW;
			h = 0.028 * safezoneH;
			colorText[] = {0.1,0.1,0.1,1};
		};
	};
};
class AAC_Texture_GUI
{
	idd=9914;
	movingenable="false";
	class controls
	{
		class RscFrame_1800: RscFrame
		{
			idc=1800;
			x="0.22 * safezoneW + safezoneX";
			y="0.206 * safezoneH + safezoneY";
			w="0.525 * safezoneW";
			h="0.504 * safezoneH";
		};
		class setskin_background: RscPicture
		{
			idc=1900;
			x="0.22 * safezoneW + safezoneX";
			y="0.206 * safezoneH + safezoneY";
			w="0.525 * safezoneW";
			h="0.504 * safezoneH";
			text="FIR_AirWeaponSystem_US\ui\background_skin.paa";
		};
		class RscText_1000: RscText
		{
			idc=1000;
			text="Select Texture";
			x="0.22875 * safezoneW + safezoneX";
			y="0.234 * safezoneH + safezoneY";
			w="0.105 * safezoneW";
			h="0.028 * safezoneH";
		};
		class Texture_Text: RscText
		{
			idc=1001;
			text="";
			x="0.59625 * safezoneW + safezoneX";
			y="0.234 * safezoneH + safezoneY";
			w="0.13125 * safezoneW";
			h="0.028 * safezoneH";
		};
		class texture_preview: RscPicture
		{
			idc=1980;
			text="#(argb,8,8,3)color(1,1,1,1)";
			x="0.3425 * safezoneW + safezoneX";
			y="0.262 * safezoneH + safezoneY";
			w="0.385 * safezoneW";
			h="0.336 * safezoneH";
		};
		class texture_combo: RscCombo
		{
			idc=2160;
			x="0.2375 * safezoneW + safezoneX";
			y="0.262 * safezoneH + safezoneY";
			w="0.0875 * safezoneW";
			h="0.028 * safezoneH";
			onLBSelChanged="_changehandle = execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\setskin\change_preview.sqf"";";
		};
		class apply_btn_pic: RscPicture
		{
			idc=1700;
			text="FIR_AirWeaponSystem_US\ui\button_apply.paa";
			x="0.57 * safezoneW + safezoneX";
			y="0.626 * safezoneH + safezoneY";
			w="0.07 * safezoneW";
			h="0.056 * safezoneH";
		};
		class apply_btn: RscButton
		{
			idc=1600;
			text="";
			x="0.57 * safezoneW + safezoneX";
			y="0.626 * safezoneH + safezoneY";
			w="0.07 * safezoneW";
			h="0.056 * safezoneH";
			colorText[]={-1,-1,-1,-1};
			colorBackground[]={-1,-1,-1,-1};
			colorActive[]={-1,-1,-1,-1};
			action="_applyhandle = execVM ""\ARMA3_CUP_Enhancement_Systems\sqs\setskin\change_skin.sqf"";";
		};
		class cancel_btn_pic: RscPicture
		{
			idc=1701;
			text="FIR_AirWeaponSystem_US\ui\button_cancel.paa";
			x="0.6575 * safezoneW + safezoneX";
			y="0.626 * safezoneH + safezoneY";
			w="0.07 * safezoneW";
			h="0.056 * safezoneH";
		};
		class cancel_btn: RscButton
		{
			idc=1601;
			text="";
			x="0.6575 * safezoneW + safezoneX";
			y="0.626 * safezoneH + safezoneY";
			w="0.07 * safezoneW";
			h="0.056 * safezoneH";
			colorText[]={-1,-1,-1,-1};
			colorBackground[]={-1,-1,-1,-1};
			colorActive[]={-1,-1,-1,-1};
			action="closeDialog 0";
		};
	};
};
