typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _DRIVER_INFO_8W
{
  /* 0x0000 */ unsigned long cVersion;
  /* 0x0008 */ wchar_t* pName;
  /* 0x0010 */ wchar_t* pEnvironment;
  /* 0x0018 */ wchar_t* pDriverPath;
  /* 0x0020 */ wchar_t* pDataFile;
  /* 0x0028 */ wchar_t* pConfigFile;
  /* 0x0030 */ wchar_t* pHelpFile;
  /* 0x0038 */ wchar_t* pDependentFiles;
  /* 0x0040 */ wchar_t* pMonitorName;
  /* 0x0048 */ wchar_t* pDefaultDataType;
  /* 0x0050 */ wchar_t* pszzPreviousNames;
  /* 0x0058 */ struct _FILETIME ftDriverDate;
  /* 0x0060 */ unsigned __int64 dwlDriverVersion;
  /* 0x0068 */ wchar_t* pszMfgName;
  /* 0x0070 */ wchar_t* pszOEMUrl;
  /* 0x0078 */ wchar_t* pszHardwareID;
  /* 0x0080 */ wchar_t* pszProvider;
  /* 0x0088 */ wchar_t* pszPrintProcessor;
  /* 0x0090 */ wchar_t* pszVendorSetup;
  /* 0x0098 */ wchar_t* pszzColorProfiles;
  /* 0x00a0 */ wchar_t* pszInfPath;
  /* 0x00a8 */ unsigned long dwPrinterDriverAttributes;
  /* 0x00b0 */ wchar_t* pszzCoreDriverDependencies;
  /* 0x00b8 */ struct _FILETIME ftMinInboxDriverVerDate;
  /* 0x00c0 */ unsigned __int64 dwlMinInboxDriverVerVersion;
} DRIVER_INFO_8W, *PDRIVER_INFO_8W; /* size: 0x00c8 */

