typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0010 */

typedef struct _CERT_PAIR
{
  /* 0x0000 */ struct _CRYPTOAPI_BLOB Forward;
  /* 0x0010 */ struct _CRYPTOAPI_BLOB Reverse;
} CERT_PAIR, *PCERT_PAIR; /* size: 0x0020 */

