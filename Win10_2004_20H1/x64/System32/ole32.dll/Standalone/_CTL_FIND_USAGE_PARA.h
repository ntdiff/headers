typedef struct _CTL_USAGE
{
  /* 0x0000 */ unsigned long cUsageIdentifier;
  /* 0x0008 */ char** rgpszUsageIdentifier;
} CTL_USAGE, *PCTL_USAGE; /* size: 0x0010 */

typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0010 */

typedef struct _CTL_FIND_USAGE_PARA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ struct _CTL_USAGE SubjectUsage;
  /* 0x0018 */ struct _CRYPTOAPI_BLOB ListIdentifier;
  /* 0x0028 */ struct _CERT_INFO* pSigner;
} CTL_FIND_USAGE_PARA, *PCTL_FIND_USAGE_PARA; /* size: 0x0030 */

