typedef struct _CREATE_PROCESS_DEBUG_INFO
{
  /* 0x0000 */ void* hFile;
  /* 0x0004 */ void* hProcess;
  /* 0x0008 */ void* hThread;
  /* 0x000c */ void* lpBaseOfImage;
  /* 0x0010 */ unsigned long dwDebugInfoFileOffset;
  /* 0x0014 */ unsigned long nDebugInfoSize;
  /* 0x0018 */ void* lpThreadLocalBase;
  /* 0x001c */ void* lpStartAddress /* function */;
  /* 0x0020 */ void* lpImageName;
  /* 0x0024 */ unsigned short fUnicode;
  /* 0x0026 */ char __PADDING__[2];
} CREATE_PROCESS_DEBUG_INFO, *PCREATE_PROCESS_DEBUG_INFO; /* size: 0x0028 */

