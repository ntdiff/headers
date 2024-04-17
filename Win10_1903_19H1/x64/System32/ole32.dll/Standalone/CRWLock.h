struct CRWLock::LockState
{
  struct /* bitfield */
  {
    /* 0x0000 */ volatile unsigned __int64 _numReaders : 20; /* bit position: 0 */
    /* 0x0000 */ volatile unsigned __int64 _writerPresent : 1; /* bit position: 20 */
    /* 0x0000 */ volatile unsigned __int64 _writerSignaled : 1; /* bit position: 21 */
    /* 0x0000 */ volatile unsigned __int64 _readerSignaled : 1; /* bit position: 22 */
    /* 0x0000 */ volatile unsigned __int64 _resetInProgress : 1; /* bit position: 23 */
    /* 0x0000 */ volatile unsigned __int64 _waitingReaders : 20; /* bit position: 24 */
    /* 0x0000 */ volatile unsigned __int64 _waitingWriters : 20; /* bit position: 44 */
  }; /* bitfield */
}; /* size: 0x0008 */

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

class CRWLock
{
  union
  {
    /* 0x0000 */ struct CRWLock::LockState _lockState;
    /* 0x0000 */ volatile unsigned __int64 _ulLockState;
  }; /* size: 0x0008 */
  /* 0x0008 */ volatile unsigned long _dwWriterSeqNum;
  /* 0x000c */ volatile unsigned long _dwWriterID;
  /* 0x0010 */ unsigned short _wFlags;
  /* 0x0012 */ unsigned short _wWriterLevel;
  union
  {
    /* 0x0018 */ struct CRWLock::EventState _eventState;
    struct
    {
      /* 0x0018 */ volatile unsigned long _dwEventState;
      /* 0x001c */ volatile unsigned long _dwHighPart;
    }; /* size: 0x0008 */
    /* 0x0018 */ class EventPoolEntry* volatile _pPoolEntry;
  }; /* size: 0x0008 */
}; /* size: 0x0020 */

