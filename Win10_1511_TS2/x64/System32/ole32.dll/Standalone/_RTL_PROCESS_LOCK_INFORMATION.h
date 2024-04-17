typedef struct _RTL_PROCESS_LOCK_INFORMATION
{
  /* 0x0000 */ void* Address;
  /* 0x0008 */ unsigned short Type;
  /* 0x000a */ unsigned short CreatorBackTraceIndex;
  /* 0x0010 */ void* OwningThread;
  /* 0x0018 */ long LockCount;
  /* 0x001c */ unsigned long ContentionCount;
  /* 0x0020 */ unsigned long EntryCount;
  /* 0x0024 */ long RecursionCount;
  /* 0x0028 */ unsigned long NumberOfWaitingShared;
  /* 0x002c */ unsigned long NumberOfWaitingExclusive;
} RTL_PROCESS_LOCK_INFORMATION, *PRTL_PROCESS_LOCK_INFORMATION; /* size: 0x0030 */

