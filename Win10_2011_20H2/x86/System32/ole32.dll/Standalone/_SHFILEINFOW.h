typedef struct _SHFILEINFOW
{
  /* 0x0000 */ struct HICON__* hIcon;
  /* 0x0004 */ int iIcon;
  /* 0x0008 */ unsigned long dwAttributes;
  /* 0x000c */ wchar_t szDisplayName[260];
  /* 0x0214 */ wchar_t szTypeName[80];
} SHFILEINFOW, *PSHFILEINFOW; /* size: 0x02b4 */

