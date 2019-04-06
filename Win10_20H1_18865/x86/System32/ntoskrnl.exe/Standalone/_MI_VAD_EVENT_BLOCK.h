typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _DISPATCHER_HEADER
{
  union
  {
    /* 0x0000 */ volatile long Lock;
    /* 0x0000 */ long LockNV;
    struct
    {
      /* 0x0000 */ unsigned char Type;
      /* 0x0001 */ unsigned char Signalling;
      /* 0x0002 */ unsigned char Size;
      /* 0x0003 */ unsigned char Reserved1;
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char TimerType;
      union
      {
        /* 0x0001 */ unsigned char TimerControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Absolute : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char Wake : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char EncodedTolerableDelay : 6; /* bit position: 2 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char Hand;
          union
          {
            /* 0x0003 */ unsigned char TimerMiscFlags;
            struct /* bitfield */
            {
              /* 0x0003 */ unsigned char Index : 1; /* bit position: 0 */
              /* 0x0003 */ unsigned char Processor : 5; /* bit position: 1 */
              /* 0x0003 */ unsigned char Inserted : 1; /* bit position: 6 */
              /* 0x0003 */ volatile unsigned char Expired : 1; /* bit position: 7 */
            }; /* bitfield */
          }; /* size: 0x0001 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char Timer2Type;
      union
      {
        /* 0x0001 */ unsigned char Timer2Flags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Timer2Inserted : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char Timer2Expiring : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char Timer2CancelPending : 1; /* bit position: 2 */
            /* 0x0001 */ unsigned char Timer2SetPending : 1; /* bit position: 3 */
            /* 0x0001 */ unsigned char Timer2Running : 1; /* bit position: 4 */
            /* 0x0001 */ unsigned char Timer2Disabled : 1; /* bit position: 5 */
            /* 0x0001 */ unsigned char Timer2ReservedFlags : 2; /* bit position: 6 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char Timer2ComponentId;
          /* 0x0003 */ unsigned char Timer2RelativeId;
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char QueueType;
      union
      {
        /* 0x0001 */ unsigned char QueueControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Abandoned : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char DisableIncrement : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char QueueReservedControlFlags : 6; /* bit position: 2 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char QueueSize;
          /* 0x0003 */ unsigned char QueueReserved;
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char ThreadType;
      /* 0x0001 */ unsigned char ThreadReserved;
      union
      {
        /* 0x0002 */ unsigned char ThreadControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0002 */ unsigned char CycleProfiling : 1; /* bit position: 0 */
            /* 0x0002 */ unsigned char CounterProfiling : 1; /* bit position: 1 */
            /* 0x0002 */ unsigned char GroupScheduling : 1; /* bit position: 2 */
            /* 0x0002 */ unsigned char AffinitySet : 1; /* bit position: 3 */
            /* 0x0002 */ unsigned char Tagged : 1; /* bit position: 4 */
            /* 0x0002 */ unsigned char EnergyProfiling : 1; /* bit position: 5 */
            /* 0x0002 */ unsigned char SchedulerAssist : 1; /* bit position: 6 */
            /* 0x0002 */ unsigned char Instrumented : 1; /* bit position: 7 */
          }; /* bitfield */
          /* 0x0003 */ unsigned char DebugActive;
        }; /* size: 0x0002 */
      }; /* size: 0x0002 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char MutantType;
      /* 0x0001 */ unsigned char MutantSize;
      /* 0x0002 */ unsigned char DpcActive;
      /* 0x0003 */ unsigned char MutantReserved;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0004 */ long SignalState;
  /* 0x0008 */ struct _LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0010 */

typedef struct _KGATE
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KGATE, *PKGATE; /* size: 0x0010 */

typedef struct _MMSECURE_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long ReadOnly : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long ReadWrite : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long SecNoChange : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long NoDelete : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long RequiresPteReversal : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned long ExclusiveSecure : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned long UserModeOnly : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned long NoInherit : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned long CheckVad : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned long Spare : 3; /* bit position: 9 */
  }; /* bitfield */
} MMSECURE_FLAGS, *PMMSECURE_FLAGS; /* size: 0x0004 */

typedef struct _MMADDRESS_LIST
{
  union
  {
    union
    {
      /* 0x0000 */ struct _MMSECURE_FLAGS Flags;
      /* 0x0000 */ unsigned long FlagsLong;
      /* 0x0000 */ void* StartVa;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  /* 0x0004 */ void* EndVa;
} MMADDRESS_LIST, *PMMADDRESS_LIST; /* size: 0x0008 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef struct _MI_LARGEPAGE_VAD_INFO
{
  /* 0x0000 */ unsigned char LargeImageBias;
  /* 0x0001 */ unsigned char Spare[3];
  /* 0x0004 */ unsigned long ActualImageViewSize;
  /* 0x0008 */ struct _EPARTITION* ReferencedPartition;
} MI_LARGEPAGE_VAD_INFO, *PMI_LARGEPAGE_VAD_INFO; /* size: 0x000c */

typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0004 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  union
  {
    /* 0x0008 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0008 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0008 */ unsigned long ParentValue;
  }; /* size: 0x0004 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x000c */

typedef struct _MI_PHYSICAL_VIEW
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE PhysicalNode;
  /* 0x000c */ struct _MMVAD_SHORT* Vad;
  /* 0x0010 */ struct _AWEINFO* AweInfo;
  union
  {
    union
    {
      /* 0x0014 */ unsigned long ViewPageSize : 2; /* bit position: 0 */
      /* 0x0014 */ struct _CONTROL_AREA* ControlArea;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
} MI_PHYSICAL_VIEW, *PMI_PHYSICAL_VIEW; /* size: 0x0018 */

typedef struct _MI_SUB64K_FREE_RANGES
{
  /* 0x0000 */ struct _RTL_BITMAP BitMap;
  /* 0x0008 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ struct _MMVAD_SHORT* Vad;
  /* 0x0014 */ unsigned long SetBits;
  /* 0x0018 */ unsigned long FullSetBits;
  struct /* bitfield */
  {
    /* 0x001c */ unsigned long SubListIndex : 2; /* bit position: 0 */
    /* 0x001c */ unsigned long Hint : 30; /* bit position: 2 */
  }; /* bitfield */
} MI_SUB64K_FREE_RANGES, *PMI_SUB64K_FREE_RANGES; /* size: 0x0020 */

typedef struct _MI_VAD_EVENT_BLOCK
{
  /* 0x0000 */ struct _MI_VAD_EVENT_BLOCK* Next;
  union
  {
    /* 0x0004 */ struct _KGATE Gate;
    /* 0x0004 */ struct _MMADDRESS_LIST SecureInfo;
    /* 0x0004 */ struct _RTL_BITMAP BitMap;
    /* 0x0004 */ struct _MMINPAGE_SUPPORT* InPageSupport;
    /* 0x0004 */ struct _MI_LARGEPAGE_VAD_INFO LargePage;
    /* 0x0004 */ struct _MI_PHYSICAL_VIEW AweView;
    /* 0x0004 */ struct _ETHREAD* CreatingThread;
    /* 0x0004 */ struct _MI_SUB64K_FREE_RANGES PebTeb;
    /* 0x0004 */ struct _MMVAD_SHORT* PlaceholderVad;
  }; /* size: 0x0020 */
  /* 0x0024 */ unsigned long WaitReason;
} MI_VAD_EVENT_BLOCK, *PMI_VAD_EVENT_BLOCK; /* size: 0x0028 */

