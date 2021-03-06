#ifndef PAL3PATCH_LOCALE_H
#define PAL3PATCH_LOCALE_H

extern unsigned system_codepage;
extern unsigned target_codepage;

extern void init_locale_early(void);
extern void init_locale(void);

extern const wchar_t *wstr_about_title;
extern const wchar_t *wstr_about_text;
extern const wchar_t *wstr_confirmquit_text;
extern const wchar_t *wstr_confirmquit_title;
extern const char *ftfont_filename;
extern int ftfont_index;
extern const wchar_t *wstr_defaultfont;
extern DWORD defaultfont_charset;
extern int defaultfont_bold;
extern const wchar_t *wstr_gameloading;
extern const wchar_t *wstr_cantsavereg_text;
extern const wchar_t *wstr_cantsavereg_title;
extern const wchar_t *wstr_nocfgfile_text;
extern const wchar_t *wstr_nocfgfile_title;

#endif
