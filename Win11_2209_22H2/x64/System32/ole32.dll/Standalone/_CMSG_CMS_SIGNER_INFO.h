typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0010 */

typedef struct _CERT_ISSUER_SERIAL_NUMBER
{
  /* 0x0000 */ struct _CRYPTOAPI_BLOB Issuer;
  /* 0x0010 */ struct _CRYPTOAPI_BLOB SerialNumber;
} CERT_ISSUER_SERIAL_NUMBER, *PCERT_ISSUER_SERIAL_NUMBER; /* size: 0x0020 */

typedef struct _CERT_ID
{
  /* 0x0000 */ unsigned long dwIdChoice;
  union
  {
    /* 0x0008 */ struct _CERT_ISSUER_SERIAL_NUMBER IssuerSerialNumber;
    /* 0x0008 */ struct _CRYPTOAPI_BLOB KeyId;
    struct
    {
      /* 0x0008 */ struct _CRYPTOAPI_BLOB HashId;
      /* 0x0018 */ long __PADDING__[4];
    }; /* size: 0x0020 */
  }; /* size: 0x0020 */
} CERT_ID, *PCERT_ID; /* size: 0x0028 */

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

typedef struct _CMSG_CMS_SIGNER_INFO
{
  /* 0x0000 */ unsigned long dwVersion;
  /* 0x0008 */ struct _CERT_ID SignerId;
  /* 0x0030 */ struct _CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
  /* 0x0048 */ struct _CRYPT_ALGORITHM_IDENTIFIER HashEncryptionAlgorithm;
  /* 0x0060 */ struct _CRYPTOAPI_BLOB EncryptedHash;
  /* 0x0070 */ struct _CRYPT_ATTRIBUTES AuthAttrs;
  /* 0x0080 */ struct _CRYPT_ATTRIBUTES UnauthAttrs;
} CMSG_CMS_SIGNER_INFO, *PCMSG_CMS_SIGNER_INFO; /* size: 0x0090 */

