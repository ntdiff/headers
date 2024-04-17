typedef struct _CRYPT_BIT_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
  /* 0x0010 */ unsigned long cUnusedBits;
  /* 0x0014 */ long __PADDING__[1];
} CRYPT_BIT_BLOB, *PCRYPT_BIT_BLOB; /* size: 0x0018 */

typedef struct _CMSG_CTRL_KEY_AGREE_DECRYPT_PARA
{
  /* 0x0000 */ unsigned long cbSize;
  union
  {
    /* 0x0008 */ unsigned __int64 hCryptProv;
    /* 0x0008 */ unsigned __int64 hNCryptKey;
  }; /* size: 0x0008 */
  /* 0x0010 */ unsigned long dwKeySpec;
  /* 0x0018 */ struct _CMSG_KEY_AGREE_RECIPIENT_INFO* pKeyAgree;
  /* 0x0020 */ unsigned long dwRecipientIndex;
  /* 0x0024 */ unsigned long dwRecipientEncryptedKeyIndex;
  /* 0x0028 */ struct _CRYPT_BIT_BLOB OriginatorPublicKey;
} CMSG_CTRL_KEY_AGREE_DECRYPT_PARA, *PCMSG_CTRL_KEY_AGREE_DECRYPT_PARA; /* size: 0x0040 */

