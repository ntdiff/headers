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

typedef struct _OCSP_CERT_ID
{
  /* 0x0000 */ struct _CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
  /* 0x0018 */ struct _CRYPTOAPI_BLOB IssuerNameHash;
  /* 0x0028 */ struct _CRYPTOAPI_BLOB IssuerKeyHash;
  /* 0x0038 */ struct _CRYPTOAPI_BLOB SerialNumber;
} OCSP_CERT_ID, *POCSP_CERT_ID; /* size: 0x0048 */

