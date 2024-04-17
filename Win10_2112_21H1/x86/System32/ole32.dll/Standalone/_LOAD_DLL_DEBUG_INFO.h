typedef struct _LOAD_DLL_DEBUG_INFO
{
  /* 0x0000 */ void* hFile;
  /* 0x0004 */ void* lpBaseOfDll;
  /* 0x0008 */ unsigned long dwDebugInfoFileOffset;
  /* 0x000c */ unsigned long nDebugInfoSize;
  /* 0x0010 */ void* lpImageName;
  /* 0x0014 */ unsigned short fUnicode;
  /* 0x0016 */ char __PADDING__[2];
} LOAD_DLL_DEBUG_INFO, *PLOAD_DLL_DEBUG_INFO; /* size: 0x0018 */

