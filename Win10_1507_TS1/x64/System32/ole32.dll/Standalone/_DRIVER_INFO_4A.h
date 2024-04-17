typedef struct _DRIVER_INFO_4A
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
} DRIVER_INFO_4A, *PDRIVER_INFO_4A; /* size: 0x0058 */

