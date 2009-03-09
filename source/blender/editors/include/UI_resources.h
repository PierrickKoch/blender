/**
 * $Id: UI_resources.h 13057 2007-12-30 12:08:28Z aligorith $
 *
 * ***** BEGIN GPL/BL DUAL LICENSE BLOCK *****
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version. The Blender
 * Foundation also sells licenses for use in proprietary software under
 * the Blender License.  See http://www.blender.org/BL/ for information
 * about this.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 * The Original Code is Copyright (C) 2001-2002 by NaN Holding BV.
 * All rights reserved.
 *
 * The Original Code is: all of this file.
 *
 * Contributor(s): none yet.
 * 
 * ***** END GPL/BL DUAL LICENSE BLOCK *****
 */

#ifndef UI_RESOURCES_H
#define UI_RESOURCES_H

/* elubie: TODO: move the typedef for icons to UI_interface_icons.h */
/* and add/replace include of UI_resources.h by UI_interface_icons.h */

typedef enum {
#define BIFICONID_FIRST		(ICON_BLENDER)
	/* ui */
	ICON_BLENDER,
	ICON_HELP,
	ICON_ERROR,
	ICON_BLANK1,	// XXX this is used lots, it's not actually 'blank'
	ICON_TRIA_RIGHT,
	ICON_TRIA_DOWN,
	ICON_TRIA_LEFT,
	ICON_TRIA_UP,
	ICON_BLANK002,
	ICON_PLUS,
	ICON_DISCLOSURE_TRI_DOWN,
	ICON_DISCLOSURE_TRI_RIGHT,
	ICON_RADIOBUT_OFF,
	ICON_RADIOBUT_ON,
	ICON_MENU_PANEL,
	ICON_PYTHON,
	ICON_BLANK003,
	ICON_DOT,
	ICON_BLANK004,
	ICON_X,
	ICON_BLANK005,
	ICON_GO_LEFT,
	ICON_BLANK006,
	ICON_BLANK007,
	ICON_BLANK008,
	ICON_BLANK008b,
	
	/* ui */
	ICON_FULLSCREEN,
	ICON_SPLITSCREEN,
	ICON_RIGHTARROW_THIN,
	ICON_BORDERMOVE,
	ICON_VIEWZOOM,
	ICON_ZOOMIN,
	ICON_ZOOMOUT,
	ICON_PANEL_CLOSE,
	ICON_BLANK009,
	ICON_EYEDROPPER,
	ICON_BLANK010,
	ICON_AUTO,
	ICON_CHECKBOX_DEHLT,
	ICON_CHECKBOX_HLT,
	ICON_UNLOCKED,
	ICON_LOCKED,
	ICON_BLANK013,
	ICON_BLANK014,
	ICON_BLANK015,
	ICON_RIGHTARROW,
	ICON_DOWNARROW_HLT,
	ICON_DOTSUP,
	ICON_DOTSDOWN,
	ICON_LINK,
	ICON_INLINK,
	ICON_BLANK012b,
	
	/* available */	
	ICON_BLANK016,
	ICON_BLANK017,
	ICON_BLANK018,
	ICON_BLANK019,
	ICON_BLANK020,
	ICON_BLANK021,
	ICON_BLANK022,
	ICON_BLANK023,
	ICON_BLANK024,
	ICON_BLANK025,
	ICON_BLANK026,
	ICON_BLANK027,
	ICON_BLANK028,
	ICON_BLANK029,
	ICON_BLANK030,
	ICON_BLANK031,
	ICON_BLANK032,
	ICON_BLANK033,
	ICON_BLANK034,
	ICON_BLANK035,
	ICON_BLANK036,
	ICON_BLANK037,
	ICON_BLANK038,
	ICON_BLANK039,
	ICON_BLANK040,
	ICON_BLANK040b,
	
	/* BUTTONS */
	ICON_LAMP,
	ICON_MATERIAL,
	ICON_TEXTURE,
	ICON_ANIM,
	ICON_WORLD,
	ICON_SCENE,
	ICON_EDIT,
	ICON_GAME,
	ICON_RADIO,
	ICON_SCRIPT,
	ICON_PARTICLES,
	ICON_PHYSICS,
	ICON_SPEAKER,
	ICON_BLANK041,
	ICON_BLANK042,
	ICON_BLANK043,
	ICON_BLANK044,
	ICON_BLANK045,
	ICON_BLANK046,
	ICON_BLANK047,
	ICON_BLANK048,
	ICON_BLANK049,
	ICON_BLANK050,
	ICON_BLANK051,
	ICON_BLANK052,
	ICON_BLANK052b,
	
	/* EDITORS */
	ICON_VIEW3D,
	ICON_IPO,
	ICON_OOPS,
	ICON_BUTS,
	ICON_FILESEL,
	ICON_IMAGE_COL,
	ICON_INFO,
	ICON_SEQUENCE,
	ICON_TEXT,
	ICON_IMASEL,
	ICON_SOUND,
	ICON_ACTION,
	ICON_NLA,
	ICON_SCRIPTWIN,
	ICON_TIME,
	ICON_NODE,
	ICON_BLANK053,
	ICON_BLANK054,
	ICON_BLANK055,
	ICON_BLANK056,
	ICON_BLANK057,
	ICON_BLANK058,
	ICON_BLANK059,
	ICON_BLANK060,
	ICON_BLANK061,
	ICON_BLANK061b,
	
	/* MODES */
	ICON_OBJECT_DATAMODE,	// XXX fix this up
	ICON_EDITMODE_HLT,
	ICON_FACESEL_HLT,
	ICON_VPAINT_HLT,
	ICON_TPAINT_HLT,
	ICON_WPAINT_HLT,
	ICON_SCULPTMODE_HLT,
	ICON_POSE_HLT,
	ICON_PARTICLEMODE,
	ICON_BLANK062,
	ICON_BLANK063,
	ICON_BLANK064,
	ICON_BLANK065,
	ICON_BLANK066,
	ICON_BLANK067,
	ICON_BLANK068,
	ICON_BLANK069,
	ICON_BLANK070,
	ICON_BLANK071,
	ICON_BLANK072,
	ICON_BLANK073,
	ICON_BLANK074,
	ICON_BLANK075,
	ICON_BLANK076,
	ICON_BLANK077,
	ICON_BLANK077b,
	
	/* DATA */
	ICON_SCENE_DATA,
	ICON_RENDERLAYERS,
	ICON_WORLD_DATA,
	ICON_OBJECT_DATA,
	ICON_MESH_DATA,
	ICON_CURVE_DATA,
	ICON_MBALL_DATA,
	ICON_LATTICE_DATA,
	ICON_LAMP_DATA,
	ICON_MATERIAL_DATA,
	ICON_TEXTURE_DATA,
	ICON_ANIM_DATA,
	ICON_CAMERA_DATA,
	ICON_PARTICLE_DATA,
	ICON_LIBRARY_DATA_DIRECT,
	ICON_GROUP,
	ICON_ARMATURE_DATA,
	ICON_POSE_DATA,
	ICON_BONE_DATA,
	ICON_CONSTRAINT,
	ICON_SHAPEKEY_DATA,
	ICON_VGROUP,
	ICON_BLANK079,
	ICON_PACKAGE,
	ICON_UGLYPACKAGE,
	ICON_BLANK079b,
	
	/* DATA */
	ICON_BRUSH_DATA,
	ICON_IMAGE_DATA,
	ICON_FILE,
	ICON_FCURVE,
	ICON_FONT,
	ICON_RENDER_RESULT,
	ICON_BLANK080A,
	ICON_BLANK080B,
	ICON_BLANK080C,
	ICON_BLANK080D,
	ICON_BLANK080E,
	ICON_BLANK080F,
	ICON_BLANK080,
	ICON_BLANK081,
	ICON_LIBRARY_DATA_INDIRECT,
	ICON_BLANK082,
	ICON_BLANK083,
	ICON_BLANK084,
	ICON_BLANK085,
	ICON_BLANK086,
	ICON_BLANK087,
	ICON_BLANK088,
	ICON_BLANK089,
	ICON_BLANK090,
	ICON_RNA,
	ICON_BLANK090b,
	
	/* available */
	ICON_BLANK092,
	ICON_BLANK093,
	ICON_BLANK094,
	ICON_BLANK095,
	ICON_BLANK096,
	ICON_BLANK097,
	ICON_BLANK098,
	ICON_BLANK099,
	ICON_BLANK100,
	ICON_BLANK101,
	ICON_BLANK102,
	ICON_BLANK103,
	ICON_BLANK104,
	ICON_BLANK105,
	ICON_BLANK106,
	ICON_BLANK107,
	ICON_BLANK108,
	ICON_BLANK109,
	ICON_BLANK110,
	ICON_BLANK111,
	ICON_BLANK112,
	ICON_BLANK113,
	ICON_BLANK114,
	ICON_BLANK115,
	ICON_BLANK116,
	ICON_BLANK116b,
	
	/* OUTLINER */
	ICON_OUTLINER_OB_EMPTY,
	ICON_OUTLINER_OB_MESH,
	ICON_OUTLINER_OB_CURVE,
	ICON_OUTLINER_OB_LATTICE,
	ICON_OUTLINER_OB_META,
	ICON_OUTLINER_OB_LAMP,
	ICON_OUTLINER_OB_CAMERA,
	ICON_OUTLINER_OB_ARMATURE,
	ICON_OUTLINER_OB_FONT,
	ICON_OUTLINER_OB_SURFACE,
	ICON_BLANK119,
	ICON_BLANK120,
	ICON_BLANK121,
	ICON_BLANK122,
	ICON_BLANK123,
	ICON_BLANK124,
	ICON_BLANK125,
	ICON_BLANK126,
	ICON_BLANK127,
	ICON_RESTRICT_VIEW_OFF,
	ICON_RESTRICT_VIEW_ON,
	ICON_RESTRICT_SELECT_OFF,
	ICON_RESTRICT_SELECT_ON,
	ICON_RESTRICT_RENDER_OFF,
	ICON_RESTRICT_RENDER_ON,
	ICON_BLANK127b,
	
	/* OUTLINER */
	ICON_BLANK128,
	ICON_OUTLINER_DATA_MESH,
	ICON_OUTLINER_DATA_CURVE,
	ICON_OUTLINER_DATA_LATTICE,
	ICON_OUTLINER_DATA_META,
	ICON_OUTLINER_DATA_LAMP,
	ICON_OUTLINER_DATA_CAMERA,
	ICON_OUTLINER_DATA_ARMATURE,
	ICON_OUTLINER_DATA_POSE,
	ICON_OUTLINER_DATA_GENERIC,
	ICON_BLANK128b,
	ICON_BLANK129,
	ICON_BLANK130,
	ICON_BLANK131,
	ICON_BLANK132,
	ICON_BLANK133,
	ICON_BLANK134,
	ICON_BLANK135,
	ICON_BLANK136,
	ICON_BLANK137,
	ICON_BLANK138,
	ICON_BLANK139,
	ICON_BLANK140,
	ICON_BLANK141,
	ICON_BLANK142,
	ICON_BLANK142b,
	
	/* MODIFIERS */
	ICON_MODIFIER,
	ICON_MOD_WAVE,
	ICON_MOD_BUILD,
	ICON_MOD_DECIM,
	ICON_MOD_MIRROR,
	ICON_MOD_SOFT,
	ICON_MOD_SUBSURF,
	ICON_HOOK,
	ICON_MOD_PARTICLEINSTANCE,
	ICON_MOD_PARTICLES,
	ICON_MOD_BOOLEAN,
	ICON_MOD_EDGESPLIT,
	ICON_MOD_ARRAY,
	ICON_MOD_UVPROJECT,
	ICON_MOD_DISPLACE,
	ICON_MOD_CURVE,
	ICON_MOD_LATTICE,
	ICON_BLANK143,
	ICON_MOD_ARMATURE,
	ICON_BLANK147,
	ICON_BLANK148,
	ICON_BLANK149,
	ICON_BLANK150,
	ICON_BLANK151,
	ICON_BLANK152,
	ICON_BLANK152b,
	
	/* available */
	ICON_BLANK153,
	ICON_BLANK154,
	ICON_BLANK155,
	ICON_BLANK156,
	ICON_BLANK157,
	ICON_BLANK158,
	ICON_BLANK159,
	ICON_BLANK160,
	ICON_BLANK161,
	ICON_BLANK162,
	ICON_BLANK163,
	ICON_BLANK164,
	ICON_BLANK165,
	ICON_BLANK166,
	ICON_BLANK167,
	ICON_BLANK168,
	ICON_BLANK169,
	ICON_BLANK170,
	ICON_BLANK171,
	ICON_BLANK172,
	ICON_BLANK173,
	ICON_BLANK174,
	ICON_BLANK175,
	ICON_BLANK176,
	ICON_BLANK177,
	ICON_BLANK177b,
	
	/* ANIMATION */
	ICON_REC,
	ICON_PLAY,
	ICON_FF,
	ICON_REW,
	ICON_PAUSE,
	ICON_PREV_KEYFRAME,
	ICON_NEXT_KEYFRAME,
	ICON_PLAY_AUDIO,
	ICON_BLANK178,
	ICON_BLANK179,
	ICON_BLANK180,
	ICON_PMARKER_ACT,
	ICON_PMARKER_SEL,
	ICON_PMARKER,
	ICON_MARKER_HLT,
	ICON_MARKER,
	ICON_SPACE2,	// XXX
	ICON_SPACE3,	// XXX
	ICON_BLANK181,
	ICON_KEY_DEHLT,
	ICON_KEY_HLT,
	ICON_MUTE_IPO_OFF,
	ICON_MUTE_IPO_ON,
	ICON_BLANK182,
	ICON_BLANK183,
	ICON_BLANK183b,
	
	/* available */
	ICON_BLANK184,
	ICON_BLANK185,
	ICON_BLANK186,
	ICON_BLANK187,
	ICON_BLANK188,
	ICON_BLANK189,
	ICON_BLANK190,
	ICON_BLANK191,
	ICON_BLANK192,
	ICON_BLANK193,
	ICON_BLANK194,
	ICON_BLANK195,
	ICON_BLANK196,
	ICON_BLANK197,
	ICON_BLANK198,
	ICON_BLANK199,
	ICON_BLANK200,
	ICON_BLANK201,
	ICON_BLANK202,
	ICON_BLANK203,
	ICON_BLANK204,
	ICON_BLANK205,
	ICON_BLANK206,
	ICON_BLANK207,
	ICON_BLANK208,
	ICON_BLANK208b,
	
	/* EDITING */
	ICON_VERTEXSEL,
	ICON_EDGESEL,
	ICON_FACESEL,
	ICON_LINKEDSEL,
	ICON_BLANK210,
	ICON_ROTATE,
	ICON_CURSOR,
	ICON_ROTATECOLLECTION,
	ICON_ROTATECENTER,
	ICON_ROTACTIVE,
	ICON_ALIGN,
	ICON_BLANK211,
	ICON_SMOOTHCURVE,
	ICON_SPHERECURVE,
	ICON_ROOTCURVE,
	ICON_SHARPCURVE,
	ICON_LINCURVE,
	ICON_NOCURVE,
	ICON_RNDCURVE,
	ICON_PROP_OFF,
	ICON_PROP_ON,
	ICON_PROP_CON,
	ICON_BLANK212,
	ICON_BLANK213,
	ICON_BLANK214,
	ICON_BLANK214b,
	
	/* EDITING */
	ICON_MAN_TRANS,
	ICON_MAN_ROT,
	ICON_MAN_SCALE,
	ICON_MANIPUL,
	ICON_BLANK215,
	ICON_SNAP_GEAR,
	ICON_SNAP_GEO,
	ICON_SNAP_NORMAL,
	ICON_SNAP_VERTEX,
	ICON_SNAP_EDGE,
	ICON_SNAP_FACE,
	ICON_BLANK218b,
	ICON_STICKY_UVS_LOC,
	ICON_STICKY_UVS_DISABLE,
	ICON_STICKY_UVS_VERT,
	ICON_CLIPUV_DEHLT,
	ICON_CLIPUV_HLT,
	ICON_BLANK219,
	ICON_BLANK220,
	ICON_BLANK221,
	ICON_BLANK222,
	ICON_BLANK223,
	ICON_BLANK224,
	ICON_BLANK225,
	ICON_BLANK226,
	ICON_BLANK226b,
	
	/* EDITING */
	ICON_PASTEDOWN,
	ICON_COPYDOWN,
	ICON_PASTEFLIPUP,
	ICON_PASTEFLIPDOWN,
	ICON_BLANK227,
	ICON_BLANK228,
	ICON_BLANK229,
	ICON_BLANK230,
	ICON_BLANK231,
	ICON_BLANK232,
	ICON_BLANK233,
	ICON_BLANK234,
	ICON_BLANK235,
	ICON_BLANK236,
	ICON_BLANK237,
	ICON_BLANK238,
	ICON_BLANK239,
	ICON_BLANK240,
	ICON_BLANK241,
	ICON_BLANK242,
	ICON_BLANK243,
	ICON_BLANK244,
	ICON_BLANK245,
	ICON_BLANK246,
	ICON_BLANK247,
	ICON_BLANK247b,
	
	/* 3D VIEW */
	ICON_BBOX,
	ICON_WIRE,
	ICON_SOLID,
	ICON_SMOOTH,
	ICON_POTATO,
	ICON_BLANK248,
	ICON_ORTHO,
	ICON_BLANK249,
	ICON_CAMERA,
	ICON_LOCKVIEW_OFF,
	ICON_LOCKVIEW_ON,
	ICON_BLANK250,
	ICON_AXIS_SIDE,
	ICON_AXIS_FRONT,
	ICON_AXIS_TOP,
	ICON_NDOF_DOM,
	ICON_NDOF_TURN,
	ICON_NDOF_FLY,
	ICON_NDOF_TRANS,
	ICON_LAYER_USED,
	ICON_LAYER_ACTIVE,
	ICON_BLANK254,
	ICON_BLANK255,
	ICON_BLANK256,
	ICON_BLANK257,
	ICON_BLANK257b,
	
	/* available */
	ICON_BLANK258,
	ICON_BLANK259,
	ICON_BLANK260,
	ICON_BLANK261,
	ICON_BLANK262,
	ICON_BLANK263,
	ICON_BLANK264,
	ICON_BLANK265,
	ICON_BLANK266,
	ICON_BLANK267,
	ICON_BLANK268,
	ICON_BLANK269,
	ICON_BLANK270,
	ICON_BLANK271,
	ICON_BLANK272,
	ICON_BLANK273,
	ICON_BLANK274,
	ICON_BLANK275,
	ICON_BLANK276,
	ICON_BLANK277,
	ICON_BLANK278,
	ICON_BLANK279,
	ICON_BLANK280,
	ICON_BLANK281,
	ICON_BLANK282,
	ICON_BLANK282b,
	
	/* FILE SELECT */
	ICON_SORTALPHA,
	ICON_SORTBYEXT,
	ICON_SORTTIME,
	ICON_SORTSIZE,
	ICON_LONGDISPLAY,
	ICON_SHORTDISPLAY,
	ICON_GHOST,
	ICON_IMGDISPLAY,
	ICON_BLANK284,
	ICON_BLANK285,
	ICON_BOOKMARKS,
	ICON_FONTPREVIEW,
	ICON_FILTER,
	ICON_BLANK285E,
	ICON_BLANK285F,
	ICON_BLANK285G,
	ICON_BLANK285H,
	ICON_FILE_FOLDER,
	ICON_FILE_BLANK,
	ICON_FILE_BLEND,
	ICON_FILE_IMAGE,
	ICON_FILE_MOVIE,
	ICON_FILE_SCRIPT,
	ICON_BLANK290,
	ICON_BLANK291,
	ICON_BLANK291b,

	/* available */
	ICON_BLANK292,
	ICON_BLANK293,
	ICON_BLANK294,
	ICON_BLANK295,
	ICON_BLANK296,
	ICON_BLANK297,
	ICON_BLANK298,
	ICON_BLANK299,
	ICON_BLANK300,
	ICON_BLANK301,
	ICON_BLANK302,
	ICON_BLANK303,
	ICON_BLANK304,
	ICON_BLANK305,
	ICON_BLANK306,
	ICON_BLANK307,
	ICON_BLANK308,
	ICON_BLANK309,
	ICON_BLANK310,
	ICON_BLANK311,
	ICON_BLANK312,
	ICON_BLANK313,
	ICON_BLANK314,
	ICON_BLANK315,
	ICON_BLANK316,
	ICON_BLANK316b,
	
	/* SHADING / TEXT */
	ICON_MATPLANE,
	ICON_MATSPHERE,
	ICON_MATCUBE,
	ICON_MONKEY,
	ICON_HAIR,
	ICON_RING,
	ICON_BLANK317,
	ICON_BLANK318,
	ICON_BLANK319,
	ICON_BLANK320,
	ICON_BLANK321,
	ICON_BLANK322,
	ICON_WORDWRAP_OFF,
	ICON_WORDWRAP_ON,
	ICON_SYNTAX_OFF,
	ICON_SYNTAX_ON,
	ICON_LINENUMBERS_OFF,
	ICON_LINENUMBERS_ON,
	ICON_SCRIPTPLUGINS,		// XXX CREATE NEW
	ICON_BLANK323,
	ICON_BLANK324,
	ICON_BLANK325,
	ICON_BLANK326,
	ICON_BLANK327,
	ICON_BLANK328,
	ICON_BLANK328b,
	
	/* SEQUENCE / IMAGE EDITOR */
	ICON_SEQ_SEQUENCER,
	ICON_SEQ_PREVIEW,
	ICON_SEQ_LUMA_WAVEFORM,
	ICON_SEQ_CHROMA_SCOPE,
	ICON_SEQ_HISTOGRAM,
	ICON_BLANK330,
	ICON_BLANK331,
	ICON_BLANK332,
	ICON_BLANK333,
	ICON_IMAGE_RGB,	// XXX CHANGE TO STRAIGHT ALPHA, Z ETC
	ICON_IMAGE_RGB_ALPHA,
	ICON_IMAGE_ALPHA,
	ICON_IMAGE_ZDEPTH,
	ICON_IMAGEFILE,
	ICON_BLANK336,
	ICON_BLANK337,
	ICON_BLANK338,
	ICON_BLANK339,
	ICON_BLANK340,
	ICON_BLANK341,
	ICON_BLANK342,
	ICON_BLANK343,
	ICON_BLANK344,
	ICON_BLANK345,
	ICON_BLANK346,
	ICON_BLANK346b,
	
	/* vector icons */
	
	VICON_VIEW3D,
	VICON_EDIT,
	VICON_EDITMODE_DEHLT,
	VICON_EDITMODE_HLT,
	VICON_DISCLOSURE_TRI_RIGHT,
	VICON_DISCLOSURE_TRI_DOWN,
	VICON_MOVE_UP,
	VICON_MOVE_DOWN,
	VICON_X

#define BIFICONID_LAST		(VICON_X)
#define BIFNICONIDS			(BIFICONID_LAST-BIFICONID_FIRST + 1)
} BIFIconID;


