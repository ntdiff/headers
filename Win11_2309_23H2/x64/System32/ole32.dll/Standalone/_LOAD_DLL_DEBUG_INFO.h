typedef struct _LOAD_DLL_DEBUG_INFO
{
  /* 0x0000 */ void* hFile;
  /* 0x0008 */ void* lpBaseOfDll;
  /* 0x0010 */ unsigned long dwDebugInfoFileOffset;
  /* 0x0014 */ unsigned long nDebugInfoSize;
  /* 0x0018 */ void* lpImageName;
  /* 0x0020 */ unsigned short fUnicode;
  /* 0x0022 */ char __PADDING__[6];
} LOAD_DLL_DEBUG_INFO, *PLOAD_DLL_DEBUG_INFO; /* size: 0x0028 */

