typedef struct _CRYPT_PROVIDER_CERT
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0008 */ const struct _CERT_CONTEXT* pCert;
  /* 0x0010 */ int fCommercial;
  /* 0x0014 */ int fTrustedRoot;
  /* 0x0018 */ int fSelfSigned;
  /* 0x001c */ int fTestCert;
  /* 0x0020 */ unsigned long dwRevokedReason;
  /* 0x0024 */ unsigned long dwConfidence;
  /* 0x0028 */ unsigned long dwError;
  /* 0x0030 */ struct _CTL_CONTEXT* pTrustListContext;
  /* 0x0038 */ int fTrustListSignerCert;
  /* 0x0040 */ const struct _CTL_CONTEXT* pCtlContext;
  /* 0x0048 */ unsigned long dwCtlError;
  /* 0x004c */ int fIsCyclic;
  /* 0x0050 */ struct _CERT_CHAIN_ELEMENT* pChainElement;
} CRYPT_PROVIDER_CERT, *PCRYPT_PROVIDER_CERT; /* size: 0x0058 */

