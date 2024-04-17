typedef struct _COSERVERINFO
{
  /* 0x0000 */ unsigned long dwReserved1;
  /* 0x0004 */ wchar_t* pwszName;
  /* 0x0008 */ struct _COAUTHINFO* pAuthInfo;
  /* 0x000c */ unsigned long dwReserved2;
} COSERVERINFO, *PCOSERVERINFO; /* size: 0x0010 */

