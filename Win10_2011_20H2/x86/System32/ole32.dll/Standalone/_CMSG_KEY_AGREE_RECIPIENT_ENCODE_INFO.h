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

typedef struct _CMSG_KEY_AGREE_RECIPIENT_ENCODE_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ struct _CRYPT_ALGORITHM_IDENTIFIER KeyEncryptionAlgorithm;
  /* 0x0010 */ void* pvKeyEncryptionAuxInfo;
  /* 0x0014 */ struct _CRYPT_ALGORITHM_IDENTIFIER KeyWrapAlgorithm;
  /* 0x0020 */ void* pvKeyWrapAuxInfo;
  /* 0x0024 */ unsigned long hCryptProv;
  /* 0x0028 */ unsigned long dwKeySpec;
  /* 0x002c */ unsigned long dwKeyChoice;
  union
  {
    /* 0x0030 */ struct _CRYPT_ALGORITHM_IDENTIFIER* pEphemeralAlgorithm;
    /* 0x0030 */ struct _CERT_ID* pSenderId;
  }; /* size: 0x0004 */
  /* 0x0034 */ struct _CRYPTOAPI_BLOB UserKeyingMaterial;
  /* 0x003c */ unsigned long cRecipientEncryptedKeys;
  /* 0x0040 */ struct _CMSG_RECIPIENT_ENCRYPTED_KEY_ENCODE_INFO** rgpRecipientEncryptedKeys;
} CMSG_KEY_AGREE_RECIPIENT_ENCODE_INFO, *PCMSG_KEY_AGREE_RECIPIENT_ENCODE_INFO; /* size: 0x0044 */

