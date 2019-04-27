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

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0008 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0010 */

typedef struct _RTL_BITMAP_EX
{
  /* 0x0000 */ unsigned __int64 SizeOfBitMap;
  /* 0x0008 */ unsigned __int64* Buffer;
} RTL_BITMAP_EX, *PRTL_BITMAP_EX; /* size: 0x0010 */

typedef struct _MI_PARTITION_STATE
{
  /* 0x0000 */ unsigned __int64 PartitionLock;
  /* 0x0008 */ struct _EX_PUSH_LOCK PartitionIdLock;
  /* 0x0010 */ unsigned __int64 InitialPartitionIdBits;
  /* 0x0018 */ struct _LIST_ENTRY PartitionList;
  /* 0x0028 */ struct _RTL_BITMAP* PartitionIdBitmap;
  /* 0x0030 */ struct _RTL_BITMAP InitialPartitionIdBitmap;
  /* 0x0040 */ struct _MI_PARTITION* TempPartitionPointers[1];
  /* 0x0048 */ struct _MI_PARTITION** Partition;
  /* 0x0050 */ unsigned __int64 TotalPagesInChildPartitions;
  /* 0x0058 */ unsigned long CrossPartitionDenials;
  /* 0x005c */ unsigned char MultiplePartitionsExist;
  /* 0x0060 */ struct _RTL_BITMAP_EX HugeIoPfnBitMap;
  /* 0x0070 */ struct _MI_HUGE_PFN* HugePfnDatabase;
  /* 0x0080 */ unsigned __int64 HugeRangesLock;
  /* 0x0088 */ long __PADDING__[14];
} MI_PARTITION_STATE, *PMI_PARTITION_STATE; /* size: 0x00c0 */

