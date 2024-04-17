typedef struct _NCRYPT_VSM_KEY_ATTESTATION_CLAIM_RESTRICTIONS
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0008 */ unsigned __int64 TrustletId;
  /* 0x0010 */ unsigned long MinSvn;
  /* 0x0014 */ unsigned long FlagsMask;
  /* 0x0018 */ unsigned long FlagsExpected;
  struct /* bitfield */
  {
    /* 0x001c */ unsigned long AllowDebugging : 1; /* bit position: 0 */
    /* 0x001c */ unsigned long Reserved : 31; /* bit position: 1 */
  }; /* bitfield */
} NCRYPT_VSM_KEY_ATTESTATION_CLAIM_RESTRICTIONS, *PNCRYPT_VSM_KEY_ATTESTATION_CLAIM_RESTRICTIONS; /* size: 0x0020 */

