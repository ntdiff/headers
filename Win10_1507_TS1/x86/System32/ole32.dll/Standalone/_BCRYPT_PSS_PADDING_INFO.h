typedef struct _BCRYPT_PSS_PADDING_INFO
{
  /* 0x0000 */ const wchar_t* pszAlgId;
  /* 0x0004 */ unsigned long cbSalt;
} BCRYPT_PSS_PADDING_INFO, *PBCRYPT_PSS_PADDING_INFO; /* size: 0x0008 */

