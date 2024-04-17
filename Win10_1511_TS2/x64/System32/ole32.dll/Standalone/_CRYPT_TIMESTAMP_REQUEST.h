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

typedef struct _CRYPT_TIMESTAMP_REQUEST
{
  /* 0x0000 */ unsigned long dwVersion;
  /* 0x0008 */ struct _CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
  /* 0x0020 */ struct _CRYPTOAPI_BLOB HashedMessage;
  /* 0x0030 */ char* pszTSAPolicyId;
  /* 0x0038 */ struct _CRYPTOAPI_BLOB Nonce;
  /* 0x0048 */ int fCertReq;
  /* 0x004c */ unsigned long cExtension;
  /* 0x0050 */ struct _CERT_EXTENSION* rgExtension;
} CRYPT_TIMESTAMP_REQUEST, *PCRYPT_TIMESTAMP_REQUEST; /* size: 0x0058 */

