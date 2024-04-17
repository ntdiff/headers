typedef struct _MINIDUMP_THREAD_NAME
{
  /* 0x0000 */ unsigned long ThreadId;
  /* 0x0004 */ unsigned __int64 RvaOfThreadName;
} MINIDUMP_THREAD_NAME, *PMINIDUMP_THREAD_NAME; /* size: 0x000c */

typedef struct _MINIDUMP_THREAD_NAME_LIST
{
  /* 0x0000 */ unsigned long NumberOfThreadNames;
  /* 0x0004 */ struct _MINIDUMP_THREAD_NAME* ThreadNames /* zero-length array */;
} MINIDUMP_THREAD_NAME_LIST, *PMINIDUMP_THREAD_NAME_LIST; /* size: 0x0004 */

