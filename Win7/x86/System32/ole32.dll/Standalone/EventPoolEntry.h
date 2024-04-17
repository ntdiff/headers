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

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef union _SLIST_HEADER
{
  union
  {
    /* 0x0000 */ unsigned __int64 Alignment;
    struct
    {
      /* 0x0000 */ struct _SINGLE_LIST_ENTRY Next;
      /* 0x0004 */ unsigned short Depth;
      /* 0x0006 */ unsigned short Sequence;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0008 */

union EventPoolEntry::InitState
{
  union
  {
    /* 0x0000 */ volatile unsigned long _ulInitState;
    struct /* bitfield */
    {
      /* 0x0000 */ volatile unsigned long _ulNumInitedRWThreads : 14; /* bit position: 0 */
      /* 0x0000 */ volatile unsigned long _ulNumInitedRWLocks : 18; /* bit position: 14 */
    }; /* bitfield */
  }; /* size: 0x0004 */
}; /* size: 0x0004 */

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
      /* 0x000c */ struct _SINGLE_LIST_ENTRY _listEntry;
      /* 0x0010 */ void* _hWriterEvent;
      /* 0x0014 */ volatile unsigned long _dwSpinningWriterID;
    }; /* size: 0x0018 */
    /* 0x0000 */ union _SLIST_HEADER s_eventPool;
    /* 0x0000 */ union EventPoolEntry::InitState s_initState;
  }; /* size: 0x0018 */
}; /* size: 0x0018 */

