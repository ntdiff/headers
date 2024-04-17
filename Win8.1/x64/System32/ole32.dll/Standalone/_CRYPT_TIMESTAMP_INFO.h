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

typedef struct _CRYPT_TIMESTAMP_INFO
{
  /* 0x0000 */ unsigned long dwVersion;
  /* 0x0008 */ char* pszTSAPolicyId;
  /* 0x0010 */ struct _CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
  /* 0x0028 */ struct _CRYPTOAPI_BLOB HashedMessage;
  /* 0x0038 */ struct _CRYPTOAPI_BLOB SerialNumber;
  /* 0x0048 */ struct _FILETIME ftTime;
  /* 0x0050 */ struct _CRYPT_TIMESTAMP_ACCURACY* pvAccuracy;
  /* 0x0058 */ int fOrdering;
  /* 0x0060 */ struct _CRYPTOAPI_BLOB Nonce;
  /* 0x0070 */ struct _CRYPTOAPI_BLOB Tsa;
  /* 0x0080 */ unsigned long cExtension;
  /* 0x0088 */ struct _CERT_EXTENSION* rgExtension;
} CRYPT_TIMESTAMP_INFO, *PCRYPT_TIMESTAMP_INFO; /* size: 0x0090 */

