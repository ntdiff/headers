typedef struct _MMVAD_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long CommitCharge : 19; /* bit position: 0 */
    /* 0x0000 */ unsigned long NoChange : 1; /* bit position: 19 */
    /* 0x0000 */ unsigned long VadType : 3; /* bit position: 20 */
    /* 0x0000 */ unsigned long MemCommit : 1; /* bit position: 23 */
    /* 0x0000 */ unsigned long Protection : 5; /* bit position: 24 */
    /* 0x0000 */ unsigned long Spare : 2; /* bit position: 29 */
    /* 0x0000 */ unsigned long PrivateMemory : 1; /* bit position: 31 */
  }; /* bitfield */
} MMVAD_FLAGS, *PMMVAD_FLAGS; /* size: 0x0004 */

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

typedef struct _MMVAD_FLAGS3
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long PreferredNode : 6; /* bit position: 0 */
    /* 0x0000 */ unsigned long Spare : 2; /* bit position: 6 */
    /* 0x0000 */ unsigned long SequentialAccess : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned long LastSequentialTrim : 15; /* bit position: 9 */
    /* 0x0000 */ unsigned long Spare2 : 8; /* bit position: 24 */
  }; /* bitfield */
} MMVAD_FLAGS3, *PMMVAD_FLAGS3; /* size: 0x0004 */

typedef struct _MMVAD_FLAGS2
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned int FileOffset : 24; /* bit position: 0 */
    /* 0x0000 */ unsigned int SecNoChange : 1; /* bit position: 24 */
    /* 0x0000 */ unsigned int OneSecured : 1; /* bit position: 25 */
    /* 0x0000 */ unsigned int MultipleSecured : 1; /* bit position: 26 */
    /* 0x0000 */ unsigned int Spare : 1; /* bit position: 27 */
    /* 0x0000 */ unsigned int LongVad : 1; /* bit position: 28 */
    /* 0x0000 */ unsigned int ExtendableFile : 1; /* bit position: 29 */
    /* 0x0000 */ unsigned int Inherit : 1; /* bit position: 30 */
    /* 0x0000 */ unsigned int CopyOnWrite : 1; /* bit position: 31 */
  }; /* bitfield */
} MMVAD_FLAGS2, *PMMVAD_FLAGS2; /* size: 0x0004 */

typedef struct _MMVAD
{
  union
  {
    union
    {
      /* 0x0000 */ long Balance : 2; /* bit position: 0 */
      /* 0x0000 */ struct _MMVAD* Parent;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  /* 0x0004 */ struct _MMVAD* LeftChild;
  /* 0x0008 */ struct _MMVAD* RightChild;
  /* 0x000c */ unsigned long StartingVpn;
  /* 0x0010 */ unsigned long EndingVpn;
  union
  {
    union
    {
      /* 0x0014 */ unsigned long LongFlags;
      /* 0x0014 */ struct _MMVAD_FLAGS VadFlags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
  /* 0x0018 */ struct _EX_PUSH_LOCK PushLock;
  union
  {
    union
    {
      /* 0x001c */ unsigned long LongFlags3;
      /* 0x001c */ struct _MMVAD_FLAGS3 VadFlags3;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u5;
  union
  {
    union
    {
      /* 0x0020 */ unsigned long LongFlags2;
      /* 0x0020 */ struct _MMVAD_FLAGS2 VadFlags2;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u2;
  union
  {
    /* 0x0024 */ struct _SUBSECTION* Subsection;
    /* 0x0024 */ struct _MSUBSECTION* MappedSubsection;
  }; /* size: 0x0004 */
  /* 0x0028 */ struct _MMPTE* FirstPrototypePte;
  /* 0x002c */ struct _MMPTE* LastContiguousPte;
} MMVAD, *PMMVAD; /* size: 0x0030 */

