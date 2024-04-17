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

typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _CMSG_RECIPIENT_ENCRYPTED_KEY_INFO
{
  /* 0x0000 */ struct _CERT_ID RecipientId;
  /* 0x0014 */ struct _CRYPTOAPI_BLOB EncryptedKey;
  /* 0x001c */ struct _FILETIME Date;
  /* 0x0024 */ struct _CRYPT_ATTRIBUTE_TYPE_VALUE* pOtherAttr;
} CMSG_RECIPIENT_ENCRYPTED_KEY_INFO, *PCMSG_RECIPIENT_ENCRYPTED_KEY_INFO; /* size: 0x0028 */

