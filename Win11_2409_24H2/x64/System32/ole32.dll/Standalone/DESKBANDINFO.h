typedef struct _POINTL
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
} POINTL, *PPOINTL; /* size: 0x0008 */

struct DESKBANDINFO
{
  /* 0x0000 */ unsigned long dwMask;
  /* 0x0004 */ struct _POINTL ptMinSize;
  /* 0x000c */ struct _POINTL ptMaxSize;
  /* 0x0014 */ struct _POINTL ptIntegral;
  /* 0x001c */ struct _POINTL ptActual;
  /* 0x0024 */ wchar_t wszTitle[256];
  /* 0x0224 */ unsigned long dwModeFlags;
  /* 0x0228 */ unsigned long crBkgnd;
}; /* size: 0x022c */

