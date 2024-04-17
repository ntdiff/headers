typedef struct _CERT_CHAIN_POLICY_PARA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long dwFlags;
  /* 0x0008 */ void* pvExtraPolicyPara;
} CERT_CHAIN_POLICY_PARA, *PCERT_CHAIN_POLICY_PARA; /* size: 0x0010 */