typedef enum {
#define BIFCOLORSHADE_FIRST     (COLORSHADE_DARK)
        COLORSHADE_DARK,
        COLORSHADE_GREY,
        COLORSHADE_MEDIUM,
        COLORSHADE_HILITE,
        COLORSHADE_LIGHT,
        COLORSHADE_WHITE
#define BIFCOLORSHADE_LAST      (COLORSHADE_WHITE)
#define BIFNCOLORSHADES         (BIFCOLORSHADE_LAST-BIFCOLORSHADE_FIRST + 1)
} BIFColorShade;

typedef enum {
#define BIFCOLORID_FIRST	(BUTGREY)
	BUTGREY = 0,
	BUTGREEN,
	BUTBLUE,
	BUTSALMON,
	MIDGREY,
	BUTPURPLE,
	BUTYELLOW,
	REDALERT,
	BUTRUST,
	BUTWHITE,
	BUTDBLUE,
	BUTPINK,
	BUTDPINK,
	BUTMACTIVE,

	BUTIPO,
	BUTAUDIO,
	BUTCAMERA,
	BUTRANDOM,
	BUTEDITOBJECT,
	BUTPROPERTY,
	BUTSCENE,
	BUTMOTION,
	BUTMESSAGE,
	BUTACTION,
	BUTCD,
	BUTGAME,
	BUTVISIBILITY,
	BUTYUCK,
	BUTSEASICK,
	BUTCHOKE,
	BUTIMPERIAL,

	BUTTEXTCOLOR,
	BUTTEXTPRESSED,
	BUTSBACKGROUND,
	
	VIEWPORTBACKCOLOR,
	VIEWPORTGRIDCOLOR,
	VIEWPORTACTIVECOLOR,
	VIEWPORTSELECTEDCOLOR,
	VIEWPORTUNSELCOLOR,
	
	EDITVERTSEL, 
	EDITVERTUNSEL, 
	EDITEDGESEL, 
	EDITEDGEUNSEL
	
#define BIFCOLORID_LAST		(EDITEDGEUNSEL)
#define BIFNCOLORIDS		(BIFCOLORID_LAST-BIFCOLORID_FIRST + 1)

} BIFColorID;

