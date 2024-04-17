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

typedef struct _CRYPT_BIT_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
  /* 0x0008 */ unsigned long cUnusedBits;
} CRYPT_BIT_BLOB, *PCRYPT_BIT_BLOB; /* size: 0x000c */

typedef struct _CERT_POLICIES_INFO
{
  /* 0x0000 */ unsigned long cPolicyInfo;
  /* 0x0004 */ struct _CERT_POLICY_INFO* rgPolicyInfo;
} CERT_POLICIES_INFO, *PCERT_POLICIES_INFO; /* size: 0x0008 */

typedef struct _CERT_SUPPORTED_ALGORITHM_INFO
{
  /* 0x0000 */ struct _CRYPT_ALGORITHM_IDENTIFIER Algorithm;
  /* 0x000c */ struct _CRYPT_BIT_BLOB IntendedKeyUsage;
  /* 0x0018 */ struct _CERT_POLICIES_INFO IntendedCertPolicies;
} CERT_SUPPORTED_ALGORITHM_INFO, *PCERT_SUPPORTED_ALGORITHM_INFO; /* size: 0x0020 */

