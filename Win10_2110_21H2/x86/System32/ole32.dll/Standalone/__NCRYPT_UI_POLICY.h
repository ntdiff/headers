typedef struct __NCRYPT_UI_POLICY
{
  /* 0x0000 */ unsigned long dwVersion;
  /* 0x0004 */ unsigned long dwFlags;
  /* 0x0008 */ const wchar_t* pszCreationTitle;
  /* 0x000c */ const wchar_t* pszFriendlyName;
  /* 0x0010 */ const wchar_t* pszDescription;
} _NCRYPT_UI_POLICY, *P_NCRYPT_UI_POLICY; /* size: 0x0014 */

