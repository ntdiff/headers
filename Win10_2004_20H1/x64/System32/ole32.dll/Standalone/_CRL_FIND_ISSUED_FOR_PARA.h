typedef struct _CRL_FIND_ISSUED_FOR_PARA
{
  /* 0x0000 */ const struct _CERT_CONTEXT* pSubjectCert;
  /* 0x0008 */ const struct _CERT_CONTEXT* pIssuerCert;
} CRL_FIND_ISSUED_FOR_PARA, *PCRL_FIND_ISSUED_FOR_PARA; /* size: 0x0010 */

