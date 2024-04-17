struct LIST_ENTRY32
{
  /* 0x0000 */ unsigned long Flink;
  /* 0x0004 */ unsigned long Blink;
}; /* size: 0x0008 */

typedef struct _RTL_CRITICAL_SECTION_DEBUG32
{
  /* 0x0000 */ unsigned short Type;
  /* 0x0002 */ unsigned short CreatorBackTraceIndex;
  /* 0x0004 */ unsigned long CriticalSection;
  /* 0x0008 */ struct LIST_ENTRY32 ProcessLocksList;
  /* 0x0010 */ unsigned long EntryCount;
  /* 0x0014 */ unsigned long ContentionCount;
  /* 0x0018 */ unsigned long Spare[2];
} RTL_CRITICAL_SECTION_DEBUG32, *PRTL_CRITICAL_SECTION_DEBUG32; /* size: 0x0020 */

