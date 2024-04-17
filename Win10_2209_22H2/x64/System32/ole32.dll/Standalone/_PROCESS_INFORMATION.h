typedef struct _PROCESS_INFORMATION
{
  /* 0x0000 */ void* hProcess;
  /* 0x0008 */ void* hThread;
  /* 0x0010 */ unsigned long dwProcessId;
  /* 0x0014 */ unsigned long dwThreadId;
} PROCESS_INFORMATION, *PPROCESS_INFORMATION; /* size: 0x0018 */

