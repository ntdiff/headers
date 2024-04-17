typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0008 */

typedef struct _CRYPT_BIT_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
  /* 0x0008 */ unsigned long cUnusedBits;
} CRYPT_BIT_BLOB, *PCRYPT_BIT_BLOB; /* size: 0x000c */

typedef struct _CERT_KEY_ATTRIBUTES_INFO
{
  /* 0x0000 */ struct _CRYPTOAPI_BLOB KeyId;
  /* 0x0008 */ struct _CRYPT_BIT_BLOB IntendedKeyUsage;
  /* 0x0014 */ struct _CERT_PRIVATE_KEY_VALIDITY* pPrivateKeyUsagePeriod;
} CERT_KEY_ATTRIBUTES_INFO, *PCERT_KEY_ATTRIBUTES_INFO; /* size: 0x0018 */

