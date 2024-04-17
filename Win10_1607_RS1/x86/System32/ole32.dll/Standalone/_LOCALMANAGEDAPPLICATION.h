typedef struct _LOCALMANAGEDAPPLICATION
{
  /* 0x0000 */ wchar_t* pszDeploymentName;
  /* 0x0004 */ wchar_t* pszPolicyName;
  /* 0x0008 */ wchar_t* pszProductId;
  /* 0x000c */ unsigned long dwState;
} LOCALMANAGEDAPPLICATION, *PLOCALMANAGEDAPPLICATION; /* size: 0x0010 */

