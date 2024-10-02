typedef struct _NCRYPT_VBS_IDENTITY_ATTESTATION_PADDING
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long ulPaddingScheme;
  /* 0x0008 */ unsigned long cbHashAlg;
  /* 0x000c */ unsigned long ulSalt;
} NCRYPT_VBS_IDENTITY_ATTESTATION_PADDING, *PNCRYPT_VBS_IDENTITY_ATTESTATION_PADDING; /* size: 0x0010 */

