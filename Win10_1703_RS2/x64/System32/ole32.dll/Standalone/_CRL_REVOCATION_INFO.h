typedef struct _CRL_REVOCATION_INFO
{
  /* 0x0000 */ struct _CRL_ENTRY* pCrlEntry;
  /* 0x0008 */ const struct _CRL_CONTEXT* pCrlContext;
  /* 0x0010 */ const struct _CERT_CHAIN_CONTEXT* pCrlIssuerChain;
} CRL_REVOCATION_INFO, *PCRL_REVOCATION_INFO; /* size: 0x0018 */

