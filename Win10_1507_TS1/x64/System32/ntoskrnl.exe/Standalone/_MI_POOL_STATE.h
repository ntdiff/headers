typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _MI_POOL_STATE
{
  /* 0x0000 */ unsigned __int64 MaximumNonPagedPoolThreshold;
  /* 0x0008 */ unsigned long NonPagedPoolSListMaximum[3];
  /* 0x0018 */ volatile unsigned __int64 AllocatedNonPagedPool;
  /* 0x0020 */ struct _SINGLE_LIST_ENTRY BadPoolHead;
  /* 0x0028 */ unsigned long PoolFailures[3][3];
  /* 0x004c */ unsigned long PoolFailureReasons[11];
  /* 0x0078 */ unsigned __int64 LowPagedPoolThreshold;
  /* 0x0080 */ unsigned __int64 HighPagedPoolThreshold;
  /* 0x0088 */ unsigned long PagedPoolSListMaximum;
  /* 0x008c */ unsigned long PreemptiveTrims[4];
  /* 0x00a0 */ unsigned __int64 SpecialPagesInUsePeak;
  /* 0x00a8 */ unsigned long SpecialPoolRejected[9];
  /* 0x00d0 */ volatile unsigned __int64 SpecialPagesNonPaged;
  /* 0x00d8 */ volatile long SpecialPoolPdes;
  /* 0x00dc */ unsigned long SessionSpecialPoolPdesMax;
  /* 0x00e0 */ unsigned __int64 TotalPagedPoolQuota;
  /* 0x00e8 */ unsigned __int64 TotalNonPagedPoolQuota;
} MI_POOL_STATE, *PMI_POOL_STATE; /* size: 0x00f0 */

