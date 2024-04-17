typedef struct _CERT_LOGOTYPE_INFO
{
  /* 0x0000 */ unsigned long dwLogotypeInfoChoice;
  union
  {
    /* 0x0004 */ struct _CERT_LOGOTYPE_DATA* pLogotypeDirectInfo;
    /* 0x0004 */ struct _CERT_LOGOTYPE_REFERENCE* pLogotypeIndirectInfo;
  }; /* size: 0x0004 */
} CERT_LOGOTYPE_INFO, *PCERT_LOGOTYPE_INFO; /* size: 0x0008 */

typedef struct _CERT_OTHER_LOGOTYPE_INFO
{
  /* 0x0000 */ char* pszObjId;
  /* 0x0004 */ struct _CERT_LOGOTYPE_INFO LogotypeInfo;
} CERT_OTHER_LOGOTYPE_INFO, *PCERT_OTHER_LOGOTYPE_INFO; /* size: 0x000c */

