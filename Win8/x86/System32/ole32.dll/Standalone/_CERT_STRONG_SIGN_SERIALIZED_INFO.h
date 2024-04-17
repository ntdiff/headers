typedef struct _CERT_STRONG_SIGN_SERIALIZED_INFO
{
  /* 0x0000 */ unsigned long dwFlags;
  /* 0x0004 */ wchar_t* pwszCNGSignHashAlgids;
  /* 0x0008 */ wchar_t* pwszCNGPubKeyMinBitLengths;
} CERT_STRONG_SIGN_SERIALIZED_INFO, *PCERT_STRONG_SIGN_SERIALIZED_INFO; /* size: 0x000c */

