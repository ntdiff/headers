typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_1
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _EX_FAST_REF
{
  union
  {
    /* 0x0000 */ void* Object;
    /* 0x0000 */ unsigned long RefCnt : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned long Value;
  }; /* size: 0x0004 */
} EX_FAST_REF, *PEX_FAST_REF; /* size: 0x0004 */

typedef struct _DISPATCHER_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char Type;
      union
      {
        /* 0x0001 */ unsigned char Abandoned;
        /* 0x0001 */ unsigned char Absolute;
        /* 0x0001 */ unsigned char NpxIrql;
        struct
        {
          /* 0x0001 */ unsigned char Signalling;
          union
          {
            /* 0x0002 */ unsigned char Size;
            struct
            {
              /* 0x0002 */ unsigned char Hand;
              union
              {
                /* 0x0003 */ unsigned char Inserted;
                /* 0x0003 */ unsigned char DebugActive;
                /* 0x0003 */ unsigned char DpcActive;
              }; /* size: 0x0001 */
            }; /* size: 0x0002 */
          }; /* size: 0x0002 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    /* 0x0000 */ volatile long Lock;
  }; /* size: 0x0004 */
  /* 0x0004 */ long SignalState;
  /* 0x0008 */ struct _LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0010 */

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0010 */

typedef struct _PRIVATE_CACHE_MAP_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long DontUse : 16; /* bit position: 0 */
    /* 0x0000 */ unsigned long ReadAheadActive : 1; /* bit position: 16 */
    /* 0x0000 */ unsigned long ReadAheadEnabled : 1; /* bit position: 17 */
    /* 0x0000 */ unsigned long PagePriority : 3; /* bit position: 18 */
    /* 0x0000 */ unsigned long Available : 11; /* bit position: 21 */
  }; /* bitfield */
} PRIVATE_CACHE_MAP_FLAGS, *PPRIVATE_CACHE_MAP_FLAGS; /* size: 0x0004 */

typedef struct _PRIVATE_CACHE_MAP
{
  union
  {
    /* 0x0000 */ short NodeTypeCode;
    /* 0x0000 */ struct _PRIVATE_CACHE_MAP_FLAGS Flags;
    /* 0x0000 */ unsigned long UlongFlags;
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned long ReadAheadMask;
  /* 0x0008 */ struct _FILE_OBJECT* FileObject;
  /* 0x0010 */ union _LARGE_INTEGER FileOffset1;
  /* 0x0018 */ union _LARGE_INTEGER BeyondLastByte1;
  /* 0x0020 */ union _LARGE_INTEGER FileOffset2;
  /* 0x0028 */ union _LARGE_INTEGER BeyondLastByte2;
  /* 0x0030 */ union _LARGE_INTEGER ReadAheadOffset[2];
  /* 0x0040 */ unsigned long ReadAheadLength[2];
  /* 0x0048 */ unsigned long ReadAheadSpinLock;
  /* 0x004c */ struct _LIST_ENTRY PrivateLinks;
  /* 0x0054 */ void* ReadAheadWorkItem;
} PRIVATE_CACHE_MAP, *PPRIVATE_CACHE_MAP; /* size: 0x0058 */

typedef struct _SHARED_CACHE_MAP
{
  /* 0x0000 */ short NodeTypeCode;
  /* 0x0002 */ short NodeByteSize;
  /* 0x0004 */ unsigned long OpenCount;
  /* 0x0008 */ union _LARGE_INTEGER FileSize;
  /* 0x0010 */ struct _LIST_ENTRY BcbList;
  /* 0x0018 */ union _LARGE_INTEGER SectionSize;
  /* 0x0020 */ union _LARGE_INTEGER ValidDataLength;
  /* 0x0028 */ union _LARGE_INTEGER ValidDataGoal;
  /* 0x0030 */ struct _VACB* InitialVacbs[4];
  /* 0x0040 */ struct _VACB** Vacbs;
  /* 0x0044 */ struct _EX_FAST_REF FileObjectFastRef;
  /* 0x0048 */ struct _VACB* volatile ActiveVacb;
  /* 0x004c */ void* volatile NeedToZero;
  /* 0x0050 */ unsigned long ActivePage;
  /* 0x0054 */ unsigned long NeedToZeroPage;
  /* 0x0058 */ unsigned long ActiveVacbSpinLock;
  /* 0x005c */ unsigned long VacbActiveCount;
  /* 0x0060 */ unsigned long DirtyPages;
  /* 0x0064 */ struct _LIST_ENTRY SharedCacheMapLinks;
  /* 0x006c */ unsigned long Flags;
  /* 0x0070 */ long Status;
  /* 0x0074 */ struct _MBCB* Mbcb;
  /* 0x0078 */ void* Section;
  /* 0x007c */ struct _KEVENT* CreateEvent;
  /* 0x0080 */ struct _KEVENT* WaitOnActiveCount;
  /* 0x0084 */ unsigned long PagesToWrite;
  /* 0x0088 */ __int64 BeyondLastFlush;
  /* 0x0090 */ struct _CACHE_MANAGER_CALLBACKS* Callbacks;
  /* 0x0094 */ void* LazyWriteContext;
  /* 0x0098 */ struct _LIST_ENTRY PrivateList;
  /* 0x00a0 */ void* LogHandle;
  /* 0x00a4 */ void* FlushToLsnRoutine /* function */;
  /* 0x00a8 */ unsigned long DirtyPageThreshold;
  /* 0x00ac */ unsigned long LazyWritePassCount;
  /* 0x00b0 */ struct _CACHE_UNINITIALIZE_EVENT* UninitializeEvent;
  /* 0x00b4 */ struct _VACB* NeedToZeroVacb;
  /* 0x00b8 */ unsigned long BcbSpinLock;
  /* 0x00bc */ void* Reserved;
  /* 0x00c0 */ struct _KEVENT Event;
  /* 0x00d0 */ union _LARGE_INTEGER HighWaterMappingOffset;
  /* 0x00d8 */ struct _PRIVATE_CACHE_MAP PrivateCacheMap;
  /* 0x0130 */ void* WriteBehindWorkQueueEntry;
  /* 0x0134 */ struct _VOLUME_CACHE_MAP* VolumeCacheMap;
  /* 0x0138 */ unsigned long ProcImagePathHash;
  /* 0x013c */ unsigned long MappedWritesInProgress;
} SHARED_CACHE_MAP, *PSHARED_CACHE_MAP; /* size: 0x0140 */

