typedef struct _CRYPT_TRUST_REG_ENTRY
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0004 */ wchar_t* pwszDLLName;
  /* 0x0008 */ wchar_t* pwszFunctionName;
} CRYPT_TRUST_REG_ENTRY, *PCRYPT_TRUST_REG_ENTRY; /* size: 0x000c */

typedef struct _CRYPT_REGISTER_ACTIONID
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0004 */ struct _CRYPT_TRUST_REG_ENTRY sInitProvider;
  /* 0x0010 */ struct _CRYPT_TRUST_REG_ENTRY sObjectProvider;
  /* 0x001c */ struct _CRYPT_TRUST_REG_ENTRY sSignatureProvider;
  /* 0x0028 */ struct _CRYPT_TRUST_REG_ENTRY sCertificateProvider;
  /* 0x0034 */ struct _CRYPT_TRUST_REG_ENTRY sCertificatePolicyProvider;
  /* 0x0040 */ struct _CRYPT_TRUST_REG_ENTRY sFinalPolicyProvider;
  /* 0x004c */ struct _CRYPT_TRUST_REG_ENTRY sTestPolicyProvider;
  /* 0x0058 */ struct _CRYPT_TRUST_REG_ENTRY sCleanupProvider;
} CRYPT_REGISTER_ACTIONID, *PCRYPT_REGISTER_ACTIONID; /* size: 0x0064 */

