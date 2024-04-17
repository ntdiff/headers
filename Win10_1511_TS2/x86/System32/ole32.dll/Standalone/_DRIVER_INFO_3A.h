typedef struct _DRIVER_INFO_3A
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
} DRIVER_INFO_3A, *PDRIVER_INFO_3A; /* size: 0x0028 */

