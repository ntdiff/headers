typedef struct _MI_AWEINFO_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long ProcessDefault : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long PagesLockInitialized : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long ZeroPagesOptional : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long IoSpace : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long LazyTbFlush : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long Unused : 27; /* bit position: 5 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AllBits;
  }; /* size: 0x0004 */
} MI_AWEINFO_FLAGS, *PMI_AWEINFO_FLAGS; /* size: 0x0004 */

typedef struct _RTL_BITMAP_EX
{
  /* 0x0000 */ unsigned __int64 SizeOfBitMap;
  /* 0x0008 */ unsigned __int64* Buffer;
} RTL_BITMAP_EX, *PRTL_BITMAP_EX; /* size: 0x0010 */

typedef enum _MI_PFN_CACHE_ATTRIBUTE
{
  MiNonCached = 0,
  MiCached = 1,
  MiWriteCombined = 2,
  MiNotMapped = 3,
} MI_PFN_CACHE_ATTRIBUTE, *PMI_PFN_CACHE_ATTRIBUTE;

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

typedef struct _EX_PUSH_LOCK_AUTO_EXPAND_STATE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Expanded : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Transitioning : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Pageable : 1; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
  }; /* size: 0x0004 */
} EX_PUSH_LOCK_AUTO_EXPAND_STATE, *PEX_PUSH_LOCK_AUTO_EXPAND_STATE; /* size: 0x0004 */

typedef struct _EX_PUSH_LOCK_AUTO_EXPAND
{
  /* 0x0000 */ struct _EX_PUSH_LOCK LocalLock;
  /* 0x0008 */ struct _EX_PUSH_LOCK_AUTO_EXPAND_STATE State;
  /* 0x000c */ unsigned long Stats;
} EX_PUSH_LOCK_AUTO_EXPAND, *PEX_PUSH_LOCK_AUTO_EXPAND; /* size: 0x0010 */

typedef struct _AWEINFO
{
  /* 0x0000 */ void* AweInfoSignature;
  /* 0x0008 */ struct _MI_AWEINFO_FLAGS Flags;
  /* 0x0010 */ unsigned __int64 PageSize;
  /* 0x0018 */ struct _RTL_BITMAP_EX VadPhysicalPagesBitMap;
  /* 0x0028 */ struct _CONTROL_AREA* ControlArea;
  /* 0x0030 */ volatile long ChangeClusterAttributeLock;
  /* 0x0034 */ enum _MI_PFN_CACHE_ATTRIBUTE CacheAttribute;
  /* 0x0080 */ struct _EX_PUSH_LOCK_AUTO_EXPAND AwePagesLock;
  /* 0x0090 */ struct _MI_AWE_ATTRIBUTE_CHANGE_WAIT_BLOCK* ChangeClusterAttributeWaitList;
  /* 0x0098 */ long __PADDING__[26];
} AWEINFO, *PAWEINFO; /* size: 0x0100 */

