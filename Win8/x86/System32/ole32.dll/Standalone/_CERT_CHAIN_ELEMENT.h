typedef struct _CERT_TRUST_STATUS
{
  /* 0x0000 */ unsigned long dwErrorStatus;
  /* 0x0004 */ unsigned long dwInfoStatus;
} CERT_TRUST_STATUS, *PCERT_TRUST_STATUS; /* size: 0x0008 */

typedef struct _CERT_CHAIN_ELEMENT
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ const struct _CERT_CONTEXT* pCertContext;
  /* 0x0008 */ struct _CERT_TRUST_STATUS TrustStatus;
  /* 0x0010 */ struct _CERT_REVOCATION_INFO* pRevocationInfo;
  /* 0x0014 */ struct _CTL_USAGE* pIssuanceUsage;
  /* 0x0018 */ struct _CTL_USAGE* pApplicationUsage;
  /* 0x001c */ const wchar_t* pwszExtendedErrorInfo;
} CERT_CHAIN_ELEMENT, *PCERT_CHAIN_ELEMENT; /* size: 0x0020 */

