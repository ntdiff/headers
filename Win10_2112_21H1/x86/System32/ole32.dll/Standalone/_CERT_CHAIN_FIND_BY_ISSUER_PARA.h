typedef struct _CERT_CHAIN_FIND_BY_ISSUER_PARA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ const char* pszUsageIdentifier;
  /* 0x0008 */ unsigned long dwKeySpec;
  /* 0x000c */ unsigned long dwAcquirePrivateKeyFlags;
  /* 0x0010 */ unsigned long cIssuer;
  /* 0x0014 */ struct _CRYPTOAPI_BLOB* rgIssuer;
  /* 0x0018 */ void* pfnFindCallback /* function */;
  /* 0x001c */ void* pvFindArg;
} CERT_CHAIN_FIND_BY_ISSUER_PARA, *PCERT_CHAIN_FIND_BY_ISSUER_PARA; /* size: 0x0020 */

