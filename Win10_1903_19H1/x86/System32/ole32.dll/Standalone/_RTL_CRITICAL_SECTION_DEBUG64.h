struct LIST_ENTRY64
{
  /* 0x0000 */ unsigned __int64 Flink;
  /* 0x0008 */ unsigned __int64 Blink;
}; /* size: 0x0010 */

typedef struct _RTL_CRITICAL_SECTION_DEBUG64
{
  /* 0x0000 */ unsigned short Type;
  /* 0x0002 */ unsigned short CreatorBackTraceIndex;
  /* 0x0008 */ unsigned __int64 CriticalSection;
  /* 0x0010 */ struct LIST_ENTRY64 ProcessLocksList;
  /* 0x0020 */ unsigned long EntryCount;
  /* 0x0024 */ unsigned long ContentionCount;
  /* 0x0028 */ unsigned long Spare[2];
} RTL_CRITICAL_SECTION_DEBUG64, *PRTL_CRITICAL_SECTION_DEBUG64; /* size: 0x0030 */

