typedef struct _CERT_CHAIN_POLICY_STATUS
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long dwError;
  /* 0x0008 */ long lChainIndex;
  /* 0x000c */ long lElementIndex;
  /* 0x0010 */ void* pvExtraPolicyStatus;
} CERT_CHAIN_POLICY_STATUS, *PCERT_CHAIN_POLICY_STATUS; /* size: 0x0018 */

