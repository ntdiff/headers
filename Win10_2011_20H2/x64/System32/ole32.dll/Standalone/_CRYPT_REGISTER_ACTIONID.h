typedef struct _CRYPT_TRUST_REG_ENTRY
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0008 */ wchar_t* pwszDLLName;
  /* 0x0010 */ wchar_t* pwszFunctionName;
} CRYPT_TRUST_REG_ENTRY, *PCRYPT_TRUST_REG_ENTRY; /* size: 0x0018 */

typedef struct _CRYPT_REGISTER_ACTIONID
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0008 */ struct _CRYPT_TRUST_REG_ENTRY sInitProvider;
  /* 0x0020 */ struct _CRYPT_TRUST_REG_ENTRY sObjectProvider;
  /* 0x0038 */ struct _CRYPT_TRUST_REG_ENTRY sSignatureProvider;
  /* 0x0050 */ struct _CRYPT_TRUST_REG_ENTRY sCertificateProvider;
  /* 0x0068 */ struct _CRYPT_TRUST_REG_ENTRY sCertificatePolicyProvider;
  /* 0x0080 */ struct _CRYPT_TRUST_REG_ENTRY sFinalPolicyProvider;
  /* 0x0098 */ struct _CRYPT_TRUST_REG_ENTRY sTestPolicyProvider;
  /* 0x00b0 */ struct _CRYPT_TRUST_REG_ENTRY sCleanupProvider;
} CRYPT_REGISTER_ACTIONID, *PCRYPT_REGISTER_ACTIONID; /* size: 0x00c8 */

