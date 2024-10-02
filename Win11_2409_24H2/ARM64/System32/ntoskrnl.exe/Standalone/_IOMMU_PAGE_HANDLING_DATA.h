typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0008 */

typedef struct _IOMMU_PAGE_HANDLING_DATA
{
  /* 0x0000 */ struct _EX_PUSH_LOCK ResetLock;
  /* 0x0008 */ unsigned __int64 Lock;
  /* 0x0010 */ unsigned long ValidGroupFaultSequenceNumber;
  /* 0x0018 */ void* GetPageFault /* function */;
  /* 0x0020 */ void* DismissPageFault /* function */;
} IOMMU_PAGE_HANDLING_DATA, *PIOMMU_PAGE_HANDLING_DATA; /* size: 0x0028 */

