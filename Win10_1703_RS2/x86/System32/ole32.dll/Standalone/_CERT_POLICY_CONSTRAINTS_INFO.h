typedef struct _CERT_POLICY_CONSTRAINTS_INFO
{
  /* 0x0000 */ int fRequireExplicitPolicy;
  /* 0x0004 */ unsigned long dwRequireExplicitPolicySkipCerts;
  /* 0x0008 */ int fInhibitPolicyMapping;
  /* 0x000c */ unsigned long dwInhibitPolicyMappingSkipCerts;
} CERT_POLICY_CONSTRAINTS_INFO, *PCERT_POLICY_CONSTRAINTS_INFO; /* size: 0x0010 */

