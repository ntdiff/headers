typedef struct _DRIVER_INFO_2W
{
  /* 0x0000 */ unsigned long cVersion;
  /* 0x0004 */ wchar_t* pName;
  /* 0x0008 */ wchar_t* pEnvironment;
  /* 0x000c */ wchar_t* pDriverPath;
  /* 0x0010 */ wchar_t* pDataFile;
  /* 0x0014 */ wchar_t* pConfigFile;
} DRIVER_INFO_2W, *PDRIVER_INFO_2W; /* size: 0x0018 */

