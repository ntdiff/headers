typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _MANAGEDAPPLICATION
{
  /* 0x0000 */ wchar_t* pszPackageName;
  /* 0x0008 */ wchar_t* pszPublisher;
  /* 0x0010 */ unsigned long dwVersionHi;
  /* 0x0014 */ unsigned long dwVersionLo;
  /* 0x0018 */ unsigned long dwRevision;
  /* 0x001c */ struct _GUID GpoId;
  /* 0x0030 */ wchar_t* pszPolicyName;
  /* 0x0038 */ struct _GUID ProductId;
  /* 0x0048 */ unsigned short Language;
  /* 0x0050 */ wchar_t* pszOwner;
  /* 0x0058 */ wchar_t* pszCompany;
  /* 0x0060 */ wchar_t* pszComments;
  /* 0x0068 */ wchar_t* pszContact;
  /* 0x0070 */ wchar_t* pszSupportUrl;
  /* 0x0078 */ unsigned long dwPathType;
  /* 0x007c */ int bInstalled;
} MANAGEDAPPLICATION, *PMANAGEDAPPLICATION; /* size: 0x0080 */

