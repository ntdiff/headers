typedef struct _AUTHENTICODE_EXTRA_CERT_CHAIN_POLICY_PARA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long dwRegPolicySettings;
  /* 0x0008 */ struct _CMSG_SIGNER_INFO* pSignerInfo;
} AUTHENTICODE_EXTRA_CERT_CHAIN_POLICY_PARA, *PAUTHENTICODE_EXTRA_CERT_CHAIN_POLICY_PARA; /* size: 0x0010 */

