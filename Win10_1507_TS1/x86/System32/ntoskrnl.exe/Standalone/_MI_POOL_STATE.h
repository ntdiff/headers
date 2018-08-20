typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

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
  /* 0x0018 */ unsigned long PoolFailures[3][3];
  /* 0x003c */ unsigned long PoolFailureReasons[11];
  /* 0x0068 */ unsigned long LowPagedPoolThreshold;
  /* 0x006c */ unsigned long HighPagedPoolThreshold;
  /* 0x0070 */ long SpecialPoolPdesMax;
  /* 0x0074 */ unsigned char NonPagedPoolNodes[1024];
  /* 0x0474 */ struct _MM_PAGED_POOL_INFO PagedProtoPoolInfo;
  /* 0x0490 */ unsigned long PagedPoolSListMaximum;
  /* 0x0494 */ unsigned long PreemptiveTrims[4];
  /* 0x04a4 */ unsigned long SpecialPagesInUsePeak;
  /* 0x04a8 */ unsigned long SpecialPoolRejected[9];
  /* 0x04cc */ volatile unsigned long SpecialPagesNonPaged;
  /* 0x04d0 */ volatile long SpecialPoolPdes;
  /* 0x04d4 */ unsigned long SessionSpecialPoolPdesMax;
  /* 0x04d8 */ unsigned long TotalPagedPoolQuota;
  /* 0x04dc */ unsigned long TotalNonPagedPoolQuota;
} MI_POOL_STATE, *PMI_POOL_STATE; /* size: 0x04e0 */

