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

typedef struct _RTL_LOOKASIDE
{
  /* 0x0000 */ union _SLIST_HEADER ListHead;
  /* 0x0008 */ unsigned short Depth;
  /* 0x000a */ unsigned short MaximumDepth;
  /* 0x000c */ unsigned long TotalAllocates;
  /* 0x0010 */ unsigned long AllocateMisses;
  /* 0x0014 */ unsigned long TotalFrees;
  /* 0x0018 */ unsigned long FreeMisses;
  /* 0x001c */ unsigned long LastTotalAllocates;
  /* 0x0020 */ unsigned long LastAllocateMisses;
  /* 0x0024 */ unsigned long LastTotalFrees;
  /* 0x0028 */ long __PADDING__[6];
} RTL_LOOKASIDE, *PRTL_LOOKASIDE; /* size: 0x0040 */

typedef struct _RTL_DYNAMIC_LOOKASIDE
{
  /* 0x0000 */ unsigned __int64 EnabledBucketBitmap;
  /* 0x0008 */ unsigned long BucketCount;
  /* 0x000c */ unsigned long ActiveBucketCount;
  /* 0x0040 */ struct _RTL_LOOKASIDE Buckets[64];
} RTL_DYNAMIC_LOOKASIDE, *PRTL_DYNAMIC_LOOKASIDE; /* size: 0x1040 */

