typedef struct _SHFILEINFOA
{
  /* 0x0000 */ struct HICON__* hIcon;
  /* 0x0008 */ int iIcon;
  /* 0x000c */ unsigned long dwAttributes;
  /* 0x0010 */ char szDisplayName[260];
  /* 0x0114 */ char szTypeName[80];
  /* 0x0164 */ long __PADDING__[1];
} SHFILEINFOA, *PSHFILEINFOA; /* size: 0x0168 */

