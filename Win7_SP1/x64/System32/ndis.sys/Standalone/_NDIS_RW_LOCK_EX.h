typedef struct _NDIS_RW_LOCK_EX
{
  /* 0x0000 */ void* SourceHandle;
  /* 0x0008 */ unsigned __int64 WriteLock;
  /* 0x0010 */ struct _ETHREAD* Owner;
  /* 0x0018 */ struct _NDIS_RWL_REFCOUNT_POOL* RefCountPool;
  /* 0x0020 */ unsigned long* RefCount[1];
} NDIS_RW_LOCK_EX, *PNDIS_RW_LOCK_EX; /* size: 0x0028 */

