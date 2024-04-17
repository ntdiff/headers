struct CRWLock::LockState
{
  struct /* bitfield */
  {
    /* 0x0000 */ volatile unsigned long _numReaders : 10; /* bit position: 0 */
    /* 0x0000 */ volatile unsigned long _writerPresent : 1; /* bit position: 10 */
    /* 0x0000 */ volatile unsigned long _writerSignaled : 1; /* bit position: 11 */
    /* 0x0000 */ volatile unsigned long _readerSignaled : 1; /* bit position: 12 */
    /* 0x0000 */ volatile unsigned long _resetInProgress : 1; /* bit position: 13 */
    /* 0x0000 */ volatile unsigned long _waitingReaders : 9; /* bit position: 14 */
    /* 0x0000 */ volatile unsigned long _waitingWriters : 9; /* bit position: 23 */
  }; /* bitfield */
}; /* size: 0x0004 */

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
    /* 0x0000 */ volatile unsigned long _ulLockState;
  }; /* size: 0x0004 */
  /* 0x0004 */ volatile unsigned long _dwWriterSeqNum;
  /* 0x0008 */ volatile unsigned long _dwWriterID;
  /* 0x000c */ unsigned short _wFlags;
  /* 0x000e */ unsigned short _wWriterLevel;
  union
  {
    /* 0x0010 */ struct CRWLock::EventState _eventState;
    /* 0x0010 */ volatile unsigned long _dwEventState;
    /* 0x0010 */ class EventPoolEntry* volatile _pPoolEntry;
  }; /* size: 0x0004 */
}; /* size: 0x0014 */

