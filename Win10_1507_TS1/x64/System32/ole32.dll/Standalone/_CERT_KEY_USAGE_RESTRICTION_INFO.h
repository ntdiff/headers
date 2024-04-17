typedef struct _CRYPT_BIT_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
  /* 0x0010 */ unsigned long cUnusedBits;
  /* 0x0014 */ long __PADDING__[1];
} CRYPT_BIT_BLOB, *PCRYPT_BIT_BLOB; /* size: 0x0018 */

typedef struct _CERT_KEY_USAGE_RESTRICTION_INFO
{
  /* 0x0000 */ unsigned long cCertPolicyId;
  /* 0x0008 */ struct _CERT_POLICY_ID* rgCertPolicyId;
  /* 0x0010 */ struct _CRYPT_BIT_BLOB RestrictedKeyUsage;
} CERT_KEY_USAGE_RESTRICTION_INFO, *PCERT_KEY_USAGE_RESTRICTION_INFO; /* size: 0x0028 */

