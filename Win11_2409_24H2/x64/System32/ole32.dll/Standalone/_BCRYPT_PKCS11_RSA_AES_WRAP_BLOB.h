typedef struct _BCRYPT_PKCS11_RSA_AES_WRAP_BLOB
{
  /* 0x0000 */ unsigned long dwMagic;
  /* 0x0004 */ unsigned long cbKey;
  /* 0x0008 */ unsigned long cbPaddingAlgId;
  /* 0x000c */ unsigned long cbPaddingLabel;
} BCRYPT_PKCS11_RSA_AES_WRAP_BLOB, *PBCRYPT_PKCS11_RSA_AES_WRAP_BLOB; /* size: 0x0010 */

