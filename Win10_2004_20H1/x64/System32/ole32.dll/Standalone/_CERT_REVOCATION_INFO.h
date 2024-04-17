typedef struct _CERT_REVOCATION_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long dwRevocationResult;
  /* 0x0008 */ const char* pszRevocationOid;
  /* 0x0010 */ void* pvOidSpecificInfo;
  /* 0x0018 */ int fHasFreshnessTime;
  /* 0x001c */ unsigned long dwFreshnessTime;
  /* 0x0020 */ struct _CERT_REVOCATION_CRL_INFO* pCrlInfo;
} CERT_REVOCATION_INFO, *PCERT_REVOCATION_INFO; /* size: 0x0028 */

