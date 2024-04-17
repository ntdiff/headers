typedef struct _BCRYPT_OAEP_PADDING_INFO
{
  /* 0x0000 */ const wchar_t* pszAlgId;
  /* 0x0004 */ unsigned char* pbLabel;
  /* 0x0008 */ unsigned long cbLabel;
} BCRYPT_OAEP_PADDING_INFO, *PBCRYPT_OAEP_PADDING_INFO; /* size: 0x000c */

