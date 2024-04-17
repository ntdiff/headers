typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _DRIVER_INFO_6W
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
} DRIVER_INFO_6W, *PDRIVER_INFO_6W; /* size: 0x0088 */

