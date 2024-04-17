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

typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _OCSP_BASIC_RESPONSE_ENTRY
{
  /* 0x0000 */ struct _OCSP_CERT_ID CertId;
  /* 0x0048 */ unsigned long dwCertStatus;
  /* 0x0050 */ struct _OCSP_BASIC_REVOKED_INFO* pRevokedInfo;
  /* 0x0058 */ struct _FILETIME ThisUpdate;
  /* 0x0060 */ struct _FILETIME NextUpdate;
  /* 0x0068 */ unsigned long cExtension;
  /* 0x0070 */ struct _CERT_EXTENSION* rgExtension;
} OCSP_BASIC_RESPONSE_ENTRY, *POCSP_BASIC_RESPONSE_ENTRY; /* size: 0x0078 */

