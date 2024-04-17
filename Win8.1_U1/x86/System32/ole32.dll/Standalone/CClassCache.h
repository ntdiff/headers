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
    struct
    {
      /* 0x0000 */ volatile unsigned long _ulLockState;
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
    /* 0x0000 */ unsigned long s_dwDefaultTimeout;
    /* 0x0000 */ unsigned long s_dwDefaultSpinCount;
    /* 0x0000 */ unsigned long s_dwNumberOfProcessors;
  }; /* size: 0x0014 */
}; /* size: 0x0014 */

class CClassCache::CCEHashTable
{
}; /* size: 0x0018 */

class CActivatableClassIdHashTable
{
}; /* size: 0x0018 */

class CClassCache::CDPEHashTable
{
}; /* size: 0x0018 */

struct SHashChain
{
  /* 0x0000 */ struct SHashChain* pNext;
  /* 0x0004 */ struct SHashChain* pPrev;
}; /* size: 0x0008 */

class CClassCache
{
  union
  {
    /* 0x0000 */ unsigned long _dwFlags;
    /* 0x0000 */ class CRWLock _mxs;
    /* 0x0000 */ class CClassCache::CCEHashTable _ClassEntries;
    /* 0x0000 */ class CActivatableClassIdHashTable _LSvrActivatableClassEntries;
    /* 0x0000 */ class CActivatableClassIdHashTable _InprocActivatableClassEntries;
    /* 0x0000 */ class CClassCache::CDPEHashTable _DllPathEntries;
    /* 0x0000 */ const unsigned long _cCEBuckets;
    /* 0x0000 */ const unsigned long _cLSvrActivatableClassEBuckets;
    /* 0x0000 */ const unsigned long _cInprocActivatableClassEBuckets;
    /* 0x0000 */ const unsigned long _cDPEBuckets;
    /* 0x0000 */ struct SHashChain _CEBuckets[23];
    /* 0x0000 */ struct SHashChain _LSvrActivatableClassEBuckets[23];
    /* 0x0000 */ struct SHashChain _InprocActivatableClassEBuckets[23];
    /* 0x0000 */ struct SHashChain _DPEBuckets[23];
    /* 0x0000 */ class CClassCache::CLSvrClassEntry* _MTALSvrsFront;
    /* 0x0000 */ class CClassCache::CLSvrClassEntry* _NTALSvrsFront;
    /* 0x0000 */ unsigned long _cRefsServerProcess;
    /* 0x0000 */ void* _hSuspended;
    /* 0x0000 */ unsigned long _dwDelayMilliseconds;
    /* 0x0000 */ struct _TP_TIMER* _ShutdownDelayTimer;
    /* 0x0000 */ int _bCanceledTimer;
    /* 0x0000 */ class CClassCache::CServiceRefEntry* _ServiceRefsFront;
    /* 0x0000 */ class CClassCache::CWinRTLocalSvrClassEntry* _STAWinRTLSvrsFront;
    /* 0x0000 */ class CClassCache::CWinRTLocalSvrClassEntry* _MTAWinRTLSvrsFront;
    /* 0x0000 */ const unsigned long _CollectAtObjectCount;
    /* 0x0000 */ const unsigned long _CollectAtInterval;
    /* 0x0000 */ unsigned long _LastCollectionTickCount;
    /* 0x0000 */ unsigned long _LastObjectCount;
    /* 0x0000 */ class CClassCache::CCollectable* _ObjectsForCollection;
  }; /* size: 0x00b8 */
}; /* size: 0x0001 */

