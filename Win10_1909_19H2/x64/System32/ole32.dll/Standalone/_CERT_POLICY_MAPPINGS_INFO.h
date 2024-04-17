typedef struct _CERT_POLICY_MAPPINGS_INFO
{
  /* 0x0000 */ unsigned long cPolicyMapping;
  /* 0x0008 */ struct _CERT_POLICY_MAPPING* rgPolicyMapping;
} CERT_POLICY_MAPPINGS_INFO, *PCERT_POLICY_MAPPINGS_INFO; /* size: 0x0010 */

