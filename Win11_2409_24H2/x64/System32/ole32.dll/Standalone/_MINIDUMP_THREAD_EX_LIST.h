typedef struct _MINIDUMP_LOCATION_DESCRIPTOR
{
  /* 0x0000 */ unsigned int DataSize;
  /* 0x0004 */ unsigned long Rva;
} MINIDUMP_LOCATION_DESCRIPTOR, *PMINIDUMP_LOCATION_DESCRIPTOR; /* size: 0x0008 */

typedef struct _MINIDUMP_MEMORY_DESCRIPTOR
{
  /* 0x0000 */ unsigned __int64 StartOfMemoryRange;
  /* 0x0008 */ struct _MINIDUMP_LOCATION_DESCRIPTOR Memory;
} MINIDUMP_MEMORY_DESCRIPTOR, *PMINIDUMP_MEMORY_DESCRIPTOR; /* size: 0x0010 */

typedef struct _MINIDUMP_THREAD_EX
{
  /* 0x0000 */ unsigned int ThreadId;
  /* 0x0004 */ unsigned int SuspendCount;
  /* 0x0008 */ unsigned int PriorityClass;
  /* 0x000c */ unsigned int Priority;
  /* 0x0010 */ unsigned __int64 Teb;
  /* 0x0018 */ struct _MINIDUMP_MEMORY_DESCRIPTOR Stack;
  /* 0x0028 */ struct _MINIDUMP_LOCATION_DESCRIPTOR ThreadContext;
  /* 0x0030 */ struct _MINIDUMP_MEMORY_DESCRIPTOR BackingStore;
} MINIDUMP_THREAD_EX, *PMINIDUMP_THREAD_EX; /* size: 0x0040 */

typedef struct _MINIDUMP_THREAD_EX_LIST
{
  /* 0x0000 */ unsigned int NumberOfThreads;
  /* 0x0004 */ struct _MINIDUMP_THREAD_EX* Threads /* zero-length array */;
} MINIDUMP_THREAD_EX_LIST, *PMINIDUMP_THREAD_EX_LIST; /* size: 0x0004 */

