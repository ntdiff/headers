typedef struct _CMSG_SIGNED_ENCODE_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long cSigners;
  /* 0x0008 */ struct _CMSG_SIGNER_ENCODE_INFO* rgSigners;
  /* 0x0010 */ unsigned long cCertEncoded;
  /* 0x0018 */ struct _CRYPTOAPI_BLOB* rgCertEncoded;
  /* 0x0020 */ unsigned long cCrlEncoded;
  /* 0x0028 */ struct _CRYPTOAPI_BLOB* rgCrlEncoded;
} CMSG_SIGNED_ENCODE_INFO, *PCMSG_SIGNED_ENCODE_INFO; /* size: 0x0030 */

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

typedef struct _CMSG_ENVELOPED_ENCODE_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ unsigned __int64 hCryptProv;
  /* 0x0010 */ struct _CRYPT_ALGORITHM_IDENTIFIER ContentEncryptionAlgorithm;
  /* 0x0028 */ void* pvEncryptionAuxInfo;
  /* 0x0030 */ unsigned long cRecipients;
  /* 0x0038 */ struct _CERT_INFO** rgpRecipients;
} CMSG_ENVELOPED_ENCODE_INFO, *PCMSG_ENVELOPED_ENCODE_INFO; /* size: 0x0040 */

typedef struct _CMSG_SIGNED_AND_ENVELOPED_ENCODE_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ struct _CMSG_SIGNED_ENCODE_INFO SignedInfo;
  /* 0x0038 */ struct _CMSG_ENVELOPED_ENCODE_INFO EnvelopedInfo;
} CMSG_SIGNED_AND_ENVELOPED_ENCODE_INFO, *PCMSG_SIGNED_AND_ENVELOPED_ENCODE_INFO; /* size: 0x0078 */

