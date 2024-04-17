typedef struct _CRYPT_BIT_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
  /* 0x0008 */ unsigned long cUnusedBits;
} CRYPT_BIT_BLOB, *PCRYPT_BIT_BLOB; /* size: 0x000c */

typedef struct _CMSG_CTRL_KEY_AGREE_DECRYPT_PARA
{
  /* 0x0000 */ unsigned long cbSize;
  union
  {
    /* 0x0004 */ unsigned long hCryptProv;
    /* 0x0004 */ unsigned long hNCryptKey;
  }; /* size: 0x0004 */
  /* 0x0008 */ unsigned long dwKeySpec;
  /* 0x000c */ struct _CMSG_KEY_AGREE_RECIPIENT_INFO* pKeyAgree;
  /* 0x0010 */ unsigned long dwRecipientIndex;
  /* 0x0014 */ unsigned long dwRecipientEncryptedKeyIndex;
  /* 0x0018 */ struct _CRYPT_BIT_BLOB OriginatorPublicKey;
} CMSG_CTRL_KEY_AGREE_DECRYPT_PARA, *PCMSG_CTRL_KEY_AGREE_DECRYPT_PARA; /* size: 0x0024 */