/* XXX WARNING: this is saved in file, so do not change order! */
enum {
	TH_AUTO,	/* for buttons, to signal automatic color assignment */
	
// uibutton colors
	TH_BUT_OUTLINE,
	TH_BUT_NEUTRAL,
	TH_BUT_ACTION,
	TH_BUT_SETTING,
	TH_BUT_SETTING1,
	TH_BUT_SETTING2,
	TH_BUT_NUM,
	TH_BUT_TEXTFIELD,
	TH_BUT_POPUP,
	TH_BUT_TEXT,
	TH_BUT_TEXT_HI,
	TH_MENU_BACK,
	TH_MENU_ITEM,
	TH_MENU_HILITE,
	TH_MENU_TEXT,
	TH_MENU_TEXT_HI,
	
	TH_BUT_DRAWTYPE,
	
	TH_REDALERT,
	TH_CUSTOM,
	
	TH_BUT_TEXTFIELD_HI,
	TH_ICONFILE,
	
	TH_THEMEUI,
// common colors among spaces
	
	TH_BACK,
	TH_TEXT,
	TH_TEXT_HI,
	TH_HEADER,
	TH_HEADERDESEL,
	TH_PANEL,
	TH_SHADE1,
	TH_SHADE2,
	TH_HILITE,

	TH_GRID,
	TH_WIRE,
	TH_SELECT,
	TH_ACTIVE,
	TH_GROUP,
	TH_GROUP_ACTIVE,
	TH_TRANSFORM,
	TH_VERTEX,
	TH_VERTEX_SELECT,
	TH_VERTEX_SIZE,
	TH_EDGE,
	TH_EDGE_SELECT,
	TH_EDGE_SEAM,
	TH_EDGE_FACESEL,
	TH_FACE,
	TH_FACE_SELECT,
	TH_NORMAL,
	TH_FACE_DOT,
	TH_FACEDOT_SIZE,
	TH_CFRAME,

