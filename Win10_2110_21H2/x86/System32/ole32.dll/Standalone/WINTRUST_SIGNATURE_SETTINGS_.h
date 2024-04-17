struct WINTRUST_SIGNATURE_SETTINGS_
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0004 */ unsigned long dwIndex;
  /* 0x0008 */ unsigned long dwFlags;
  /* 0x000c */ unsigned long cSecondarySigs;
  /* 0x0010 */ unsigned long dwVerifiedSigIndex;
  /* 0x0014 */ struct _CERT_STRONG_SIGN_PARA* pCryptoPolicy;
}; /* size: 0x0018 */

