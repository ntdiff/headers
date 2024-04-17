typedef struct _MINIDUMP_EXCEPTION_INFORMATION
{
  /* 0x0000 */ unsigned long ThreadId;
  /* 0x0004 */ struct _EXCEPTION_POINTERS* ExceptionPointers;
  /* 0x000c */ int ClientPointers;
} MINIDUMP_EXCEPTION_INFORMATION, *PMINIDUMP_EXCEPTION_INFORMATION; /* size: 0x0010 */

