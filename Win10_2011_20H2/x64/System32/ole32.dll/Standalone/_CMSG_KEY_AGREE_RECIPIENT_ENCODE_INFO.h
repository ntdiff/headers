typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0010 */

typedef struct _CRYPT_ALGORITHM_IDENTIFIER
{
  /* 0x0000 */ char* pszObjId;
  /* 0x0008 */ struct _CRYPTOAPI_BLOB Parameters;
} CRYPT_ALGORITHM_IDENTIFIER, *PCRYPT_ALGORITHM_IDENTIFIER; /* size: 0x0018 */

typedef struct _CMSG_KEY_AGREE_RECIPIENT_ENCODE_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ struct _CRYPT_ALGORITHM_IDENTIFIER KeyEncryptionAlgorithm;
  /* 0x0020 */ void* pvKeyEncryptionAuxInfo;
  /* 0x0028 */ struct _CRYPT_ALGORITHM_IDENTIFIER KeyWrapAlgorithm;
  /* 0x0040 */ void* pvKeyWrapAuxInfo;
  /* 0x0048 */ unsigned __int64 hCryptProv;
  /* 0x0050 */ unsigned long dwKeySpec;
  /* 0x0054 */ unsigned long dwKeyChoice;
  union
  {
    /* 0x0058 */ struct _CRYPT_ALGORITHM_IDENTIFIER* pEphemeralAlgorithm;
    /* 0x0058 */ struct _CERT_ID* pSenderId;
  }; /* size: 0x0008 */
  /* 0x0060 */ struct _CRYPTOAPI_BLOB UserKeyingMaterial;
  /* 0x0070 */ unsigned long cRecipientEncryptedKeys;
  /* 0x0078 */ struct _CMSG_RECIPIENT_ENCRYPTED_KEY_ENCODE_INFO** rgpRecipientEncryptedKeys;
} CMSG_KEY_AGREE_RECIPIENT_ENCODE_INFO, *PCMSG_KEY_AGREE_RECIPIENT_ENCODE_INFO; /* size: 0x0080 */

