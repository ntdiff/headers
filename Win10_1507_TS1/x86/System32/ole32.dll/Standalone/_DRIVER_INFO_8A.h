typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _DRIVER_INFO_8A
{
  /* 0x0000 */ unsigned long cVersion;
  /* 0x0004 */ char* pName;
  /* 0x0008 */ char* pEnvironment;
  /* 0x000c */ char* pDriverPath;
  /* 0x0010 */ char* pDataFile;
  /* 0x0014 */ char* pConfigFile;
  /* 0x0018 */ char* pHelpFile;
  /* 0x001c */ char* pDependentFiles;
  /* 0x0020 */ char* pMonitorName;
  /* 0x0024 */ char* pDefaultDataType;
  /* 0x0028 */ char* pszzPreviousNames;
  /* 0x002c */ struct _FILETIME ftDriverDate;
  /* 0x0038 */ unsigned __int64 dwlDriverVersion;
  /* 0x0040 */ char* pszMfgName;
  /* 0x0044 */ char* pszOEMUrl;
  /* 0x0048 */ char* pszHardwareID;
  /* 0x004c */ char* pszProvider;
  /* 0x0050 */ char* pszPrintProcessor;
  /* 0x0054 */ char* pszVendorSetup;
  /* 0x0058 */ char* pszzColorProfiles;
  /* 0x005c */ char* pszInfPath;
  /* 0x0060 */ unsigned long dwPrinterDriverAttributes;
  /* 0x0064 */ char* pszzCoreDriverDependencies;
  /* 0x0068 */ struct _FILETIME ftMinInboxDriverVerDate;
  /* 0x0070 */ unsigned __int64 dwlMinInboxDriverVerVersion;
} DRIVER_INFO_8A, *PDRIVER_INFO_8A; /* size: 0x0078 */

