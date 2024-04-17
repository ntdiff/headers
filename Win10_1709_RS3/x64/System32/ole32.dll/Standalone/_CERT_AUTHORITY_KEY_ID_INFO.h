typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0010 */

typedef struct _CERT_AUTHORITY_KEY_ID_INFO
{
  /* 0x0000 */ struct _CRYPTOAPI_BLOB KeyId;
  /* 0x0010 */ struct _CRYPTOAPI_BLOB CertIssuer;
  /* 0x0020 */ struct _CRYPTOAPI_BLOB CertSerialNumber;
} CERT_AUTHORITY_KEY_ID_INFO, *PCERT_AUTHORITY_KEY_ID_INFO; /* size: 0x0030 */

