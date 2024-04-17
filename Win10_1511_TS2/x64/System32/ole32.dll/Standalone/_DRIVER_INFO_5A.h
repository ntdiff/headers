typedef struct _DRIVER_INFO_5A
{
  /* 0x0000 */ unsigned long cVersion;
  /* 0x0008 */ char* pName;
  /* 0x0010 */ char* pEnvironment;
  /* 0x0018 */ char* pDriverPath;
  /* 0x0020 */ char* pDataFile;
  /* 0x0028 */ char* pConfigFile;
  /* 0x0030 */ unsigned long dwDriverAttributes;
  /* 0x0034 */ unsigned long dwConfigVersion;
  /* 0x0038 */ unsigned long dwDriverVersion;
  /* 0x003c */ long __PADDING__[1];
} DRIVER_INFO_5A, *PDRIVER_INFO_5A; /* size: 0x0040 */

