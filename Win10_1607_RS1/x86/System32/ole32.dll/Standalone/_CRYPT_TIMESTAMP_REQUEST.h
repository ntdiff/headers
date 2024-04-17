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

typedef struct _CRYPT_TIMESTAMP_REQUEST
{
  /* 0x0000 */ unsigned long dwVersion;
  /* 0x0004 */ struct _CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
  /* 0x0010 */ struct _CRYPTOAPI_BLOB HashedMessage;
  /* 0x0018 */ char* pszTSAPolicyId;
  /* 0x001c */ struct _CRYPTOAPI_BLOB Nonce;
  /* 0x0024 */ int fCertReq;
  /* 0x0028 */ unsigned long cExtension;
  /* 0x002c */ struct _CERT_EXTENSION* rgExtension;
} CRYPT_TIMESTAMP_REQUEST, *PCRYPT_TIMESTAMP_REQUEST; /* size: 0x0030 */

