typedef struct _ACTIVATION_CONTEXT_DETAILED_INFORMATION
{
  /* 0x0000 */ unsigned long dwFlags;
  /* 0x0004 */ unsigned long ulFormatVersion;
  /* 0x0008 */ unsigned long ulAssemblyCount;
  /* 0x000c */ unsigned long ulRootManifestPathType;
  /* 0x0010 */ unsigned long ulRootManifestPathChars;
  /* 0x0014 */ unsigned long ulRootConfigurationPathType;
  /* 0x0018 */ unsigned long ulRootConfigurationPathChars;
  /* 0x001c */ unsigned long ulAppDirPathType;
  /* 0x0020 */ unsigned long ulAppDirPathChars;
  /* 0x0028 */ const wchar_t* lpRootManifestPath;
  /* 0x0030 */ const wchar_t* lpRootConfigurationPath;
  /* 0x0038 */ const wchar_t* lpAppDirPath;
} ACTIVATION_CONTEXT_DETAILED_INFORMATION, *PACTIVATION_CONTEXT_DETAILED_INFORMATION; /* size: 0x0040 */

