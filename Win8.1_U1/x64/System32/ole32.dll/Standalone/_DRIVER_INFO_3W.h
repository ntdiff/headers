typedef struct _DRIVER_INFO_3W
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
} DRIVER_INFO_3W, *PDRIVER_INFO_3W; /* size: 0x0050 */

