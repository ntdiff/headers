typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _BITMAP_RANGE
{
  /* 0x0000 */ struct _LIST_ENTRY Links;
  /* 0x0010 */ __int64 BasePage;
  /* 0x0018 */ unsigned long FirstDirtyPage;
  /* 0x001c */ unsigned long LastDirtyPage;
  /* 0x0020 */ unsigned long DirtyPages;
  /* 0x0028 */ unsigned long* Bitmap;
} BITMAP_RANGE, *PBITMAP_RANGE; /* size: 0x0030 */

typedef struct _MBCB
{
  /* 0x0000 */ short NodeTypeCode;
  /* 0x0002 */ short NodeIsInZone;
  /* 0x0004 */ unsigned long PagesToWrite;
  /* 0x0008 */ unsigned long DirtyPages;
  /* 0x000c */ unsigned long Reserved;
  /* 0x0010 */ struct _LIST_ENTRY BitmapRanges;
  /* 0x0020 */ __int64 ResumeWritePage;
  /* 0x0028 */ __int64 MostRecentlyDirtiedPage;
  /* 0x0030 */ struct _BITMAP_RANGE BitmapRange1;
  /* 0x0060 */ struct _BITMAP_RANGE BitmapRange2;
  /* 0x0090 */ struct _BITMAP_RANGE BitmapRange3;
} MBCB, *PMBCB; /* size: 0x00c0 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _OWNER_ENTRY
{
  /* 0x0000 */ unsigned __int64 OwnerThread;
  union
  {
    struct /* bitfield */
    {
      /* 0x0008 */ unsigned long IoPriorityBoosted : 1; /* bit position: 0 */
      /* 0x0008 */ unsigned long OwnerReferenced : 1; /* bit position: 1 */
      /* 0x0008 */ unsigned long IoQoSPriorityBoosted : 1; /* bit position: 2 */
      /* 0x0008 */ unsigned long OwnerCount : 29; /* bit position: 3 */
    }; /* bitfield */
    /* 0x0008 */ unsigned long TableSize;
  }; /* size: 0x0004 */
  /* 0x000c */ long __PADDING__[1];
} OWNER_ENTRY, *POWNER_ENTRY; /* size: 0x0010 */

typedef struct _ERESOURCE
{
  /* 0x0000 */ struct _LIST_ENTRY SystemResourcesList;
  /* 0x0010 */ struct _OWNER_ENTRY* OwnerTable;
  /* 0x0018 */ short ActiveCount;
  union
  {
    /* 0x001a */ unsigned short Flag;
    struct
    {
      /* 0x001a */ unsigned char ReservedLowFlags;
      /* 0x001b */ unsigned char WaiterPriority;
    }; /* size: 0x0002 */
  }; /* size: 0x0002 */
  /* 0x0020 */ void* SharedWaiters;
  /* 0x0028 */ void* ExclusiveWaiters;
  /* 0x0030 */ struct _OWNER_ENTRY OwnerEntry;
  /* 0x0040 */ unsigned long ActiveEntries;
  /* 0x0044 */ unsigned long ContentionCount;
  /* 0x0048 */ unsigned long NumberOfSharedWaiters;
  /* 0x004c */ unsigned long NumberOfExclusiveWaiters;
  /* 0x0050 */ volatile char MiscFlags;
  /* 0x0051 */ unsigned char Reserved1[3];
  /* 0x0054 */ unsigned long ResourceTimeoutCount;
  union
  {
    /* 0x0058 */ void* Address;
    /* 0x0058 */ unsigned __int64 CreatorBackTraceIndex;
  }; /* size: 0x0008 */
  /* 0x0060 */ unsigned __int64 SpinLock;
} ERESOURCE, *PERESOURCE; /* size: 0x0068 */

typedef struct _BCB
{
  union
  {
    /* 0x0000 */ struct _MBCB Dummy;
    struct
    {
      /* 0x0000 */ short NodeTypeCode;
      /* 0x0002 */ unsigned char Dirty;
      /* 0x0003 */ unsigned char Reserved;
      /* 0x0004 */ unsigned long ByteLength;
      /* 0x0008 */ union _LARGE_INTEGER FileOffset;
      /* 0x0010 */ struct _LIST_ENTRY BcbLinks;
      /* 0x0020 */ union _LARGE_INTEGER BeyondLastByte;
      /* 0x0028 */ union _LARGE_INTEGER OldestLsn;
      /* 0x0030 */ union _LARGE_INTEGER NewestLsn;
      /* 0x0038 */ struct _VACB* Vacb;
      /* 0x0040 */ unsigned long PinCount;
      /* 0x0048 */ struct _ERESOURCE Resource;
      /* 0x00b0 */ struct _SHARED_CACHE_MAP* SharedCacheMap;
      /* 0x00b8 */ void* BaseAddress;
    }; /* size: 0x00bc */
  }; /* size: 0x00c0 */
} BCB, *PBCB; /* size: 0x00c0 */

