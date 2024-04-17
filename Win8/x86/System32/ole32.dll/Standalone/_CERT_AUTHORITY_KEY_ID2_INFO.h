typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0008 */

typedef struct _CERT_ALT_NAME_INFO
{
  /* 0x0000 */ unsigned long cAltEntry;
  /* 0x0004 */ struct _CERT_ALT_NAME_ENTRY* rgAltEntry;
} CERT_ALT_NAME_INFO, *PCERT_ALT_NAME_INFO; /* size: 0x0008 */

typedef struct _CERT_AUTHORITY_KEY_ID2_INFO
{
  /* 0x0000 */ struct _CRYPTOAPI_BLOB KeyId;
  /* 0x0008 */ struct _CERT_ALT_NAME_INFO AuthorityCertIssuer;
  /* 0x0010 */ struct _CRYPTOAPI_BLOB AuthorityCertSerialNumber;
} CERT_AUTHORITY_KEY_ID2_INFO, *PCERT_AUTHORITY_KEY_ID2_INFO; /* size: 0x0018 */

