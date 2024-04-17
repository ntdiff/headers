typedef struct _SHCREATEPROCESSINFOW
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long fMask;
  /* 0x0008 */ struct HWND__* hwnd;
  /* 0x000c */ const wchar_t* pszFile;
  /* 0x0010 */ const wchar_t* pszParameters;
  /* 0x0014 */ const wchar_t* pszCurrentDirectory;
  /* 0x0018 */ void* hUserToken;
  /* 0x001c */ struct _SECURITY_ATTRIBUTES* lpProcessAttributes;
  /* 0x0020 */ struct _SECURITY_ATTRIBUTES* lpThreadAttributes;
  /* 0x0024 */ int bInheritHandles;
  /* 0x0028 */ unsigned long dwCreationFlags;
  /* 0x002c */ struct _STARTUPINFOW* lpStartupInfo;
  /* 0x0030 */ struct _PROCESS_INFORMATION* lpProcessInformation;
} SHCREATEPROCESSINFOW, *PSHCREATEPROCESSINFOW; /* size: 0x0034 */

