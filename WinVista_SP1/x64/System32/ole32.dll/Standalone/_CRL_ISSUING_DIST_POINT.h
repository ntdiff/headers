typedef struct _CERT_ALT_NAME_INFO
{
  /* 0x0000 */ unsigned long cAltEntry;
  /* 0x0008 */ struct _CERT_ALT_NAME_ENTRY* rgAltEntry;
} CERT_ALT_NAME_INFO, *PCERT_ALT_NAME_INFO; /* size: 0x0010 */

typedef struct _CRL_DIST_POINT_NAME
{
  /* 0x0000 */ unsigned long dwDistPointNameChoice;
  /* 0x0008 */ struct _CERT_ALT_NAME_INFO FullName;
} CRL_DIST_POINT_NAME, *PCRL_DIST_POINT_NAME; /* size: 0x0018 */

typedef struct _CRYPT_BIT_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
  /* 0x0010 */ unsigned long cUnusedBits;
  /* 0x0014 */ long __PADDING__[1];
} CRYPT_BIT_BLOB, *PCRYPT_BIT_BLOB; /* size: 0x0018 */

typedef struct _CRL_ISSUING_DIST_POINT
{
  /* 0x0000 */ struct _CRL_DIST_POINT_NAME DistPointName;
  /* 0x0018 */ int fOnlyContainsUserCerts;
  /* 0x001c */ int fOnlyContainsCACerts;
  /* 0x0020 */ struct _CRYPT_BIT_BLOB OnlySomeReasonFlags;
  /* 0x0038 */ int fIndirectCRL;
  /* 0x003c */ long __PADDING__[1];
} CRL_ISSUING_DIST_POINT, *PCRL_ISSUING_DIST_POINT; /* size: 0x0040 */

