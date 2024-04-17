typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0008 */

typedef struct _CERT_ECC_SIGNATURE
{
  /* 0x0000 */ struct _CRYPTOAPI_BLOB r;
  /* 0x0008 */ struct _CRYPTOAPI_BLOB s;
} CERT_ECC_SIGNATURE, *PCERT_ECC_SIGNATURE; /* size: 0x0010 */

