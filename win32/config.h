/* config.h for Windows. */

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
/* #undef HAVE_ALLOCA_H */

/* Define to 1 if you have <malloc.h> and it should be used. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the <getopt.h> header file. */
/* #undef HAVE_GETOPT_H */

/* Define to 1 if you have the `getopt_long' function. */
/* #undef HAVE_GETOPT_LONG */

/* Define if the GNU gettext() function is already present or preinstalled. */
/* #undef HAVE_GETTEXT */

/* Define to 1 if you have the `isascii' function. */
#define HAVE_ISASCII 1

/* Define to 1 if you have the `isblank' function. */
/* #undef HAVE_ISBLANK */

/* Define to 1 if you have the `iswctype' function. */
#define HAVE_ISWCTYPE 1

/* Define to 1 if you have the `iswlower' function. */
#define HAVE_ISWLOWER 1

/* Define to 1 if you have the `iswupper' function. */
#define HAVE_ISWUPPER 1

/* Define to 1 if you have the `mbrtowc' function. */
#define HAVE_MBRTOWC 1

/* Define to 1 if the system has the type `mbstate_t'. */
#define HAVE_MBSTATE_T 1

/* Define to 1 if you have the `mbtowc' function. */
#define HAVE_MBTOWC 1

/* Define to 1 if you have the <regex.h> header file. */
#undef HAVE_REGEX_H

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the `towlower' function. */
#undef HAVE_TOWLOWER

/* Define to 1 if you have the `towupper' function. */
#define HAVE_TOWUPPER 1

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Define to 1 if the system has the type `wchar_t'. */
#define HAVE_WCHAR_T 1

/* Define to 1 if you have the `wcschr' function. */
#define HAVE_WCSCHR 1

/* Define to 1 if you have the `wcscpy' function. */
#define HAVE_WCSCPY 1

/* Define to 1 if you have the `wcslen' function. */
#define HAVE_WCSLEN 1

/* Define to 1 if you have the `wcsncpy' function. */
#define HAVE_WCSNCPY 1

/* Define to 1 if you have the `wcsrtombs' function. */
#define HAVE_WCSRTOMBS 1

/* Define to 1 if you have the `wcstombs' function. */
#define HAVE_WCSTOMBS 1

/* Define to 1 if you have the `wctype' function. */
#define HAVE_WCTYPE 1

/* Define to 1 if you have the <wctype.h> header file. */
#define HAVE_WCTYPE_H 1

/* Define if you want to disable debug assertions. */
/* #undef NDEBUG */

/* Define if you want TRE to print debug messages to stdout. */
/* #undef TRE_DEBUG */

/* Define to a field in the regex_t struct where TRE should store a pointer to
   the internal tre_tnfa_t structure */
#define TRE_REGEX_T_FIELD value

/* Define to the absolute path to the system regex.h */
/* #undef TRE_SYSTEM_REGEX_H_PATH */

/* Define to include the system regex.h from TRE regex.h */
/* #undef TRE_USE_SYSTEM_REGEX_H */

/* Define to the maximum value of wchar_t if not already defined elsewhere */
/* #undef WCHAR_MAX */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define as `__inline' if that's what the C compiler calls it, or to nothing
   if it is not supported. */
#define inline __inline

/* Avoid silly warnings about "insecure" functions. */
#define _CRT_SECURE_NO_DEPRECATE 1

#define snprintf sprintf_s
