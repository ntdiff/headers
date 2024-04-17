typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0008 */ long LockCount;
  /* 0x000c */ long RecursionCount;
  /* 0x0010 */ void* OwningThread;
  /* 0x0018 */ void* LockSemaphore;
  /* 0x0020 */ unsigned __int64 SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0028 */

class CMutexSem2
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION m_cs;
  /* 0x0028 */ int m_fCsInitialized;
}; /* size: 0x0030 */

class CCtxConnectionManager
{
  /* 0x0000 */ class CpUnkList* _pUnkList;
  /* 0x0008 */ class CObjServer* _pobjServer;
  /* 0x0010 */ volatile int _cObjRefs;
  /* 0x0014 */ BOOL _disconnecting;
  /* 0x0018 */ void* _hdisconnectEvent;
  /* 0x0020 */ class CMutexSem2 _mutex;
  /* 0x0050 */ unsigned long _cRefs;
}; /* size: 0x0058 */

