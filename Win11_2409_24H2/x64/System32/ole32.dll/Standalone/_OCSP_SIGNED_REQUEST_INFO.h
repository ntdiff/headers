typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0010 */

typedef struct _OCSP_SIGNED_REQUEST_INFO
{
  /* 0x0000 */ struct _CRYPTOAPI_BLOB ToBeSigned;
  /* 0x0010 */ struct _OCSP_SIGNATURE_INFO* pOptionalSignatureInfo;
} OCSP_SIGNED_REQUEST_INFO, *POCSP_SIGNED_REQUEST_INFO; /* size: 0x0018 */

