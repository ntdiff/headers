typedef struct _ZONEATTRIBUTES
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ wchar_t szDisplayName[260];
  /* 0x020c */ wchar_t szDescription[200];
  /* 0x039c */ wchar_t szIconPath[260];
  /* 0x05a4 */ unsigned long dwTemplateMinLevel;
  /* 0x05a8 */ unsigned long dwTemplateRecommended;
  /* 0x05ac */ unsigned long dwTemplateCurrentLevel;
  /* 0x05b0 */ unsigned long dwFlags;
} ZONEATTRIBUTES, *PZONEATTRIBUTES; /* size: 0x05b4 */

