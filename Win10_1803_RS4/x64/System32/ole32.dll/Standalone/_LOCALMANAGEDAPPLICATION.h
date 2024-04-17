typedef struct _LOCALMANAGEDAPPLICATION
{
  /* 0x0000 */ wchar_t* pszDeploymentName;
  /* 0x0008 */ wchar_t* pszPolicyName;
  /* 0x0010 */ wchar_t* pszProductId;
  /* 0x0018 */ unsigned long dwState;
  /* 0x001c */ long __PADDING__[1];
} LOCALMANAGEDAPPLICATION, *PLOCALMANAGEDAPPLICATION; /* size: 0x0020 */

