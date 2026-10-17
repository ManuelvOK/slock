/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
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
