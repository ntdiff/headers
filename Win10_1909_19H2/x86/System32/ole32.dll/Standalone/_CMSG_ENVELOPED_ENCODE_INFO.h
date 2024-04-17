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

typedef struct _CMSG_ENVELOPED_ENCODE_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long hCryptProv;
  /* 0x0008 */ struct _CRYPT_ALGORITHM_IDENTIFIER ContentEncryptionAlgorithm;
  /* 0x0014 */ void* pvEncryptionAuxInfo;
  /* 0x0018 */ unsigned long cRecipients;
  /* 0x001c */ struct _CERT_INFO** rgpRecipients;
} CMSG_ENVELOPED_ENCODE_INFO, *PCMSG_ENVELOPED_ENCODE_INFO; /* size: 0x0020 */

