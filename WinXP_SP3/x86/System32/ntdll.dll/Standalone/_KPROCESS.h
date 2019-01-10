typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _DISPATCHER_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Absolute;
  /* 0x0002 */ unsigned char Size;
  /* 0x0003 */ unsigned char Inserted;
  /* 0x0004 */ long SignalState;
  /* 0x0008 */ struct _LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0010 */

typedef struct _KGDTENTRY
{
  /* 0x0000 */ unsigned short LimitLow;
  /* 0x0002 */ unsigned short BaseLow;
  union
  {
    union
    {
      struct
      {
        /* 0x0004 */ unsigned char BaseMid;
        /* 0x0005 */ unsigned char Flags1;
        /* 0x0006 */ unsigned char Flags2;
        /* 0x0007 */ unsigned char BaseHi;
      } /* size: 0x0004 */ Bytes;
      struct
      {
        struct /* bitfield */
        {
          /* 0x0004 */ unsigned long BaseMid : 8; /* bit position: 0 */
          /* 0x0004 */ unsigned long Type : 5; /* bit position: 8 */
          /* 0x0004 */ unsigned long Dpl : 2; /* bit position: 13 */
          /* 0x0004 */ unsigned long Pres : 1; /* bit position: 15 */
          /* 0x0004 */ unsigned long LimitHi : 4; /* bit position: 16 */
          /* 0x0004 */ unsigned long Sys : 1; /* bit position: 20 */
          /* 0x0004 */ unsigned long Reserved_0 : 1; /* bit position: 21 */
          /* 0x0004 */ unsigned long Default_Big : 1; /* bit position: 22 */
          /* 0x0004 */ unsigned long Granularity : 1; /* bit position: 23 */
          /* 0x0004 */ unsigned long BaseHi : 8; /* bit position: 24 */
        }; /* bitfield */
      } /* size: 0x0004 */ Bits;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ HighWord;
} KGDTENTRY, *PKGDTENTRY; /* size: 0x0008 */

typedef struct _KIDTENTRY
{
  /* 0x0000 */ unsigned short Offset;
  /* 0x0002 */ unsigned short Selector;
  /* 0x0004 */ unsigned short Access;
  /* 0x0006 */ unsigned short ExtendedOffset;
} KIDTENTRY, *PKIDTENTRY; /* size: 0x0008 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _KEXECUTE_OPTIONS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char ExecuteDisable : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char ExecuteEnable : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned char DisableThunkEmulation : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned char Permanent : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char ExecuteDispatchEnable : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned char ImageDispatchEnable : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char Spare : 2; /* bit position: 6 */
  }; /* bitfield */
} KEXECUTE_OPTIONS, *PKEXECUTE_OPTIONS; /* size: 0x0001 */

typedef struct _KPROCESS
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0010 */ struct _LIST_ENTRY ProfileListHead;
  /* 0x0018 */ unsigned long DirectoryTableBase[2];
  /* 0x0020 */ struct _KGDTENTRY LdtDescriptor;
  /* 0x0028 */ struct _KIDTENTRY Int21Descriptor;
  /* 0x0030 */ unsigned short IopmOffset;
  /* 0x0032 */ unsigned char Iopl;
  /* 0x0033 */ unsigned char Unused;
  /* 0x0034 */ unsigned long ActiveProcessors;
  /* 0x0038 */ unsigned long KernelTime;
  /* 0x003c */ unsigned long UserTime;
  /* 0x0040 */ struct _LIST_ENTRY ReadyListHead;
  /* 0x0048 */ struct _SINGLE_LIST_ENTRY SwapListEntry;
  /* 0x004c */ void* VdmTrapcHandler;
  /* 0x0050 */ struct _LIST_ENTRY ThreadListHead;
  /* 0x0058 */ unsigned long ProcessLock;
  /* 0x005c */ unsigned long Affinity;
  /* 0x0060 */ unsigned short StackCount;
  /* 0x0062 */ char BasePriority;
  /* 0x0063 */ char ThreadQuantum;
  /* 0x0064 */ unsigned char AutoAlignment;
  /* 0x0065 */ unsigned char State;
  /* 0x0066 */ unsigned char ThreadSeed;
  /* 0x0067 */ unsigned char DisableBoost;
  /* 0x0068 */ unsigned char PowerState;
  /* 0x0069 */ unsigned char DisableQuantum;
  /* 0x006a */ unsigned char IdealNode;
  union
  {
    /* 0x006b */ struct _KEXECUTE_OPTIONS Flags;
    /* 0x006b */ unsigned char ExecuteOptions;
  }; /* size: 0x0001 */
} KPROCESS, *PKPROCESS; /* size: 0x006c */

