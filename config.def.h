/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[BG] =     "black",     /* background */
	[INIT] =   "#4f525c",   /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* 1: a modifier key pressed alone (Ctrl, Shift, ...) counts as input and
 * clears it, 0: modifier keys alone are ignored */
static const int controlkeyclear = 0;

/* time in seconds before the monitors are switched off while locked */
static const int monitortime = 5;

#include <X11/XF86keysym.h>

/* passthrough: keys that still work while locked. They are sent to the
 * root window, so the window manager (dwm) has to select KeyPressMask there */
static const Passthrough passthroughs[] = {
	/* modifier   key */
	{ 0,          XF86XK_AudioRaiseVolume },
	{ 0,          XF86XK_AudioLowerVolume },
	{ 0,          XF86XK_AudioMute },
	{ 0,          XF86XK_MonBrightnessUp },
	{ 0,          XF86XK_MonBrightnessDown },
};

/* squares: size of the square on each monitor in px */
static const int squaresize = 50;
