typedef struct _CRYPT_SMIME_CAPABILITIES
{
  /* 0x0000 */ unsigned long cCapability;
  /* 0x0008 */ struct _CRYPT_SMIME_CAPABILITY* rgCapability;
} CRYPT_SMIME_CAPABILITIES, *PCRYPT_SMIME_CAPABILITIES; /* size: 0x0010 */

