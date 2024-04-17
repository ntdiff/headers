typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0010 */

typedef struct _CMSG_KEY_AGREE_KEY_ENCRYPT_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ struct _CRYPTOAPI_BLOB EncryptedKey;
} CMSG_KEY_AGREE_KEY_ENCRYPT_INFO, *PCMSG_KEY_AGREE_KEY_ENCRYPT_INFO; /* size: 0x0018 */

