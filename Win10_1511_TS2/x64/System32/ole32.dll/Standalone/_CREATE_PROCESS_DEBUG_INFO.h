typedef struct _CREATE_PROCESS_DEBUG_INFO
{
  /* 0x0000 */ void* hFile;
  /* 0x0008 */ void* hProcess;
  /* 0x0010 */ void* hThread;
  /* 0x0018 */ void* lpBaseOfImage;
  /* 0x0020 */ unsigned long dwDebugInfoFileOffset;
  /* 0x0024 */ unsigned long nDebugInfoSize;
  /* 0x0028 */ void* lpThreadLocalBase;
  /* 0x0030 */ void* lpStartAddress /* function */;
  /* 0x0038 */ void* lpImageName;
  /* 0x0040 */ unsigned short fUnicode;
  /* 0x0042 */ char __PADDING__[6];
} CREATE_PROCESS_DEBUG_INFO, *PCREATE_PROCESS_DEBUG_INFO; /* size: 0x0048 */

