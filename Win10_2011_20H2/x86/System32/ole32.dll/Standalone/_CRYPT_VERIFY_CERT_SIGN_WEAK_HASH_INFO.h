typedef struct _CRYPT_VERIFY_CERT_SIGN_WEAK_HASH_INFO
{
  /* 0x0000 */ unsigned long cCNGHashAlgid;
  /* 0x0004 */ const wchar_t** rgpwszCNGHashAlgid;
  /* 0x0008 */ unsigned long dwWeakIndex;
} CRYPT_VERIFY_CERT_SIGN_WEAK_HASH_INFO, *PCRYPT_VERIFY_CERT_SIGN_WEAK_HASH_INFO; /* size: 0x000c */

