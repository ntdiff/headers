typedef struct _RTL_PROCESS_LOCK_INFORMATION
{
  /* 0x0000 */ void* Address;
  /* 0x0004 */ unsigned short Type;
  /* 0x0006 */ unsigned short CreatorBackTraceIndex;
  /* 0x0008 */ void* OwningThread;
  /* 0x000c */ long LockCount;
  /* 0x0010 */ unsigned long ContentionCount;
  /* 0x0014 */ unsigned long EntryCount;
  /* 0x0018 */ long RecursionCount;
  /* 0x001c */ unsigned long NumberOfWaitingShared;
  /* 0x0020 */ unsigned long NumberOfWaitingExclusive;
} RTL_PROCESS_LOCK_INFORMATION, *PRTL_PROCESS_LOCK_INFORMATION; /* size: 0x0024 */

typedef struct _RTL_PROCESS_LOCKS
{
  /* 0x0000 */ unsigned long NumberOfLocks;
  /* 0x0004 */ struct _RTL_PROCESS_LOCK_INFORMATION Locks[1];
} RTL_PROCESS_LOCKS, *PRTL_PROCESS_LOCKS; /* size: 0x0028 */

