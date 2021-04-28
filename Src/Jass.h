#pragma once

#include <Windows.h>

typedef void   jNothing;
typedef UINT32 jBoolean;
typedef UINT32 jCode;
typedef UINT32 jHandle;
typedef INT32  jInteger;
typedef UINT32 jReal;
typedef UINT32 jString;
typedef UINT32 jTrigger;

const jBoolean jTrue = 1;
const jBoolean jFalse = 0;
const jHandle jNull = 0;

typedef DWORD HUNIT;
typedef DWORD HWIDGET;
typedef DWORD HLIGHTNING;
typedef DWORD HPLAYER;
typedef DWORD HEFFECT;
typedef DWORD HLOCATION;
typedef DWORD HEFFECTTYPE;
typedef DWORD HRECT;
typedef DWORD HWEATHEREFFECT;
typedef DWORD HCAMERAFIELD;
typedef DWORD HBOOLEXPR;
typedef DWORD HSOUND;
typedef DWORD HCAMERASETUP;
typedef DWORD HITEMTYPE;
typedef DWORD HCONDITIONFUNC;
typedef DWORD HAIDIFFICULTY;
typedef DWORD HALLIANCETYPE;
typedef DWORD HATTACKTYPE;
typedef DWORD HBLENDMODE;
typedef DWORD HDAMAGETYPE;
typedef DWORD HDIALOGEVENT;
typedef DWORD HFGAMESTATE;
typedef DWORD HFOGSTATE;
typedef DWORD HGAMEDIFFICULTY;
typedef DWORD HGAMEEVENT;
typedef DWORD HGAMESPEED;
typedef DWORD HGAMETYPE;
typedef DWORD HIGAMESTATE;
typedef DWORD HLIMITOP;
typedef DWORD HMAPCONTROL;
typedef DWORD HMAPDENSITY;
typedef DWORD HMAPFLAG;
typedef DWORD HMAPSETTING;
typedef DWORD HMAPVISIBILITY;
typedef DWORD HPATHINGTYPE;
typedef DWORD HPLACEMENT;
typedef DWORD HPLAYERCOLOR;
typedef DWORD HPLAYEREVENT;
typedef DWORD HPLAYERGAMERESULT;
typedef DWORD HPLAYERSCORE;
typedef DWORD HPLAYERSLOTSTATE;
typedef DWORD HPLAYERSTATE;
typedef DWORD HPLAYERUNITEVENT;
typedef DWORD HRACE;
typedef DWORD HRACEPREFERENCE;
typedef DWORD HRARITYCONTROL;
typedef DWORD HSOUNDTYPE;
typedef DWORD HSTARTLOCPRIO;
typedef DWORD HTEXMAPFLAGS;
typedef DWORD HUNITEVENT;
typedef DWORD HUNITSTATE;
typedef DWORD HUNITTYPE;
typedef DWORD HVERSION;
typedef DWORD HVOLUMEGROUP;
typedef DWORD HWEAPONTYPE;
typedef DWORD HWIDGETEVENT;
typedef DWORD HDESTRUCTABLE;
typedef DWORD HDEFEATCONDITION;
typedef DWORD HFOGMODIFIER;
typedef DWORD HFORCE;
typedef DWORD HGROUP;
typedef DWORD HIMAGE;
typedef DWORD HITEM;
typedef DWORD HITEMPOOL;
typedef DWORD HLEADERBOARD;
typedef DWORD HMULTIBOARD;
typedef DWORD HQUEST;
typedef DWORD HREGION;
typedef DWORD HTEXTTAG;
typedef DWORD HTIMER;
typedef DWORD HTIMERDIALOG;
typedef DWORD HTRACKABLE;
typedef DWORD HUBERSPLAT;
typedef DWORD HUNITPOOL;
typedef DWORD HFILTERFUNC;
typedef DWORD HDIALOG;
typedef DWORD HBUTTON;
typedef DWORD HHASHTABLE;
typedef DWORD HGAMECACHE;
typedef DWORD HGAMESTATE;
typedef DWORD HHANDLE2;
typedef DWORD HABILITY;
typedef DWORD HEVENTID;
typedef DWORD HQUESTITEM;
typedef DWORD HMULTIBOARDITEM;
typedef DWORD HTRIGGERACTION;
typedef DWORD HTRIGGERCONDITION;
typedef DWORD HEVENT;
typedef DWORD HAGENT;
typedef DWORD HTERRAINDEFORMATION;

jReal to_jReal(float fX);
jString to_jString(LPCSTR lpString);
LPCSTR from_jString(jString string);
jInteger to_ID(LPCSTR lpID);

//---------------------------------------------------------

HTIMER CreateTimer();
jNothing TimerStart(HTIMER whichTimer, jReal* timeout, jBoolean periodic, jCode handlerFunc);
HPLAYER Player(jInteger number);
jNothing DisplayTimedTextToPlayer(HPLAYER toPlayer, jReal* x, jReal* y, jReal* duration, jString msg);
HUNIT CreateUnit(HPLAYER id, jInteger unitid, jReal* x, jReal* y, jReal* face);
HPLAYEREVENT ConvertPlayerEvent(jInteger i);
HEVENT TriggerRegisterPlayerEvent(jTrigger whichTrigger, HPLAYER whichPlayer, HPLAYEREVENT whichPlayerEvent);
HEVENT TriggerRegisterPlayerChatEvent(jTrigger whichTrigger, HPLAYER whichPlayer, jString chatMessageToDetect, jBoolean exactMatchOnly);
jTrigger CreateTrigger();
HBOOLEXPR Condition(jCode actionFunc);
HTRIGGERCONDITION TriggerAddCondition(jTrigger whichTrigger, HBOOLEXPR condition);
HTRIGGERACTION TriggerAddAction(jTrigger whichTrigger, jCode actionFunc);