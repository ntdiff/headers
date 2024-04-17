typedef struct _CERT_POLICY_QUALIFIER_NOTICE_REFERENCE
{
  /* 0x0000 */ char* pszOrganization;
  /* 0x0004 */ unsigned long cNoticeNumbers;
  /* 0x0008 */ int* rgNoticeNumbers;
} CERT_POLICY_QUALIFIER_NOTICE_REFERENCE, *PCERT_POLICY_QUALIFIER_NOTICE_REFERENCE; /* size: 0x000c */

