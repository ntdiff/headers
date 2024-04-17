typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0008 */

typedef struct _CRYPT_ALGORITHM_IDENTIFIER
{
  /* 0x0000 */ char* pszObjId;
  /* 0x0004 */ struct _CRYPTOAPI_BLOB Parameters;
} CRYPT_ALGORITHM_IDENTIFIER, *PCRYPT_ALGORITHM_IDENTIFIER; /* size: 0x000c */

typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _CRYPT_TIMESTAMP_INFO
{
  /* 0x0000 */ unsigned long dwVersion;
  /* 0x0004 */ char* pszTSAPolicyId;
  /* 0x0008 */ struct _CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
  /* 0x0014 */ struct _CRYPTOAPI_BLOB HashedMessage;
  /* 0x001c */ struct _CRYPTOAPI_BLOB SerialNumber;
  /* 0x0024 */ struct _FILETIME ftTime;
  /* 0x002c */ struct _CRYPT_TIMESTAMP_ACCURACY* pvAccuracy;
  /* 0x0030 */ int fOrdering;
  /* 0x0034 */ struct _CRYPTOAPI_BLOB Nonce;
  /* 0x003c */ struct _CRYPTOAPI_BLOB Tsa;
  /* 0x0044 */ unsigned long cExtension;
  /* 0x0048 */ struct _CERT_EXTENSION* rgExtension;
} CRYPT_TIMESTAMP_INFO, *PCRYPT_TIMESTAMP_INFO; /* size: 0x004c */

