typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0008 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  union
  {
    /* 0x0010 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0010 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0010 */ unsigned __int64 ParentValue;
  }; /* size: 0x0008 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x0018 */

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

typedef struct _MMVAD_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Lock : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long LockContended : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long DeleteInProgress : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long NoChange : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long VadType : 3; /* bit position: 4 */
      /* 0x0000 */ unsigned long Protection : 5; /* bit position: 7 */
      /* 0x0000 */ unsigned long PreferredNode : 7; /* bit position: 12 */
      /* 0x0000 */ unsigned long PageSize : 2; /* bit position: 19 */
      /* 0x0000 */ unsigned long PrivateMemory : 1; /* bit position: 21 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long EntireField;
  }; /* size: 0x0004 */
} MMVAD_FLAGS, *PMMVAD_FLAGS; /* size: 0x0004 */

typedef struct _MM_PRIVATE_VAD_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Lock : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long LockContended : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long DeleteInProgress : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long NoChange : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long VadType : 3; /* bit position: 4 */
    /* 0x0000 */ unsigned long Protection : 5; /* bit position: 7 */
    /* 0x0000 */ unsigned long PreferredNode : 7; /* bit position: 12 */
    /* 0x0000 */ unsigned long PageSize : 2; /* bit position: 19 */
    /* 0x0000 */ unsigned long PrivateMemoryAlwaysSet : 1; /* bit position: 21 */
    /* 0x0000 */ unsigned long WriteWatch : 1; /* bit position: 22 */
    /* 0x0000 */ unsigned long FixedLargePageSize : 1; /* bit position: 23 */
    /* 0x0000 */ unsigned long ZeroFillPagesOptional : 1; /* bit position: 24 */
    /* 0x0000 */ unsigned long MemCommit : 1; /* bit position: 25 */
    /* 0x0000 */ unsigned long Graphics : 1; /* bit position: 26 */
    /* 0x0000 */ unsigned long Enclave : 1; /* bit position: 27 */
    /* 0x0000 */ unsigned long ShadowStack : 1; /* bit position: 28 */
    /* 0x0000 */ unsigned long PhysicalMemoryPfnsReferenced : 1; /* bit position: 29 */
  }; /* bitfield */
} MM_PRIVATE_VAD_FLAGS, *PMM_PRIVATE_VAD_FLAGS; /* size: 0x0004 */

typedef struct _MM_GRAPHICS_VAD_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Lock : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long LockContended : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long DeleteInProgress : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long NoChange : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long VadType : 3; /* bit position: 4 */
    /* 0x0000 */ unsigned long Protection : 5; /* bit position: 7 */
    /* 0x0000 */ unsigned long PreferredNode : 7; /* bit position: 12 */
    /* 0x0000 */ unsigned long PageSize : 2; /* bit position: 19 */
    /* 0x0000 */ unsigned long PrivateMemoryAlwaysSet : 1; /* bit position: 21 */
    /* 0x0000 */ unsigned long WriteWatch : 1; /* bit position: 22 */
    /* 0x0000 */ unsigned long FixedLargePageSize : 1; /* bit position: 23 */
    /* 0x0000 */ unsigned long ZeroFillPagesOptional : 1; /* bit position: 24 */
    /* 0x0000 */ unsigned long MemCommit : 1; /* bit position: 25 */
    /* 0x0000 */ unsigned long GraphicsAlwaysSet : 1; /* bit position: 26 */
    /* 0x0000 */ unsigned long GraphicsUseCoherentBus : 1; /* bit position: 27 */
    /* 0x0000 */ unsigned long GraphicsNoCache : 1; /* bit position: 28 */
    /* 0x0000 */ unsigned long GraphicsPageProtection : 3; /* bit position: 29 */
  }; /* bitfield */
} MM_GRAPHICS_VAD_FLAGS, *PMM_GRAPHICS_VAD_FLAGS; /* size: 0x0004 */

typedef struct _MM_SHARED_VAD_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Lock : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long LockContended : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long DeleteInProgress : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long NoChange : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long VadType : 3; /* bit position: 4 */
    /* 0x0000 */ unsigned long Protection : 5; /* bit position: 7 */
    /* 0x0000 */ unsigned long PreferredNode : 7; /* bit position: 12 */
    /* 0x0000 */ unsigned long PageSize : 2; /* bit position: 19 */
    /* 0x0000 */ unsigned long PrivateMemoryAlwaysClear : 1; /* bit position: 21 */
    /* 0x0000 */ unsigned long PrivateFixup : 1; /* bit position: 22 */
    /* 0x0000 */ unsigned long HotPatchState : 2; /* bit position: 23 */
  }; /* bitfield */
} MM_SHARED_VAD_FLAGS, *PMM_SHARED_VAD_FLAGS; /* size: 0x0004 */

typedef struct _MMVAD_SHORT
{
  union
  {
    struct
    {
      /* 0x0000 */ struct _MMVAD_SHORT* NextVad;
      /* 0x0008 */ void* ExtraCreateInfo;
    }; /* size: 0x0010 */
    /* 0x0000 */ struct _RTL_BALANCED_NODE VadNode;
  }; /* size: 0x0018 */
  /* 0x0018 */ unsigned long StartingVpn;
  /* 0x001c */ unsigned long EndingVpn;
  /* 0x0020 */ unsigned char StartingVpnHigh;
  /* 0x0021 */ unsigned char EndingVpnHigh;
  /* 0x0022 */ unsigned char CommitChargeHigh;
  /* 0x0023 */ unsigned char SpareNT64VadUChar;
  /* 0x0024 */ volatile long ReferenceCount;
  /* 0x0028 */ struct _EX_PUSH_LOCK PushLock;
  union
  {
    union
    {
      /* 0x0030 */ unsigned long LongFlags;
      /* 0x0030 */ struct _MMVAD_FLAGS VadFlags;
      /* 0x0030 */ struct _MM_PRIVATE_VAD_FLAGS PrivateVadFlags;
      /* 0x0030 */ struct _MM_GRAPHICS_VAD_FLAGS GraphicsVadFlags;
      /* 0x0030 */ struct _MM_SHARED_VAD_FLAGS SharedVadFlags;
      /* 0x0030 */ volatile unsigned long VolatileVadLong;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
  /* 0x0034 */ unsigned long CommitCharge;
  union
  {
    /* 0x0038 */ struct _MI_VAD_EVENT_BLOCK* EventList;
  } /* size: 0x0008 */ u5;
} MMVAD_SHORT, *PMMVAD_SHORT; /* size: 0x0040 */

