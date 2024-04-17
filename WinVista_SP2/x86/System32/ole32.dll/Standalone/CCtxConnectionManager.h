typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0004 */ long LockCount;
  /* 0x0008 */ long RecursionCount;
  /* 0x000c */ void* OwningThread;
  /* 0x0010 */ void* LockSemaphore;
  /* 0x0014 */ unsigned long SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0018 */

class CMutexSem2
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION m_cs;
  /* 0x0018 */ int m_fCsInitialized;
}; /* size: 0x001c */

class CCtxConnectionManager
{
  /* 0x0000 */ class CpUnkList* _pUnkList;
  /* 0x0004 */ class CObjServer* _pobjServer;
  /* 0x0008 */ volatile int _cObjRefs;
  /* 0x000c */ BOOL _disconnecting;
  /* 0x0010 */ void* _hdisconnectEvent;
  /* 0x0014 */ class CMutexSem2 _mutex;
  /* 0x0030 */ unsigned long _cRefs;
}; /* size: 0x0034 */

