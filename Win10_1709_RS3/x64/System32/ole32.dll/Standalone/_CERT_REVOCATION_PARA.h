typedef struct _CERT_REVOCATION_PARA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ const struct _CERT_CONTEXT* pIssuerCert;
  /* 0x0010 */ unsigned long cCertStore;
  /* 0x0018 */ void** rgCertStore;
  /* 0x0020 */ void* hCrlStore;
  /* 0x0028 */ struct _FILETIME* pftTimeToUse;
} CERT_REVOCATION_PARA, *PCERT_REVOCATION_PARA; /* size: 0x0030 */

