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
      /* 0x0006 */ unsigned short Sequence;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0008 */

typedef struct _flags
{
  /* 0x0000 */ unsigned char Removable;
} flags, *Pflags; /* size: 0x0001 */

typedef struct _KNODE
{
  /* 0x0000 */ unsigned long ProcessorMask;
  /* 0x0004 */ unsigned long Color;
  /* 0x0008 */ unsigned long MmShiftedColor;
  /* 0x000c */ unsigned long FreeCount[2];
  /* 0x0018 */ union _SLIST_HEADER DeadStackList;
  /* 0x0020 */ union _SLIST_HEADER PfnDereferenceSListHead;
  /* 0x0028 */ struct _SINGLE_LIST_ENTRY* PfnDeferredList;
  /* 0x002c */ unsigned char Seed;
  /* 0x002d */ struct _flags Flags;
  /* 0x002e */ char __PADDING__[2];
} KNODE, *PKNODE; /* size: 0x0030 */

