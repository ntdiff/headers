typedef struct _SHFILEINFOA
{
  /* 0x0000 */ struct HICON__* hIcon;
  /* 0x0004 */ int iIcon;
  /* 0x0008 */ unsigned long dwAttributes;
  /* 0x000c */ char szDisplayName[260];
  /* 0x0110 */ char szTypeName[80];
} SHFILEINFOA, *PSHFILEINFOA; /* size: 0x0160 */

