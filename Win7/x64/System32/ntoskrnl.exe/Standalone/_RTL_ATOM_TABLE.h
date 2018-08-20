typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0008 */ long LockCount;
  /* 0x000c */ long RecursionCount;
  /* 0x0010 */ void* OwningThread;
  /* 0x0018 */ void* LockSemaphore;
  /* 0x0020 */ unsigned __int64 SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0028 */

typedef struct _RTL_HANDLE_TABLE
{
  /* 0x0000 */ unsigned long MaximumNumberOfHandles;
  /* 0x0004 */ unsigned long SizeOfHandleTableEntry;
  /* 0x0008 */ unsigned long Reserved[2];
  /* 0x0010 */ struct _RTL_HANDLE_TABLE_ENTRY* FreeHandles;
  /* 0x0018 */ struct _RTL_HANDLE_TABLE_ENTRY* CommittedHandles;
  /* 0x0020 */ struct _RTL_HANDLE_TABLE_ENTRY* UnCommittedHandles;
  /* 0x0028 */ struct _RTL_HANDLE_TABLE_ENTRY* MaxReservedHandles;
} RTL_HANDLE_TABLE, *PRTL_HANDLE_TABLE; /* size: 0x0030 */

typedef struct _RTL_ATOM_TABLE
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0008 */ struct _RTL_CRITICAL_SECTION CriticalSection;
  /* 0x0030 */ struct _RTL_HANDLE_TABLE RtlHandleTable;
  /* 0x0060 */ unsigned long NumberOfBuckets;
  /* 0x0068 */ struct _RTL_ATOM_TABLE_ENTRY* Buckets[1];
} RTL_ATOM_TABLE, *PRTL_ATOM_TABLE; /* size: 0x0070 */

