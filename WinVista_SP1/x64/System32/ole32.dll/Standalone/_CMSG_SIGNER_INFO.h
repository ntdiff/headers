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

typedef struct _CRYPT_ATTRIBUTES
{
  /* 0x0000 */ unsigned long cAttr;
  /* 0x0008 */ struct _CRYPT_ATTRIBUTE* rgAttr;
} CRYPT_ATTRIBUTES, *PCRYPT_ATTRIBUTES; /* size: 0x0010 */

typedef struct _CMSG_SIGNER_INFO
{
  /* 0x0000 */ unsigned long dwVersion;
  /* 0x0008 */ struct _CRYPTOAPI_BLOB Issuer;
  /* 0x0018 */ struct _CRYPTOAPI_BLOB SerialNumber;
  /* 0x0028 */ struct _CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
  /* 0x0040 */ struct _CRYPT_ALGORITHM_IDENTIFIER HashEncryptionAlgorithm;
  /* 0x0058 */ struct _CRYPTOAPI_BLOB EncryptedHash;
  /* 0x0068 */ struct _CRYPT_ATTRIBUTES AuthAttrs;
  /* 0x0078 */ struct _CRYPT_ATTRIBUTES UnauthAttrs;
} CMSG_SIGNER_INFO, *PCMSG_SIGNER_INFO; /* size: 0x0088 */

