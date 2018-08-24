typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _KWAIT_BLOCK
{
  /* 0x0000 */ struct _LIST_ENTRY WaitListEntry;
  /* 0x0010 */ struct _KTHREAD* Thread;
  /* 0x0018 */ void* Object;
  /* 0x0020 */ struct _KWAIT_BLOCK* NextWaitBlock;
  /* 0x0028 */ unsigned short WaitKey;
  /* 0x002a */ unsigned char WaitType;
  /* 0x002b */ volatile unsigned char BlockState;
  /* 0x002c */ long SpareLong;
} KWAIT_BLOCK, *PKWAIT_BLOCK; /* size: 0x0030 */

