typedef struct _CERT_CRL_CONTEXT_PAIR
{
  /* 0x0000 */ const struct _CERT_CONTEXT* pCertContext;
  /* 0x0008 */ const struct _CRL_CONTEXT* pCrlContext;
} CERT_CRL_CONTEXT_PAIR, *PCERT_CRL_CONTEXT_PAIR; /* size: 0x0010 */

