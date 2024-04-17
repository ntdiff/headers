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

typedef struct _CMSG_MAIL_LIST_ENCRYPT_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long dwRecipientIndex;
  /* 0x0008 */ struct _CRYPT_ALGORITHM_IDENTIFIER KeyEncryptionAlgorithm;
  /* 0x0014 */ struct _CRYPTOAPI_BLOB EncryptedKey;
  /* 0x001c */ unsigned long dwFlags;
} CMSG_MAIL_LIST_ENCRYPT_INFO, *PCMSG_MAIL_LIST_ENCRYPT_INFO; /* size: 0x0020 */

