/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 1200;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrains Mono:size=14",
	"JoyPixels:size=18",
	"Symbols Nerd Font:size=18"
	/* "DejaVu Sans Mono:size=14", */
	/* "monospace:size=10", */
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#ff79c6", "#282a36" },
	[SchemeSel] = { "#282a36", "#ff79c6" },
	[SchemeSelHighlight] = { "#f8f8f2", "#ff79c6" },
	[SchemeNormHighlight] = { "#f8f8f2", "#282a36" },
	[SchemeOut] = { "#000000", "#8be9fd" },
};
/* static const char *colors[SchemeLast][2] = { */
/* 	/1*     fg         bg       *1/ */
/* 	[SchemeNorm] = { "#bbbbbb", "#222222" }, */
/* 	[SchemeSel] = { "#eeeeee", "#d79921" }, */
/* 	[SchemeSelHighlight] = { "#222222", "#d79921" }, */
/* 	[SchemeNormHighlight] = { "#d79921", "#222222" }, */
/* 	[SchemeOut] = { "#000000", "#00ffff" }, */
/* }; */
// static const char *colors[SchemeLast][2] = {
	// [>     fg         bg       <]
	// [SchemeNorm] = { "#bbbbbb", "#222222" },
	// [SchemeSel] = { "#eeeeee", "#005577" },
	// [SchemeSelHighlight] = { "#d79921", "#005577" },
	// [SchemeNormHighlight] = { "#d79921", "#222222" },
	// [SchemeOut] = { "#000000", "#00ffff" },
// };
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
