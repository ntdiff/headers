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

typedef struct _CRYPT_ATTRIBUTES
{
  /* 0x0000 */ unsigned long cAttr;
  /* 0x0004 */ struct _CRYPT_ATTRIBUTE* rgAttr;
} CRYPT_ATTRIBUTES, *PCRYPT_ATTRIBUTES; /* size: 0x0008 */

typedef struct _CMSG_SIGNER_INFO
{
  /* 0x0000 */ unsigned long dwVersion;
  /* 0x0004 */ struct _CRYPTOAPI_BLOB Issuer;
  /* 0x000c */ struct _CRYPTOAPI_BLOB SerialNumber;
  /* 0x0014 */ struct _CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
  /* 0x0020 */ struct _CRYPT_ALGORITHM_IDENTIFIER HashEncryptionAlgorithm;
  /* 0x002c */ struct _CRYPTOAPI_BLOB EncryptedHash;
  /* 0x0034 */ struct _CRYPT_ATTRIBUTES AuthAttrs;
  /* 0x003c */ struct _CRYPT_ATTRIBUTES UnauthAttrs;
} CMSG_SIGNER_INFO, *PCMSG_SIGNER_INFO; /* size: 0x0044 */

