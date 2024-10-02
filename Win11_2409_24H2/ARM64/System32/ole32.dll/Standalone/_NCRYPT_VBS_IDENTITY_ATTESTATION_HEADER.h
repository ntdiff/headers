typedef struct _NCRYPT_VBS_IDENTITY_ATTESTATION_HEADER
{
  /* 0x0000 */ unsigned long Magic;
  /* 0x0004 */ unsigned long Version;
  /* 0x0008 */ unsigned long cbAttributes;
  /* 0x000c */ unsigned long cbNonce;
  /* 0x0010 */ unsigned long cbHashAlg;
  /* 0x0014 */ unsigned long cbPadding;
  /* 0x0018 */ unsigned long cbSignatureAlg;
  /* 0x001c */ unsigned long cbSignature;
} NCRYPT_VBS_IDENTITY_ATTESTATION_HEADER, *PNCRYPT_VBS_IDENTITY_ATTESTATION_HEADER; /* size: 0x0020 */

