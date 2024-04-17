typedef struct _CERT_POLICY95_QUALIFIER1
{
  /* 0x0000 */ wchar_t* pszPracticesReference;
  /* 0x0008 */ char* pszNoticeIdentifier;
  /* 0x0010 */ char* pszNSINoticeIdentifier;
  /* 0x0018 */ unsigned long cCPSURLs;
  /* 0x0020 */ struct _CPS_URLS* rgCPSURLs;
} CERT_POLICY95_QUALIFIER1, *PCERT_POLICY95_QUALIFIER1; /* size: 0x0028 */

