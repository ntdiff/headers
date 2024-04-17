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
  /* 0x0004 */ wchar_t* pszPublisher;
  /* 0x0008 */ unsigned long dwVersionHi;
  /* 0x000c */ unsigned long dwVersionLo;
  /* 0x0010 */ unsigned long dwRevision;
  /* 0x0014 */ struct _GUID GpoId;
  /* 0x0024 */ wchar_t* pszPolicyName;
  /* 0x0028 */ struct _GUID ProductId;
  /* 0x0038 */ unsigned short Language;
  /* 0x003c */ wchar_t* pszOwner;
  /* 0x0040 */ wchar_t* pszCompany;
  /* 0x0044 */ wchar_t* pszComments;
  /* 0x0048 */ wchar_t* pszContact;
  /* 0x004c */ wchar_t* pszSupportUrl;
  /* 0x0050 */ unsigned long dwPathType;
  /* 0x0054 */ int bInstalled;
} MANAGEDAPPLICATION, *PMANAGEDAPPLICATION; /* size: 0x0058 */

