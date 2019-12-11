typedef struct _RTL_DYNAMIC_HASH_TABLE
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long Shift;
  /* 0x0008 */ unsigned long TableSize;
  /* 0x000c */ unsigned long Pivot;
  /* 0x0010 */ unsigned long DivisorMask;
  /* 0x0014 */ unsigned long NumEntries;
  /* 0x0018 */ unsigned long NonEmptyBuckets;
  /* 0x001c */ unsigned long NumEnumerators;
  /* 0x0020 */ void* Directory;
} RTL_DYNAMIC_HASH_TABLE, *PRTL_DYNAMIC_HASH_TABLE; /* size: 0x0028 */

typedef struct _NDIS_STACK_TRACE_TABLE
{
  /* 0x0000 */ unsigned __int64 Lock;
  /* 0x0008 */ unsigned char Allocated;
  /* 0x0009 */ unsigned char Collisions;
  /* 0x000a */ unsigned char DroppedStacks;
  /* 0x000b */ unsigned char NumStackFrames;
  /* 0x0010 */ struct _RTL_DYNAMIC_HASH_TABLE HashTable;
  /* 0x0038 */ unsigned long AllocationFailures;
  /* 0x003c */ long __PADDING__[1];
} NDIS_STACK_TRACE_TABLE, *PNDIS_STACK_TRACE_TABLE; /* size: 0x0040 */

