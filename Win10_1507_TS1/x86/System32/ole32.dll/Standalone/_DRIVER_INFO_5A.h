typedef struct _DRIVER_INFO_5A
{
  /* 0x0000 */ unsigned long cVersion;
  /* 0x0004 */ char* pName;
  /* 0x0008 */ char* pEnvironment;
  /* 0x000c */ char* pDriverPath;
  /* 0x0010 */ char* pDataFile;
  /* 0x0014 */ char* pConfigFile;
  /* 0x0018 */ unsigned long dwDriverAttributes;
  /* 0x001c */ unsigned long dwConfigVersion;
  /* 0x0020 */ unsigned long dwDriverVersion;
} DRIVER_INFO_5A, *PDRIVER_INFO_5A; /* size: 0x0024 */

