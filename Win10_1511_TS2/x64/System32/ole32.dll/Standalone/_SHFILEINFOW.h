typedef struct _SHFILEINFOW
{
  /* 0x0000 */ struct HICON__* hIcon;
  /* 0x0008 */ int iIcon;
  /* 0x000c */ unsigned long dwAttributes;
  /* 0x0010 */ wchar_t szDisplayName[260];
  /* 0x0218 */ wchar_t szTypeName[80];
} SHFILEINFOW, *PSHFILEINFOW; /* size: 0x02b8 */

