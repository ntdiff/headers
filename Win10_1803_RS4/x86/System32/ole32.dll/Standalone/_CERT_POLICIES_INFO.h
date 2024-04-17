typedef struct _CERT_POLICIES_INFO
{
  /* 0x0000 */ unsigned long cPolicyInfo;
  /* 0x0004 */ struct _CERT_POLICY_INFO* rgPolicyInfo;
} CERT_POLICIES_INFO, *PCERT_POLICIES_INFO; /* size: 0x0008 */

