typedef struct _BCRYPT_OAEP_PADDING_INFO
{
  /* 0x0000 */ const wchar_t* pszAlgId;
  /* 0x0008 */ unsigned char* pbLabel;
  /* 0x0010 */ unsigned long cbLabel;
  /* 0x0014 */ long __PADDING__[1];
} BCRYPT_OAEP_PADDING_INFO, *PBCRYPT_OAEP_PADDING_INFO; /* size: 0x0018 */

