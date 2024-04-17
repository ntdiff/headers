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

typedef struct _RTL_PROCESS_LOCKS
{
  /* 0x0000 */ unsigned long NumberOfLocks;
  /* 0x0008 */ struct _RTL_PROCESS_LOCK_INFORMATION Locks[1];
} RTL_PROCESS_LOCKS, *PRTL_PROCESS_LOCKS; /* size: 0x0038 */

