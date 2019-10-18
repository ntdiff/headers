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

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef struct _MI_PARTITION_STATE
{
  /* 0x0000 */ unsigned long PartitionLock;
  /* 0x0004 */ struct _EX_PUSH_LOCK PartitionIdLock;
  /* 0x0008 */ unsigned __int64 InitialPartitionIdBits;
  /* 0x0010 */ struct _LIST_ENTRY PartitionList;
  /* 0x0018 */ struct _RTL_BITMAP* PartitionIdBitmap;
  /* 0x001c */ struct _RTL_BITMAP InitialPartitionIdBitmap;
  /* 0x0024 */ struct _MI_PARTITION* TempPartitionPointers[1];
  /* 0x0028 */ struct _MI_PARTITION** Partition;
  /* 0x002c */ unsigned long TotalPagesInChildPartitions;
  /* 0x0030 */ unsigned long CrossPartitionDenials;
  /* 0x0034 */ unsigned char MultiplePartitionsExist;
  /* 0x0035 */ char __PADDING__[3];
} MI_PARTITION_STATE, *PMI_PARTITION_STATE; /* size: 0x0038 */

