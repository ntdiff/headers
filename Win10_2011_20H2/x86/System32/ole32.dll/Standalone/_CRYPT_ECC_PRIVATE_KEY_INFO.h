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

typedef struct _CRYPT_ECC_PRIVATE_KEY_INFO
{
  /* 0x0000 */ unsigned long dwVersion;
  /* 0x0004 */ struct _CRYPTOAPI_BLOB PrivateKey;
  /* 0x000c */ char* szCurveOid;
  /* 0x0010 */ struct _CRYPT_BIT_BLOB PublicKey;
} CRYPT_ECC_PRIVATE_KEY_INFO, *PCRYPT_ECC_PRIVATE_KEY_INFO; /* size: 0x001c */

