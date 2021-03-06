typedef struct _MM_AVL_NODE
{
  union
  {
    union
    {
      /* 0x0000 */ long Balance : 2; /* bit position: 0 */
      /* 0x0000 */ struct _MM_AVL_NODE* Parent;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  /* 0x0004 */ struct _MM_AVL_NODE* LeftChild;
  /* 0x0008 */ struct _MM_AVL_NODE* RightChild;
} MM_AVL_NODE, *PMM_AVL_NODE; /* size: 0x000c */

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

typedef struct _MMVAD_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long VadType : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned long Protection : 5; /* bit position: 3 */
    /* 0x0000 */ unsigned long PreferredNode : 6; /* bit position: 8 */
    /* 0x0000 */ unsigned long NoChange : 1; /* bit position: 14 */
    /* 0x0000 */ unsigned long PrivateMemory : 1; /* bit position: 15 */
    /* 0x0000 */ unsigned long Teb : 1; /* bit position: 16 */
    /* 0x0000 */ unsigned long PrivateFixup : 1; /* bit position: 17 */
    /* 0x0000 */ unsigned long Spare : 13; /* bit position: 18 */
    /* 0x0000 */ unsigned long DeleteInProgress : 1; /* bit position: 31 */
  }; /* bitfield */
} MMVAD_FLAGS, *PMMVAD_FLAGS; /* size: 0x0004 */

typedef struct _MMVAD_FLAGS1
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long CommitCharge : 31; /* bit position: 0 */
    /* 0x0000 */ unsigned long MemCommit : 1; /* bit position: 31 */
  }; /* bitfield */
} MMVAD_FLAGS1, *PMMVAD_FLAGS1; /* size: 0x0004 */

typedef struct _MMVAD_SHORT
{
  /* 0x0000 */ struct _MM_AVL_NODE VadNode;
  /* 0x000c */ unsigned long StartingVpn;
  /* 0x0010 */ unsigned long EndingVpn;
  /* 0x0014 */ struct _EX_PUSH_LOCK PushLock;
  union
  {
    union
    {
      /* 0x0018 */ unsigned long LongFlags;
      /* 0x0018 */ struct _MMVAD_FLAGS VadFlags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
  union
  {
    union
    {
      /* 0x001c */ unsigned long LongFlags1;
      /* 0x001c */ struct _MMVAD_FLAGS1 VadFlags1;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  /* 0x0020 */ struct _MI_VAD_EVENT_BLOCK* EventList;
  /* 0x0024 */ long ReferenceCount;
} MMVAD_SHORT, *PMMVAD_SHORT; /* size: 0x0028 */

typedef struct _MMVAD_FLAGS2
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long FileOffset : 24; /* bit position: 0 */
    /* 0x0000 */ unsigned long Large : 1; /* bit position: 24 */
    /* 0x0000 */ unsigned long TrimBehind : 1; /* bit position: 25 */
    /* 0x0000 */ unsigned long Inherit : 1; /* bit position: 26 */
    /* 0x0000 */ unsigned long CopyOnWrite : 1; /* bit position: 27 */
    /* 0x0000 */ unsigned long NoValidationNeeded : 1; /* bit position: 28 */
    /* 0x0000 */ unsigned long Spare : 3; /* bit position: 29 */
  }; /* bitfield */
} MMVAD_FLAGS2, *PMMVAD_FLAGS2; /* size: 0x0004 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _MI_VAD_SEQUENTIAL_INFO
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Length : 11; /* bit position: 0 */
    /* 0x0000 */ unsigned long Vpn : 21; /* bit position: 11 */
  }; /* bitfield */
} MI_VAD_SEQUENTIAL_INFO, *PMI_VAD_SEQUENTIAL_INFO; /* size: 0x0004 */

typedef struct _MMVAD
{
  /* 0x0000 */ struct _MMVAD_SHORT Core;
  union
  {
    union
    {
      /* 0x0028 */ unsigned long LongFlags2;
      /* 0x0028 */ struct _MMVAD_FLAGS2 VadFlags2;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u2;
  union
  {
    /* 0x002c */ struct _SUBSECTION* Subsection;
    /* 0x002c */ struct _MSUBSECTION* MappedSubsection;
  }; /* size: 0x0004 */
  /* 0x0030 */ struct _MMPTE* FirstPrototypePte;
  /* 0x0034 */ struct _MMPTE* LastContiguousPte;
  /* 0x0038 */ struct _LIST_ENTRY ViewLinks;
  /* 0x0040 */ struct _EPROCESS* VadsProcess;
  union
  {
    union
    {
      /* 0x0044 */ struct _MI_VAD_SEQUENTIAL_INFO SequentialVa;
      /* 0x0044 */ struct _MMEXTEND_INFO* ExtendedInfo;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u4;
} MMVAD, *PMMVAD; /* size: 0x0048 */

