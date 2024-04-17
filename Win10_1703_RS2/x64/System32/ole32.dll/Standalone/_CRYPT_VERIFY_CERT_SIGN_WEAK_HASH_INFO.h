typedef struct _CRYPT_VERIFY_CERT_SIGN_WEAK_HASH_INFO
{
  /* 0x0000 */ unsigned long cCNGHashAlgid;
  /* 0x0008 */ const wchar_t** rgpwszCNGHashAlgid;
  /* 0x0010 */ unsigned long dwWeakIndex;
  /* 0x0014 */ long __PADDING__[1];
} CRYPT_VERIFY_CERT_SIGN_WEAK_HASH_INFO, *PCRYPT_VERIFY_CERT_SIGN_WEAK_HASH_INFO; /* size: 0x0018 */

