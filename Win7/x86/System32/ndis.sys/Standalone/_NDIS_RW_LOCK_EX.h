typedef struct _NDIS_RW_LOCK_EX
{
  /* 0x0000 */ void* SourceHandle;
  /* 0x0004 */ unsigned long WriteLock;
  /* 0x0008 */ struct _ETHREAD* Owner;
  /* 0x000c */ struct _NDIS_RWL_REFCOUNT_POOL* RefCountPool;
  /* 0x0010 */ unsigned long* RefCount[1];
} NDIS_RW_LOCK_EX, *PNDIS_RW_LOCK_EX; /* size: 0x0014 */

