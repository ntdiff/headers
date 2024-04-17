typedef struct _CERT_TEMPLATE_EXT
{
  /* 0x0000 */ char* pszObjId;
  /* 0x0008 */ unsigned long dwMajorVersion;
  /* 0x000c */ int fMinorVersion;
  /* 0x0010 */ unsigned long dwMinorVersion;
  /* 0x0014 */ long __PADDING__[1];
} CERT_TEMPLATE_EXT, *PCERT_TEMPLATE_EXT; /* size: 0x0018 */

