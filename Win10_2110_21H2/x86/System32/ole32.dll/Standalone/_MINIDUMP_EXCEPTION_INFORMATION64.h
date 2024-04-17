typedef struct _MINIDUMP_EXCEPTION_INFORMATION64
{
  /* 0x0000 */ unsigned long ThreadId;
  /* 0x0004 */ unsigned __int64 ExceptionRecord;
  /* 0x000c */ unsigned __int64 ContextRecord;
  /* 0x0014 */ int ClientPointers;
} MINIDUMP_EXCEPTION_INFORMATION64, *PMINIDUMP_EXCEPTION_INFORMATION64; /* size: 0x0018 */

