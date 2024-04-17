typedef struct _CRYPT_PROVIDER_SIGSTATE
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0004 */ void** rhSecondarySigs;
  /* 0x0008 */ void* hPrimarySig;
  /* 0x000c */ int fFirstAttemptMade;
  /* 0x0010 */ int fNoMoreSigs;
  /* 0x0014 */ unsigned long cSecondarySigs;
  /* 0x0018 */ unsigned long dwCurrentIndex;
  /* 0x001c */ int fSupportMultiSig;
  /* 0x0020 */ unsigned long dwCryptoPolicySupport;
  /* 0x0024 */ unsigned long iAttemptCount;
  /* 0x0028 */ int fCheckedSealing;
  /* 0x002c */ struct _SEALING_SIGNATURE_ATTRIBUTE* pSealingSignature;
} CRYPT_PROVIDER_SIGSTATE, *PCRYPT_PROVIDER_SIGSTATE; /* size: 0x0030 */

