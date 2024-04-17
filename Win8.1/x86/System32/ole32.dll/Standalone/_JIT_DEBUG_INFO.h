typedef struct _JIT_DEBUG_INFO
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0004 */ unsigned long dwProcessorArchitecture;
  /* 0x0008 */ unsigned long dwThreadID;
  /* 0x000c */ unsigned long dwReserved0;
  /* 0x0010 */ unsigned __int64 lpExceptionAddress;
  /* 0x0018 */ unsigned __int64 lpExceptionRecord;
  /* 0x0020 */ unsigned __int64 lpContextRecord;
} JIT_DEBUG_INFO, *PJIT_DEBUG_INFO; /* size: 0x0028 */

