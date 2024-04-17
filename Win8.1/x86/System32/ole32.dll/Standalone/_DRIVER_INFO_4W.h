typedef struct _DRIVER_INFO_4W
{
  /* 0x0000 */ unsigned long cVersion;
  /* 0x0004 */ wchar_t* pName;
  /* 0x0008 */ wchar_t* pEnvironment;
  /* 0x000c */ wchar_t* pDriverPath;
  /* 0x0010 */ wchar_t* pDataFile;
  /* 0x0014 */ wchar_t* pConfigFile;
  /* 0x0018 */ wchar_t* pHelpFile;
  /* 0x001c */ wchar_t* pDependentFiles;
  /* 0x0020 */ wchar_t* pMonitorName;
  /* 0x0024 */ wchar_t* pDefaultDataType;
  /* 0x0028 */ wchar_t* pszzPreviousNames;
} DRIVER_INFO_4W, *PDRIVER_INFO_4W; /* size: 0x002c */

