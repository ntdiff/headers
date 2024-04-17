typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0010 */

typedef struct _CMC_TAGGED_CERT_REQUEST
{
  /* 0x0000 */ unsigned long dwBodyPartID;
  /* 0x0008 */ struct _CRYPTOAPI_BLOB SignedCertRequest;
} CMC_TAGGED_CERT_REQUEST, *PCMC_TAGGED_CERT_REQUEST; /* size: 0x0018 */

