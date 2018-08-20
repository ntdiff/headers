typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _KWAIT_BLOCK
{
  /* 0x0000 */ struct _LIST_ENTRY WaitListEntry;
  /* 0x0008 */ struct _KTHREAD* Thread;
  /* 0x000c */ void* Object;
  /* 0x0010 */ struct _KWAIT_BLOCK* NextWaitBlock;
  /* 0x0014 */ unsigned short WaitKey;
  /* 0x0016 */ unsigned char WaitType;
  /* 0x0017 */ volatile unsigned char BlockState;
} KWAIT_BLOCK, *PKWAIT_BLOCK; /* size: 0x0018 */

