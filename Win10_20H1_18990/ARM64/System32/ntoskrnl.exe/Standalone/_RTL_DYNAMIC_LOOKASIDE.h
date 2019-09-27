typedef union _SLIST_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Alignment;
      /* 0x0008 */ unsigned __int64 Region;
    }; /* size: 0x0010 */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 Reserved : 4; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ HeaderArm64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef struct _RTL_LOOKASIDE
{
  /* 0x0000 */ union _SLIST_HEADER ListHead;
  /* 0x0010 */ unsigned short Depth;
  /* 0x0012 */ unsigned short MaximumDepth;
  /* 0x0014 */ unsigned long TotalAllocates;
  /* 0x0018 */ unsigned long AllocateMisses;
  /* 0x001c */ unsigned long TotalFrees;
  /* 0x0020 */ unsigned long FreeMisses;
  /* 0x0024 */ unsigned long LastTotalAllocates;
  /* 0x0028 */ unsigned long LastAllocateMisses;
  /* 0x002c */ unsigned long LastTotalFrees;
  /* 0x0030 */ long __PADDING__[4];
} RTL_LOOKASIDE, *PRTL_LOOKASIDE; /* size: 0x0040 */

typedef struct _RTL_DYNAMIC_LOOKASIDE
{
  /* 0x0000 */ unsigned __int64 EnabledBucketBitmap;
  /* 0x0008 */ unsigned long BucketCount;
  /* 0x000c */ unsigned long ActiveBucketCount;
  /* 0x0040 */ struct _RTL_LOOKASIDE Buckets[64];
} RTL_DYNAMIC_LOOKASIDE, *PRTL_DYNAMIC_LOOKASIDE; /* size: 0x1040 */

