typedef struct _CERT_TRUST_STATUS
{
  /* 0x0000 */ unsigned long dwErrorStatus;
  /* 0x0004 */ unsigned long dwInfoStatus;
} CERT_TRUST_STATUS, *PCERT_TRUST_STATUS; /* size: 0x0008 */

typedef struct _CERT_SIMPLE_CHAIN
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ struct _CERT_TRUST_STATUS TrustStatus;
  /* 0x000c */ unsigned long cElement;
  /* 0x0010 */ struct _CERT_CHAIN_ELEMENT** rgpElement;
  /* 0x0018 */ struct _CERT_TRUST_LIST_INFO* pTrustListInfo;
  /* 0x0020 */ int fHasRevocationFreshnessTime;
  /* 0x0024 */ unsigned long dwRevocationFreshnessTime;
} CERT_SIMPLE_CHAIN, *PCERT_SIMPLE_CHAIN; /* size: 0x0028 */

