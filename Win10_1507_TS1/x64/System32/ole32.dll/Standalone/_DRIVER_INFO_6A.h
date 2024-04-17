typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _DRIVER_INFO_6A
{
  /* 0x0000 */ unsigned long cVersion;
  /* 0x0008 */ char* pName;
  /* 0x0010 */ char* pEnvironment;
  /* 0x0018 */ char* pDriverPath;
  /* 0x0020 */ char* pDataFile;
  /* 0x0028 */ char* pConfigFile;
  /* 0x0030 */ char* pHelpFile;
  /* 0x0038 */ char* pDependentFiles;
  /* 0x0040 */ char* pMonitorName;
  /* 0x0048 */ char* pDefaultDataType;
  /* 0x0050 */ char* pszzPreviousNames;
  /* 0x0058 */ struct _FILETIME ftDriverDate;
  /* 0x0060 */ unsigned __int64 dwlDriverVersion;
  /* 0x0068 */ char* pszMfgName;
  /* 0x0070 */ char* pszOEMUrl;
  /* 0x0078 */ char* pszHardwareID;
  /* 0x0080 */ char* pszProvider;
} DRIVER_INFO_6A, *PDRIVER_INFO_6A; /* size: 0x0088 */

