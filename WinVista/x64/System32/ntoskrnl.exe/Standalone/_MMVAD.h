typedef struct _MMVAD_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 CommitCharge : 51; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 NoChange : 1; /* bit position: 51 */
    /* 0x0000 */ unsigned __int64 VadType : 3; /* bit position: 52 */
    /* 0x0000 */ unsigned __int64 MemCommit : 1; /* bit position: 55 */
    /* 0x0000 */ unsigned __int64 Protection : 5; /* bit position: 56 */
    /* 0x0000 */ unsigned __int64 Spare : 2; /* bit position: 61 */
    /* 0x0000 */ unsigned __int64 PrivateMemory : 1; /* bit position: 63 */
  }; /* bitfield */
} MMVAD_FLAGS, *PMMVAD_FLAGS; /* size: 0x0008 */

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

typedef struct _MMVAD_FLAGS3
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 PreferredNode : 6; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Spare : 2; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 SequentialAccess : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned __int64 LastSequentialTrim : 15; /* bit position: 9 */
    /* 0x0000 */ unsigned __int64 Spare2 : 8; /* bit position: 24 */
    /* 0x0000 */ unsigned __int64 LargePageCreating : 1; /* bit position: 32 */
    /* 0x0000 */ unsigned __int64 Spare3 : 31; /* bit position: 33 */
  }; /* bitfield */
} MMVAD_FLAGS3, *PMMVAD_FLAGS3; /* size: 0x0008 */

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
  union // _TAG_UNNAMED_95
  {
    union
    {
      /* 0x0000 */ __int64 Balance : 2; /* bit position: 0 */
      /* 0x0000 */ struct _MMVAD* Parent;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
  /* 0x0008 */ struct _MMVAD* LeftChild;
  /* 0x0010 */ struct _MMVAD* RightChild;
  /* 0x0018 */ unsigned __int64 StartingVpn;
  /* 0x0020 */ unsigned __int64 EndingVpn;
  union // _TAG_UNNAMED_96
  {
    union
    {
      /* 0x0028 */ unsigned __int64 LongFlags;
      /* 0x0028 */ struct _MMVAD_FLAGS VadFlags;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u;
  /* 0x0030 */ struct _EX_PUSH_LOCK PushLock;
  union // _TAG_UNNAMED_97
  {
    union
    {
      /* 0x0038 */ unsigned __int64 LongFlags3;
      /* 0x0038 */ struct _MMVAD_FLAGS3 VadFlags3;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u5;
  union // _TAG_UNNAMED_116
  {
    union
    {
      /* 0x0040 */ unsigned long LongFlags2;
      /* 0x0040 */ struct _MMVAD_FLAGS2 VadFlags2;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u2;
  union
  {
    /* 0x0048 */ struct _SUBSECTION* Subsection;
    /* 0x0048 */ struct _MSUBSECTION* MappedSubsection;
  }; /* size: 0x0008 */
  /* 0x0050 */ struct _MMPTE* FirstPrototypePte;
  /* 0x0058 */ struct _MMPTE* LastContiguousPte;
} MMVAD, *PMMVAD; /* size: 0x0060 */

