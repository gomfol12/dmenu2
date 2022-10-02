/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static const unsigned int alpha = 0xf0;
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 800;                    /* minimum width when centered */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "Iosevka:pixelsize=16:antialias=true:autohint=true",
    "Symbols Nerd Font Mono:pixelsize=14:antialias=true:autohint=true",
    "Twemoji:pixelsize=14:antialias=true:autohint=true"
};

static char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *symbol_1 = "<";
static const char *symbol_2 = ">";

static char normfgcolor[] = "#ffffff";
static char normbgcolor[] = "#1a1a1a";
static char selfgcolor[]  = "#ffffff";
static char selbgcolor[]  = "#666666";
static char selhighfgcolor[] = "#10a204";
static char selhighbgcolor[] = "#666666";
static char normhighfgcolor[] = "#10a204";
static char normhighbgcolor[] = "#1a1a1a";

static char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { normfgcolor, normbgcolor },
	[SchemeSel]  = { selfgcolor,  selbgcolor  },
	[SchemeSelHighlight] = { selhighfgcolor, selhighbgcolor },
	[SchemeNormHighlight] = { normhighfgcolor, normhighbgcolor },
	[SchemeOut]  = { "#000000",   "#000000" },
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 24;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 0;

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "foreground", STRING, &normfgcolor },
	{ "background", STRING, &normbgcolor },
	{ "color0", STRING, &selfgcolor },
	{ "color2", STRING, &selbgcolor },
    { "color0", STRING, &selhighfgcolor },
    { "color2", STRING, &selhighbgcolor },
    { "color2", STRING, &normhighfgcolor },
    { "background", STRING, &normhighbgcolor },
};
