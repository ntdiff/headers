typedef struct _BCRYPT_ALGORITHM_IDENTIFIER
{
  /* 0x0000 */ wchar_t* pszName;
  /* 0x0008 */ unsigned long dwClass;
  /* 0x000c */ unsigned long dwFlags;
} BCRYPT_ALGORITHM_IDENTIFIER, *PBCRYPT_ALGORITHM_IDENTIFIER; /* size: 0x0010 */

