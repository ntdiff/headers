typedef struct _CRYPT_PASSWORD_CREDENTIALSW
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ wchar_t* pszUsername;
  /* 0x0008 */ wchar_t* pszPassword;
} CRYPT_PASSWORD_CREDENTIALSW, *PCRYPT_PASSWORD_CREDENTIALSW; /* size: 0x000c */

