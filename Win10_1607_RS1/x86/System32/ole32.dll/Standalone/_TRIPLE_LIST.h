typedef struct _TRIPLE_LIST_ENTRY
{
  /* 0x0000 */ struct _TRIPLE_LIST_ENTRY* Flink[3];
  /* 0x000c */ struct _TRIPLE_LIST_ENTRY* Blink;
} TRIPLE_LIST_ENTRY, *PTRIPLE_LIST_ENTRY; /* size: 0x0010 */

typedef struct _TRIPLE_LIST
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ volatile unsigned long SwitchSelectorBit0 : 1; /* bit position: 0 */
        /* 0x0000 */ volatile unsigned long ActiveListBit0 : 1; /* bit position: 1 */
        /* 0x0000 */ volatile unsigned long OverflowActiveListBit0 : 1; /* bit position: 2 */
        /* 0x0000 */ volatile unsigned long SwitchSelectorBit1 : 1; /* bit position: 3 */
        /* 0x0000 */ volatile unsigned long ActiveListBit1 : 1; /* bit position: 4 */
        /* 0x0000 */ volatile unsigned long OverflowActiveListBit1 : 1; /* bit position: 5 */
        /* 0x0000 */ volatile unsigned long ReaderDidTheSwitch : 1; /* bit position: 6 */
        /* 0x0000 */ volatile unsigned long Reserved : 22; /* bit position: 7 */
        /* 0x0000 */ volatile unsigned long ReaderBusy : 1; /* bit position: 29 */
        /* 0x0000 */ volatile unsigned long UpdateReady : 1; /* bit position: 30 */
        /* 0x0000 */ volatile unsigned long OverflowUpdateReady : 1; /* bit position: 31 */
      }; /* bitfield */
    } /* size: 0x0004 */ ControlBits;
    /* 0x0000 */ volatile long CombinedControlBits;
  }; /* size: 0x0004 */
  /* 0x0004 */ struct _TRIPLE_LIST_ENTRY Head;
  /* 0x0014 */ struct _TRIPLE_LIST_ENTRY* Tail[3];
  /* 0x0020 */ void* RemoveCallback /* function */;
  /* 0x0024 */ void* RemoveContext;
  /* 0x0028 */ struct _TRIPLE_LIST_ENTRY* PendingHead;
  /* 0x002c */ struct _TRIPLE_LIST_ENTRY** PendingTailPtr;
  /* 0x0030 */ unsigned long PendingListIndex;
} TRIPLE_LIST, *PTRIPLE_LIST; /* size: 0x0034 */

