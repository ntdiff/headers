typedef struct _APPINFO_PROCESS_INFORMATION
{
  /* 0x0000 */ unsigned long hProcess;
  /* 0x0004 */ unsigned long hThread;
  /* 0x0008 */ unsigned long dwProcessId;
  /* 0x000c */ unsigned long dwThreadId;
} APPINFO_PROCESS_INFORMATION, *PAPPINFO_PROCESS_INFORMATION; /* size: 0x0010 */

