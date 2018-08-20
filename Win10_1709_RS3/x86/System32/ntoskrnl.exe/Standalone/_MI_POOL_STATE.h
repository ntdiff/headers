typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _MI_POOL_FAILURE_REASONS
{
  /* 0x0000 */ unsigned long NonPagedNoPtes;
  /* 0x0004 */ unsigned long PriorityTooLow;
  /* 0x0008 */ unsigned long NonPagedNoPagesAvailable;
  /* 0x000c */ unsigned long PagedNoPtes;
  /* 0x0010 */ unsigned long SessionPagedNoPtes;
  /* 0x0014 */ unsigned long PagedNoPagesAvailable;
  /* 0x0018 */ unsigned long SessionPagedNoPagesAvailable;
  /* 0x001c */ unsigned long PagedNoCommit;
  /* 0x0020 */ unsigned long SessionPagedNoCommit;
  /* 0x0024 */ unsigned long NonPagedNoResidentAvailable;
  /* 0x0028 */ unsigned long NonPagedNoCommit;
} MI_POOL_FAILURE_REASONS, *PMI_POOL_FAILURE_REASONS; /* size: 0x002c */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0004 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef struct _MM_PAGED_POOL_INFO
{
  /* 0x0000 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0004 */ struct _RTL_BITMAP PagedPoolAllocationMap;
  /* 0x000c */ struct _MMPTE* FirstPteForPagedPool;
  /* 0x0010 */ unsigned long MaximumSize;
  /* 0x0014 */ unsigned long PagedPoolHint;
  /* 0x0018 */ unsigned long AllocatedPagedPool;
} MM_PAGED_POOL_INFO, *PMM_PAGED_POOL_INFO; /* size: 0x001c */

typedef struct _MI_POOL_STATE
{
  /* 0x0000 */ unsigned long MaximumNonPagedPoolThreshold;
  /* 0x0004 */ unsigned long NonPagedPoolSListMaximum[3];
  /* 0x0010 */ volatile unsigned long AllocatedNonPagedPool;
  /* 0x0014 */ struct _SINGLE_LIST_ENTRY BadPoolHead;
  /* 0x0018 */ unsigned long HighEventSets;
  /* 0x001c */ unsigned char HighEventSetsValid;
  /* 0x0020 */ unsigned long PoolFailures[3][3];
  /* 0x0044 */ struct _MI_POOL_FAILURE_REASONS PoolFailureReasons;
  /* 0x0070 */ unsigned long LowPagedPoolThreshold;
  /* 0x0074 */ unsigned long HighPagedPoolThreshold;
  /* 0x0078 */ long SpecialPoolPdesMax;
  /* 0x007c */ unsigned char NonPagedPoolNodes[1024];
  /* 0x047c */ struct _MM_PAGED_POOL_INFO PagedProtoPoolInfo;
  /* 0x0498 */ unsigned long PagedPoolSListMaximum;
  /* 0x049c */ unsigned long PreemptiveTrims[4];
  /* 0x04ac */ unsigned long SpecialPagesInUsePeak;
  /* 0x04b0 */ unsigned long SpecialPoolRejected[6];
  /* 0x04c8 */ volatile unsigned long SpecialPagesNonPaged;
  /* 0x04cc */ volatile long SpecialPoolPdes;
  /* 0x04d0 */ unsigned long SessionSpecialPoolPdesMax;
  /* 0x04d4 */ unsigned long TotalPagedPoolQuota;
  /* 0x04d8 */ unsigned long TotalNonPagedPoolQuota;
} MI_POOL_STATE, *PMI_POOL_STATE; /* size: 0x04dc */

