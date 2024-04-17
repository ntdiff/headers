typedef struct _DRIVER_INFO_2A
{
  /* 0x0000 */ unsigned long cVersion;
  /* 0x0004 */ char* pName;
  /* 0x0008 */ char* pEnvironment;
  /* 0x000c */ char* pDriverPath;
  /* 0x0010 */ char* pDataFile;
  /* 0x0014 */ char* pConfigFile;
} DRIVER_INFO_2A, *PDRIVER_INFO_2A; /* size: 0x0018 */

