typedef struct _COSERVERINFO
{
  /* 0x0000 */ unsigned long dwReserved1;
  /* 0x0008 */ unsigned short* pwszName;
  /* 0x0010 */ struct _COAUTHINFO* pAuthInfo;
  /* 0x0018 */ unsigned long dwReserved2;
  /* 0x001c */ long __PADDING__[1];
} COSERVERINFO, *PCOSERVERINFO; /* size: 0x0020 */

