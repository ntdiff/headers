typedef struct _CERT_TEMPLATE_EXT
{
  /* 0x0000 */ char* pszObjId;
  /* 0x0004 */ unsigned long dwMajorVersion;
  /* 0x0008 */ int fMinorVersion;
  /* 0x000c */ unsigned long dwMinorVersion;
} CERT_TEMPLATE_EXT, *PCERT_TEMPLATE_EXT; /* size: 0x0010 */

