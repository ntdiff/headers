typedef struct _CERT_ALT_NAME_INFO
{
  /* 0x0000 */ unsigned long cAltEntry;
  /* 0x0004 */ struct _CERT_ALT_NAME_ENTRY* rgAltEntry;
} CERT_ALT_NAME_INFO, *PCERT_ALT_NAME_INFO; /* size: 0x0008 */

typedef struct _CRL_DIST_POINT_NAME
{
  /* 0x0000 */ unsigned long dwDistPointNameChoice;
  /* 0x0004 */ struct _CERT_ALT_NAME_INFO FullName;
} CRL_DIST_POINT_NAME, *PCRL_DIST_POINT_NAME; /* size: 0x000c */

typedef struct _CRYPT_BIT_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
  /* 0x0008 */ unsigned long cUnusedBits;
} CRYPT_BIT_BLOB, *PCRYPT_BIT_BLOB; /* size: 0x000c */

typedef struct _CRL_ISSUING_DIST_POINT
{
  /* 0x0000 */ struct _CRL_DIST_POINT_NAME DistPointName;
  /* 0x000c */ int fOnlyContainsUserCerts;
  /* 0x0010 */ int fOnlyContainsCACerts;
  /* 0x0014 */ struct _CRYPT_BIT_BLOB OnlySomeReasonFlags;
  /* 0x0020 */ int fIndirectCRL;
} CRL_ISSUING_DIST_POINT, *PCRL_ISSUING_DIST_POINT; /* size: 0x0024 */

