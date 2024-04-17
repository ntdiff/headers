struct CRWLock::EventState
{
  struct /* bitfield */
  {
    /* 0x0000 */ volatile unsigned long _entryIsEventMask : 1; /* bit position: 0 */
    /* 0x0000 */ volatile unsigned long _entryIsMarkedForPooling : 1; /* bit position: 1 */
    /* 0x0000 */ volatile unsigned long _entryIsBeingPooled : 1; /* bit position: 2 */
    /* 0x0000 */ volatile unsigned long _readerEventBeingSignaled : 1; /* bit position: 3 */
    /* 0x0000 */ volatile unsigned long _readerEventBeingReset : 1; /* bit position: 4 */
    /* 0x0000 */ volatile unsigned long _readerCountIsSignalCount : 1; /* bit position: 5 */
    /* 0x0000 */ volatile unsigned long _readerCount : 25; /* bit position: 6 */
    /* 0x0000 */ volatile unsigned long _writerEventSignaled : 1; /* bit position: 31 */
  }; /* bitfield */
}; /* size: 0x0004 */

typedef struct _SLIST_ENTRY
{
  /* 0x0000 */ struct _SLIST_ENTRY* Next;
  /* 0x0008 */ long __PADDING__[2];
} SLIST_ENTRY, *PSLIST_ENTRY; /* size: 0x0010 */

typedef union _SLIST_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Alignment;
      /* 0x0008 */ unsigned __int64 Region;
    }; /* size: 0x0010 */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 9; /* bit position: 16 */
        /* 0x0000 */ unsigned __int64 NextEntry : 39; /* bit position: 25 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 HeaderType : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 Init : 1; /* bit position: 1 */
        /* 0x0008 */ unsigned __int64 Reserved : 59; /* bit position: 2 */
        /* 0x0008 */ unsigned __int64 Region : 3; /* bit position: 61 */
      }; /* bitfield */
    } /* size: 0x0010 */ Header8;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 HeaderType : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 Init : 1; /* bit position: 1 */
        /* 0x0008 */ unsigned __int64 Reserved : 2; /* bit position: 2 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ Header16;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 HeaderType : 1; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 Reserved : 3; /* bit position: 1 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ HeaderX64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

union EventPoolEntry::InitState
{
  union
  {
    /* 0x0000 */ volatile unsigned __int64 _ulInitState;
    struct /* bitfield */
    {
      /* 0x0000 */ volatile unsigned __int64 _ulNumInitedRWThreads : 24; /* bit position: 0 */
      /* 0x0000 */ volatile unsigned __int64 _ulNumInitedRWLocks : 40; /* bit position: 24 */
    }; /* bitfield */
  }; /* size: 0x0008 */
}; /* size: 0x0008 */

class EventPoolEntry
{
  union
  {
    /* 0x0000 */ struct CRWLock::EventState _eventState;
    struct
    {
      /* 0x0000 */ volatile unsigned long _dwEventState;
      /* 0x0004 */ volatile int _bReaderSignaled;
      /* 0x0008 */ void* _hReaderEvent;
      /* 0x0010 */ struct _SLIST_ENTRY _listEntry;
      /* 0x0020 */ void* _hWriterEvent;
      /* 0x0028 */ volatile unsigned long _dwSpinningWriterID;
    }; /* size: 0x002c */
    /* 0x0000 */ union _SLIST_HEADER s_eventPool;
    /* 0x0000 */ union EventPoolEntry::InitState s_initState;
  }; /* size: 0x002c */
}; /* size: 0x0030 */

