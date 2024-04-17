typedef struct _DRIVER_INFO_5W
{
  /* 0x0000 */ unsigned long cVersion;
  /* 0x0008 */ wchar_t* pName;
  /* 0x0010 */ wchar_t* pEnvironment;
  /* 0x0018 */ wchar_t* pDriverPath;
  /* 0x0020 */ wchar_t* pDataFile;
  /* 0x0028 */ wchar_t* pConfigFile;
  /* 0x0030 */ unsigned long dwDriverAttributes;
  /* 0x0034 */ unsigned long dwConfigVersion;
  /* 0x0038 */ unsigned long dwDriverVersion;
  /* 0x003c */ long __PADDING__[1];
} DRIVER_INFO_5W, *PDRIVER_INFO_5W; /* size: 0x0040 */

