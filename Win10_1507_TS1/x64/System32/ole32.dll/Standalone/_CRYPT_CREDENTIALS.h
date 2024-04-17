typedef struct _CRYPT_CREDENTIALS
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ const char* pszCredentialsOid;
  /* 0x0010 */ void* pvCredentials;
} CRYPT_CREDENTIALS, *PCRYPT_CREDENTIALS; /* size: 0x0018 */