	TH_SYNTAX_B,
	TH_SYNTAX_V,
	TH_SYNTAX_C,
	TH_SYNTAX_L,
	TH_SYNTAX_N,
	
	TH_BONE_SOLID,
	TH_BONE_POSE,
	
	TH_STRIP,
	TH_STRIP_SELECT,
	
	TH_LAMP,
	
	TH_NODE,
	TH_NODE_IN_OUT,
	TH_NODE_OPERATOR,
	TH_NODE_CONVERTOR,
	TH_NODE_GROUP,
	
	TH_SEQ_MOVIE,
	TH_SEQ_IMAGE,
	TH_SEQ_SCENE,
	TH_SEQ_AUDIO,
	TH_SEQ_EFFECT,
	TH_SEQ_PLUGIN,
	TH_SEQ_TRANSITION,
	TH_SEQ_META,
	
	TH_EDGE_SHARP,
	TH_EDITMESH_ACTIVE,
	
	TH_HANDLE_VERTEX,
	TH_HANDLE_VERTEX_SELECT,
	TH_HANDLE_VERTEX_SIZE,
	
	TH_DOPESHEET_CHANNELOB,
	TH_DOPESHEET_CHANNELSUBOB,
};
/* XXX WARNING: previous is saved in file, so do not change order! */

