typedef struct _NCRYPT_VBS_IDENTITY_KEY_ATTESTATION_CLAIM_DETAILS
{
  /* 0x0000 */ unsigned long ulKeyFlags;
  /* 0x0008 */ const wchar_t* pszSignatureHashAlg;
  /* 0x0010 */ unsigned long ulPaddingScheme;
  /* 0x0018 */ const wchar_t* pszPaddingHashAlg;
  /* 0x0020 */ unsigned long ulPaddingSalt;
  /* 0x0024 */ long __PADDING__[1];
} NCRYPT_VBS_IDENTITY_KEY_ATTESTATION_CLAIM_DETAILS, *PNCRYPT_VBS_IDENTITY_KEY_ATTESTATION_CLAIM_DETAILS; /* size: 0x0028 */

