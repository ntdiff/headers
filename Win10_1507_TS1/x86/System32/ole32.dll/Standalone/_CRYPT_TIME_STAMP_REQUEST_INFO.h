typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0008 */

typedef struct _CRYPT_TIME_STAMP_REQUEST_INFO
{
  /* 0x0000 */ char* pszTimeStampAlgorithm;
  /* 0x0004 */ char* pszContentType;
  /* 0x0008 */ struct _CRYPTOAPI_BLOB Content;
  /* 0x0010 */ unsigned long cAttribute;
  /* 0x0014 */ struct _CRYPT_ATTRIBUTE* rgAttribute;
} CRYPT_TIME_STAMP_REQUEST_INFO, *PCRYPT_TIME_STAMP_REQUEST_INFO; /* size: 0x0018 */