/* specific defines per space should have higher define values */

struct bTheme;
struct PointerRNA;

// THE CODERS API FOR THEMES:

// sets the color
void 	UI_ThemeColor(int colorid);

// sets the color plus alpha
void 	UI_ThemeColor4(int colorid);

// sets color plus offset for shade
void 	UI_ThemeColorShade(int colorid, int offset);

// sets color plus offset for alpha
void	UI_ThemeColorShadeAlpha(int colorid, int coloffset, int alphaoffset);

// sets color, which is blend between two theme colors
void 	UI_ThemeColorBlend(int colorid1, int colorid2, float fac);
// same, with shade offset
void    UI_ThemeColorBlendShade(int colorid1, int colorid2, float fac, int offset);
void	UI_ThemeColorBlendShadeAlpha(int colorid1, int colorid2, float fac, int offset, int alphaoffset);

// returns one value, not scaled
float 	UI_GetThemeValuef(int colorid);
int 	UI_GetThemeValue(int colorid);

// get three color values, scaled to 0.0-1.0 range
void 	UI_GetThemeColor3fv(int colorid, float *col);

// get the 3 or 4 byte values
void 	UI_GetThemeColor3ubv(int colorid, char *col);
void 	UI_GetThemeColor4ubv(int colorid, char *col);

// get a theme color from specified space type
void	UI_GetThemeColorType4ubv(int colorid, int spacetype, char *col);

// blends and shades between two color pointers
void	UI_ColorPtrBlendShade3ubv(char *cp1, char *cp2, float fac, int offset);

// get a 3 byte color, blended and shaded between two other char color pointers
void	UI_GetColorPtrBlendShade3ubv(char *cp1, char *cp2, char *col, float fac, int offset);

// get pointer from RNA pointer
int		UI_GetIconRNA(struct PointerRNA *ptr);

struct ScrArea;

// internal (blender) usage only, for init and set active
void 	UI_SetTheme(struct ScrArea *sa);
void 	ui_theme_init_userdef		(void);
void	ui_resources_init		(void);
void	ui_resources_free		(void);

/* only for buttons in theme editor! */
char 	*UI_ThemeGetColorPtr(struct bTheme *btheme, int spacetype, int colorid);
char 	*UI_ThemeColorsPup(int spacetype);

#endif /*  UI_ICONS_H */
