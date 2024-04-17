typedef struct _CERT_REVOCATION_CRL_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ const struct _CRL_CONTEXT* pBaseCrlContext;
  /* 0x0008 */ const struct _CRL_CONTEXT* pDeltaCrlContext;
  /* 0x000c */ struct _CRL_ENTRY* pCrlEntry;
  /* 0x0010 */ int fDeltaCrlEntry;
} CERT_REVOCATION_CRL_INFO, *PCERT_REVOCATION_CRL_INFO; /* size: 0x0014 */

