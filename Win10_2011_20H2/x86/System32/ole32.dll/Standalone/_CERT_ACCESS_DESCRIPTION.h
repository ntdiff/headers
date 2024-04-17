typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0008 */

typedef struct _CERT_ALT_NAME_ENTRY
{
  /* 0x0000 */ unsigned long dwAltNameChoice;
  union
  {
    /* 0x0004 */ struct _CERT_OTHER_NAME* pOtherName;
    /* 0x0004 */ wchar_t* pwszRfc822Name;
    /* 0x0004 */ wchar_t* pwszDNSName;
    /* 0x0004 */ struct _CRYPTOAPI_BLOB DirectoryName;
    /* 0x0004 */ wchar_t* pwszURL;
    /* 0x0004 */ struct _CRYPTOAPI_BLOB IPAddress;
    struct
    {
      /* 0x0004 */ char* pszRegisteredID;
      /* 0x0008 */ long __PADDING__[1];
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} CERT_ALT_NAME_ENTRY, *PCERT_ALT_NAME_ENTRY; /* size: 0x000c */

typedef struct _CERT_ACCESS_DESCRIPTION
{
  /* 0x0000 */ char* pszAccessMethod;
  /* 0x0004 */ struct _CERT_ALT_NAME_ENTRY AccessLocation;
} CERT_ACCESS_DESCRIPTION, *PCERT_ACCESS_DESCRIPTION; /* size: 0x0010 */

