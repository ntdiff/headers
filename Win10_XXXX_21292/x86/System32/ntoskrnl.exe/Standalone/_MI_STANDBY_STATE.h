typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef union _SLIST_HEADER
{
  union
  {
    /* 0x0000 */ unsigned __int64 Alignment;
    struct
    {
      /* 0x0000 */ struct _SINGLE_LIST_ENTRY Next;
      /* 0x0004 */ unsigned short Depth;
      /* 0x0006 */ unsigned short CpuId;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0008 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef struct _KDPC
{
  union
  {
    /* 0x0000 */ unsigned long TargetInfoAsUlong;
    struct
    {
      /* 0x0000 */ unsigned char Type;
      /* 0x0001 */ unsigned char Importance;
      /* 0x0002 */ volatile unsigned short Number;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0004 */ struct _SINGLE_LIST_ENTRY DpcListEntry;
  /* 0x0008 */ unsigned long ProcessorHistory;
  /* 0x000c */ void* DeferredRoutine /* function */;
  /* 0x0010 */ void* DeferredContext;
  /* 0x0014 */ void* SystemArgument1;
  /* 0x0018 */ void* SystemArgument2;
  /* 0x001c */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0020 */

typedef struct _MI_STANDBY_STATE
{
  /* 0x0000 */ unsigned long FirstDecayPage;
  /* 0x0008 */ union _SLIST_HEADER PfnDecayFreeSList;
  /* 0x0010 */ volatile long DecayPfnLock;
  /* 0x0014 */ struct _RTL_BITMAP DecayPfnsToBeFreed;
  /* 0x001c */ unsigned long DecayPfnsToBeFreedBuffer[64];
  /* 0x011c */ struct _MM_PAGE_ACCESS_INFO_HEADER* PfnRepurposeLog;
  /* 0x0120 */ struct _KDPC AllocatePfnRepurposeDpc;
  /* 0x0140 */ union _SLIST_HEADER PageHeatListSlist;
  /* 0x0148 */ volatile long PageHeatListDisableAllocation;
  /* 0x014c */ long __PADDING__[1];
} MI_STANDBY_STATE, *PMI_STANDBY_STATE; /* size: 0x0150 */

