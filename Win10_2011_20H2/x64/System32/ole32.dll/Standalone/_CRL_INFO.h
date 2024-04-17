typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0010 */

typedef struct _CRYPT_ALGORITHM_IDENTIFIER
{
  /* 0x0000 */ char* pszObjId;
  /* 0x0008 */ struct _CRYPTOAPI_BLOB Parameters;
} CRYPT_ALGORITHM_IDENTIFIER, *PCRYPT_ALGORITHM_IDENTIFIER; /* size: 0x0018 */

typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _CRL_INFO
{
  /* 0x0000 */ unsigned long dwVersion;
  /* 0x0008 */ struct _CRYPT_ALGORITHM_IDENTIFIER SignatureAlgorithm;
  /* 0x0020 */ struct _CRYPTOAPI_BLOB Issuer;
  /* 0x0030 */ struct _FILETIME ThisUpdate;
  /* 0x0038 */ struct _FILETIME NextUpdate;
  /* 0x0040 */ unsigned long cCRLEntry;
  /* 0x0048 */ struct _CRL_ENTRY* rgCRLEntry;
  /* 0x0050 */ unsigned long cExtension;
  /* 0x0058 */ struct _CERT_EXTENSION* rgExtension;
} CRL_INFO, *PCRL_INFO; /* size: 0x0060 */

