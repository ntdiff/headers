typedef struct _CERT_POLICY_INFO
{
  /* 0x0000 */ char* pszPolicyIdentifier;
  /* 0x0004 */ unsigned long cPolicyQualifier;
  /* 0x0008 */ struct _CERT_POLICY_QUALIFIER_INFO* rgPolicyQualifier;
} CERT_POLICY_INFO, *PCERT_POLICY_INFO; /* size: 0x000c */

