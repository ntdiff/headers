typedef struct _CRYPT_PROVIDER_SIGSTATE
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0008 */ void** rhSecondarySigs;
  /* 0x0010 */ void* hPrimarySig;
  /* 0x0018 */ int fFirstAttemptMade;
  /* 0x001c */ int fNoMoreSigs;
  /* 0x0020 */ unsigned long cSecondarySigs;
  /* 0x0024 */ unsigned long dwCurrentIndex;
  /* 0x0028 */ int fSupportMultiSig;
  /* 0x002c */ unsigned long dwCryptoPolicySupport;
} CRYPT_PROVIDER_SIGSTATE, *PCRYPT_PROVIDER_SIGSTATE; /* size: 0x0030 */

