typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0008 */

typedef struct _CERT_ISSUER_SERIAL_NUMBER
{
  /* 0x0000 */ struct _CRYPTOAPI_BLOB Issuer;
  /* 0x0008 */ struct _CRYPTOAPI_BLOB SerialNumber;
} CERT_ISSUER_SERIAL_NUMBER, *PCERT_ISSUER_SERIAL_NUMBER; /* size: 0x0010 */

typedef struct _CERT_ID
{
  /* 0x0000 */ unsigned long dwIdChoice;
  union
  {
    /* 0x0004 */ struct _CERT_ISSUER_SERIAL_NUMBER IssuerSerialNumber;
    /* 0x0004 */ struct _CRYPTOAPI_BLOB KeyId;
    struct
    {
      /* 0x0004 */ struct _CRYPTOAPI_BLOB HashId;
      /* 0x000c */ long __PADDING__[2];
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
} CERT_ID, *PCERT_ID; /* size: 0x0014 */

typedef struct _CRYPT_ALGORITHM_IDENTIFIER
{
  /* 0x0000 */ char* pszObjId;
  /* 0x0004 */ struct _CRYPTOAPI_BLOB Parameters;
} CRYPT_ALGORITHM_IDENTIFIER, *PCRYPT_ALGORITHM_IDENTIFIER; /* size: 0x000c */

typedef struct _CRYPT_BIT_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
  /* 0x0008 */ unsigned long cUnusedBits;
} CRYPT_BIT_BLOB, *PCRYPT_BIT_BLOB; /* size: 0x000c */

typedef struct _CERT_PUBLIC_KEY_INFO
{
  /* 0x0000 */ struct _CRYPT_ALGORITHM_IDENTIFIER Algorithm;
  /* 0x000c */ struct _CRYPT_BIT_BLOB PublicKey;
} CERT_PUBLIC_KEY_INFO, *PCERT_PUBLIC_KEY_INFO; /* size: 0x0018 */

typedef struct _CMSG_KEY_AGREE_RECIPIENT_INFO
{
  /* 0x0000 */ unsigned long dwVersion;
  /* 0x0004 */ unsigned long dwOriginatorChoice;
  union
  {
    /* 0x0008 */ struct _CERT_ID OriginatorCertId;
    /* 0x0008 */ struct _CERT_PUBLIC_KEY_INFO OriginatorPublicKeyInfo;
  }; /* size: 0x0018 */
  /* 0x0020 */ struct _CRYPTOAPI_BLOB UserKeyingMaterial;
  /* 0x0028 */ struct _CRYPT_ALGORITHM_IDENTIFIER KeyEncryptionAlgorithm;
  /* 0x0034 */ unsigned long cRecipientEncryptedKeys;
  /* 0x0038 */ struct _CMSG_RECIPIENT_ENCRYPTED_KEY_INFO** rgpRecipientEncryptedKeys;
} CMSG_KEY_AGREE_RECIPIENT_INFO, *PCMSG_KEY_AGREE_RECIPIENT_INFO; /* size: 0x003c */

