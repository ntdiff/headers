typedef struct _CERT_CHAIN_FIND_BY_ISSUER_PARA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ const char* pszUsageIdentifier;
  /* 0x0010 */ unsigned long dwKeySpec;
  /* 0x0014 */ unsigned long dwAcquirePrivateKeyFlags;
  /* 0x0018 */ unsigned long cIssuer;
  /* 0x0020 */ struct _CRYPTOAPI_BLOB* rgIssuer;
  /* 0x0028 */ void* pfnFindCallback /* function */;
  /* 0x0030 */ void* pvFindArg;
} CERT_CHAIN_FIND_BY_ISSUER_PARA, *PCERT_CHAIN_FIND_BY_ISSUER_PARA; /* size: 0x0038 */

