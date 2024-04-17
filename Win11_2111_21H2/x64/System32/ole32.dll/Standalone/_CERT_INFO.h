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

typedef struct _CRYPT_BIT_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
  /* 0x0010 */ unsigned long cUnusedBits;
  /* 0x0014 */ long __PADDING__[1];
} CRYPT_BIT_BLOB, *PCRYPT_BIT_BLOB; /* size: 0x0018 */

typedef struct _CERT_PUBLIC_KEY_INFO
{
  /* 0x0000 */ struct _CRYPT_ALGORITHM_IDENTIFIER Algorithm;
  /* 0x0018 */ struct _CRYPT_BIT_BLOB PublicKey;
} CERT_PUBLIC_KEY_INFO, *PCERT_PUBLIC_KEY_INFO; /* size: 0x0030 */

typedef struct _CERT_INFO
{
  /* 0x0000 */ unsigned long dwVersion;
  /* 0x0008 */ struct _CRYPTOAPI_BLOB SerialNumber;
  /* 0x0018 */ struct _CRYPT_ALGORITHM_IDENTIFIER SignatureAlgorithm;
  /* 0x0030 */ struct _CRYPTOAPI_BLOB Issuer;
  /* 0x0040 */ struct _FILETIME NotBefore;
  /* 0x0048 */ struct _FILETIME NotAfter;
  /* 0x0050 */ struct _CRYPTOAPI_BLOB Subject;
  /* 0x0060 */ struct _CERT_PUBLIC_KEY_INFO SubjectPublicKeyInfo;
  /* 0x0090 */ struct _CRYPT_BIT_BLOB IssuerUniqueId;
  /* 0x00a8 */ struct _CRYPT_BIT_BLOB SubjectUniqueId;
  /* 0x00c0 */ unsigned long cExtension;
  /* 0x00c8 */ struct _CERT_EXTENSION* rgExtension;
} CERT_INFO, *PCERT_INFO; /* size: 0x00d0 */

