typedef struct _CTL_USAGE
{
  /* 0x0000 */ unsigned long cUsageIdentifier;
  /* 0x0004 */ char** rgpszUsageIdentifier;
} CTL_USAGE, *PCTL_USAGE; /* size: 0x0008 */

typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0008 */

typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _CRYPT_ALGORITHM_IDENTIFIER
{
  /* 0x0000 */ char* pszObjId;
  /* 0x0004 */ struct _CRYPTOAPI_BLOB Parameters;
} CRYPT_ALGORITHM_IDENTIFIER, *PCRYPT_ALGORITHM_IDENTIFIER; /* size: 0x000c */

typedef struct _CTL_INFO
{
  /* 0x0000 */ unsigned long dwVersion;
  /* 0x0004 */ struct _CTL_USAGE SubjectUsage;
  /* 0x000c */ struct _CRYPTOAPI_BLOB ListIdentifier;
  /* 0x0014 */ struct _CRYPTOAPI_BLOB SequenceNumber;
  /* 0x001c */ struct _FILETIME ThisUpdate;
  /* 0x0024 */ struct _FILETIME NextUpdate;
  /* 0x002c */ struct _CRYPT_ALGORITHM_IDENTIFIER SubjectAlgorithm;
  /* 0x0038 */ unsigned long cCTLEntry;
  /* 0x003c */ struct _CTL_ENTRY* rgCTLEntry;
  /* 0x0040 */ unsigned long cExtension;
  /* 0x0044 */ struct _CERT_EXTENSION* rgExtension;
} CTL_INFO, *PCTL_INFO; /* size: 0x0048 */

