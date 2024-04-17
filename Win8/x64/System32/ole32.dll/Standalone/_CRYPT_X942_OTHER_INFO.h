typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0010 */

typedef struct _CRYPT_X942_OTHER_INFO
{
  /* 0x0000 */ char* pszContentEncryptionObjId;
  /* 0x0008 */ unsigned char rgbCounter[4];
  /* 0x000c */ unsigned char rgbKeyLength[4];
  /* 0x0010 */ struct _CRYPTOAPI_BLOB PubInfo;
} CRYPT_X942_OTHER_INFO, *PCRYPT_X942_OTHER_INFO; /* size: 0x0020 */

