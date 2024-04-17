typedef struct __CRT_LIST_ENTRY
{
  /* 0x0000 */ struct __CRT_LIST_ENTRY* Flink;
  /* 0x0008 */ struct __CRT_LIST_ENTRY* Blink;
} _CRT_LIST_ENTRY, *P_CRT_LIST_ENTRY; /* size: 0x0010 */

typedef struct _CRT_CRITICAL_SECTION_DEBUG
{
  /* 0x0000 */ unsigned short Type;
  /* 0x0002 */ unsigned short CreatorBackTraceIndex;
  /* 0x0008 */ struct _CRT_CRITICAL_SECTION* CriticalSection;
  /* 0x0010 */ struct __CRT_LIST_ENTRY ProcessLocksList;
  /* 0x0020 */ unsigned long EntryCount;
  /* 0x0024 */ unsigned long ContentionCount;
  /* 0x0028 */ unsigned long Depth;
  /* 0x0030 */ void* OwnerBackTrace[5];
} CRT_CRITICAL_SECTION_DEBUG, *PCRT_CRITICAL_SECTION_DEBUG; /* size: 0x0058 */

