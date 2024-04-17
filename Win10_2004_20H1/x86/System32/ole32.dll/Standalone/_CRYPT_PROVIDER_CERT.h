typedef struct _CRYPT_PROVIDER_CERT
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0004 */ const struct _CERT_CONTEXT* pCert;
  /* 0x0008 */ int fCommercial;
  /* 0x000c */ int fTrustedRoot;
  /* 0x0010 */ int fSelfSigned;
  /* 0x0014 */ int fTestCert;
  /* 0x0018 */ unsigned long dwRevokedReason;
  /* 0x001c */ unsigned long dwConfidence;
  /* 0x0020 */ unsigned long dwError;
  /* 0x0024 */ struct _CTL_CONTEXT* pTrustListContext;
  /* 0x0028 */ int fTrustListSignerCert;
  /* 0x002c */ const struct _CTL_CONTEXT* pCtlContext;
  /* 0x0030 */ unsigned long dwCtlError;
  /* 0x0034 */ int fIsCyclic;
  /* 0x0038 */ struct _CERT_CHAIN_ELEMENT* pChainElement;
} CRYPT_PROVIDER_CERT, *PCRYPT_PROVIDER_CERT; /* size: 0x003c */

