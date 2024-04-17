typedef struct _DRIVER_INFO_5W
{
  /* 0x0000 */ unsigned long cVersion;
  /* 0x0004 */ wchar_t* pName;
  /* 0x0008 */ wchar_t* pEnvironment;
  /* 0x000c */ wchar_t* pDriverPath;
  /* 0x0010 */ wchar_t* pDataFile;
  /* 0x0014 */ wchar_t* pConfigFile;
  /* 0x0018 */ unsigned long dwDriverAttributes;
  /* 0x001c */ unsigned long dwConfigVersion;
  /* 0x0020 */ unsigned long dwDriverVersion;
} DRIVER_INFO_5W, *PDRIVER_INFO_5W; /* size: 0x0024 */

