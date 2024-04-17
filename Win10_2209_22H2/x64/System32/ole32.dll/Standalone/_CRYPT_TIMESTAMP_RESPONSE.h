typedef struct _CRYPT_BIT_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
  /* 0x0010 */ unsigned long cUnusedBits;
  /* 0x0014 */ long __PADDING__[1];
} CRYPT_BIT_BLOB, *PCRYPT_BIT_BLOB; /* size: 0x0018 */

typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0010 */

typedef struct _CRYPT_TIMESTAMP_RESPONSE
{
  /* 0x0000 */ unsigned long dwStatus;
  /* 0x0004 */ unsigned long cFreeText;
  /* 0x0008 */ wchar_t** rgFreeText;
  /* 0x0010 */ struct _CRYPT_BIT_BLOB FailureInfo;
  /* 0x0028 */ struct _CRYPTOAPI_BLOB ContentInfo;
} CRYPT_TIMESTAMP_RESPONSE, *PCRYPT_TIMESTAMP_RESPONSE; /* size: 0x0038 */

