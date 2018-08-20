typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_5
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
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _EX_FAST_REF
{
  union
  {
    /* 0x0000 */ void* Object;
    /* 0x0000 */ unsigned __int64 RefCnt : 4; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 Value;
  }; /* size: 0x0008 */
} EX_FAST_REF, *PEX_FAST_REF; /* size: 0x0008 */

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
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0018 */

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0018 */

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
  /* 0x0048 */ unsigned __int64 ReadAheadSpinLock;
  /* 0x0050 */ struct _LIST_ENTRY PrivateLinks;
} PRIVATE_CACHE_MAP, *PPRIVATE_CACHE_MAP; /* size: 0x0060 */

typedef struct _SHARED_CACHE_MAP
{
  /* 0x0000 */ short NodeTypeCode;
  /* 0x0002 */ short NodeByteSize;
  /* 0x0004 */ unsigned long OpenCount;
  /* 0x0008 */ union _LARGE_INTEGER FileSize;
  /* 0x0010 */ struct _LIST_ENTRY BcbList;
  /* 0x0020 */ union _LARGE_INTEGER SectionSize;
  /* 0x0028 */ union _LARGE_INTEGER ValidDataLength;
  /* 0x0030 */ union _LARGE_INTEGER ValidDataGoal;
  /* 0x0038 */ struct _VACB* InitialVacbs[4];
  /* 0x0058 */ struct _VACB** Vacbs;
  /* 0x0060 */ struct _EX_FAST_REF FileObjectFastRef;
  /* 0x0068 */ struct _VACB* volatile ActiveVacb;
  /* 0x0070 */ void* volatile NeedToZero;
  /* 0x0078 */ unsigned long ActivePage;
  /* 0x007c */ unsigned long NeedToZeroPage;
  /* 0x0080 */ unsigned __int64 ActiveVacbSpinLock;
  /* 0x0088 */ unsigned long VacbActiveCount;
  /* 0x008c */ unsigned long DirtyPages;
  /* 0x0090 */ struct _LIST_ENTRY SharedCacheMapLinks;
  /* 0x00a0 */ unsigned long Flags;
  /* 0x00a4 */ long Status;
  /* 0x00a8 */ struct _MBCB* Mbcb;
  /* 0x00b0 */ void* Section;
  /* 0x00b8 */ struct _KEVENT* CreateEvent;
  /* 0x00c0 */ struct _KEVENT* WaitOnActiveCount;
  /* 0x00c8 */ unsigned long PagesToWrite;
  /* 0x00d0 */ __int64 BeyondLastFlush;
  /* 0x00d8 */ struct _CACHE_MANAGER_CALLBACKS* Callbacks;
  /* 0x00e0 */ void* LazyWriteContext;
  /* 0x00e8 */ struct _LIST_ENTRY PrivateList;
  /* 0x00f8 */ void* LogHandle;
  /* 0x0100 */ void* FlushToLsnRoutine /* function */;
  /* 0x0108 */ unsigned long DirtyPageThreshold;
  /* 0x010c */ unsigned long LazyWritePassCount;
  /* 0x0110 */ struct _CACHE_UNINITIALIZE_EVENT* UninitializeEvent;
  /* 0x0118 */ struct _VACB* NeedToZeroVacb;
  /* 0x0120 */ unsigned __int64 BcbSpinLock;
  /* 0x0128 */ void* Reserved;
  /* 0x0130 */ struct _KEVENT Event;
  /* 0x0148 */ union _LARGE_INTEGER HighWaterMappingOffset;
  /* 0x0150 */ struct _PRIVATE_CACHE_MAP PrivateCacheMap;
  /* 0x01b0 */ void* WriteBehindWorkQueueEntry;
  /* 0x01b8 */ struct _VOLUME_CACHE_MAP* VolumeCacheMap;
  /* 0x01c0 */ unsigned long ProcImagePathHash;
  /* 0x01c4 */ unsigned long MappedWritesInProgress;
} SHARED_CACHE_MAP, *PSHARED_CACHE_MAP; /* size: 0x01c8 */

