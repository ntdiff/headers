typedef struct _CERT_TRUST_STATUS
{
  /* 0x0000 */ unsigned long dwErrorStatus;
  /* 0x0004 */ unsigned long dwInfoStatus;
} CERT_TRUST_STATUS, *PCERT_TRUST_STATUS; /* size: 0x0008 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _CERT_CHAIN_CONTEXT
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ struct _CERT_TRUST_STATUS TrustStatus;
  /* 0x000c */ unsigned long cChain;
  /* 0x0010 */ struct _CERT_SIMPLE_CHAIN** rgpChain;
  /* 0x0018 */ unsigned long cLowerQualityChainContext;
  /* 0x0020 */ const struct _CERT_CHAIN_CONTEXT** rgpLowerQualityChainContext;
  /* 0x0028 */ int fHasRevocationFreshnessTime;
  /* 0x002c */ unsigned long dwRevocationFreshnessTime;
  /* 0x0030 */ unsigned long dwCreateFlags;
  /* 0x0034 */ struct _GUID ChainId;
  /* 0x0044 */ long __PADDING__[1];
} CERT_CHAIN_CONTEXT, *PCERT_CHAIN_CONTEXT; /* size: 0x0048 */

