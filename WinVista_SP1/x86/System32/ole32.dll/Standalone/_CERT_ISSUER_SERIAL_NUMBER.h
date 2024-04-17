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

