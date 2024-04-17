typedef struct _CERT_LOGOTYPE_DATA
{
  /* 0x0000 */ unsigned long cLogotypeImage;
  /* 0x0008 */ struct _CERT_LOGOTYPE_IMAGE* rgLogotypeImage;
  /* 0x0010 */ unsigned long cLogotypeAudio;
  /* 0x0018 */ struct _CERT_LOGOTYPE_AUDIO* rgLogotypeAudio;
} CERT_LOGOTYPE_DATA, *PCERT_LOGOTYPE_DATA; /* size: 0x0020 */

