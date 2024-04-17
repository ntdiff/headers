typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagSTDOBJREF
{
  /* 0x0000 */ unsigned long flags;
  /* 0x0004 */ unsigned long cPublicRefs;
  /* 0x0008 */ unsigned __int64 oxid;
  /* 0x0010 */ unsigned __int64 oid;
  /* 0x0018 */ struct _GUID ipid;
}; /* size: 0x0028 */

struct tagDUALSTRINGARRAY
{
  /* 0x0000 */ unsigned short wNumEntries;
  /* 0x0002 */ unsigned short wSecurityOffset;
  /* 0x0004 */ unsigned short aStringArray[1];
}; /* size: 0x0006 */

struct tagOBJREF
{
  /* 0x0000 */ unsigned long signature;
  /* 0x0004 */ unsigned long flags;
  /* 0x0008 */ struct _GUID iid;
  union
  {
    union
    {
      struct
      {
        /* 0x0018 */ struct tagSTDOBJREF std;
        /* 0x0040 */ struct tagDUALSTRINGARRAY saResAddr;
        /* 0x0046 */ char __PADDING__[2];
      } /* size: 0x0030 */ u_standard;
      struct
      {
        /* 0x0018 */ struct tagSTDOBJREF std;
        /* 0x0040 */ struct _GUID clsid;
        /* 0x0050 */ struct tagDUALSTRINGARRAY saResAddr;
        /* 0x0056 */ char __PADDING__[2];
      } /* size: 0x0040 */ u_handler;
      struct
      {
        /* 0x0018 */ struct _GUID clsid;
        /* 0x0028 */ unsigned long cbExtension;
        /* 0x002c */ unsigned long size;
        /* 0x0030 */ unsigned char* pData;
      } /* size: 0x001c */ u_custom;
      struct
      {
        /* 0x0018 */ struct tagSTDOBJREF std;
        /* 0x0040 */ struct tagOBJREFDATA* pORData;
        /* 0x0044 */ struct tagDUALSTRINGARRAY saResAddr;
        /* 0x004a */ char __PADDING__[6];
      } /* size: 0x0038 */ u_extended;
    }; /* size: 0x0040 */
  } /* size: 0x0040 */ u_objref;
}; /* size: 0x0058 */

typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0004 */ long LockCount;
  /* 0x0008 */ long RecursionCount;
  /* 0x000c */ void* OwningThread;
  /* 0x0010 */ void* LockSemaphore;
  /* 0x0014 */ unsigned long SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0018 */

class COleStaticMutexSem
{
  /* 0x0000 */ class COleStaticMutexSem* pNextMutex;
  /* 0x0004 */ unsigned char _fInitialized;
  /* 0x0005 */ unsigned char _fAutoDestruct;
  /* 0x0006 */ unsigned char _fUseSpincount;
  /* 0x0008 */ unsigned long _cLocks;
  /* 0x000c */ unsigned long _dwLine;
  /* 0x0010 */ const char* _pszFile;
  /* 0x0014 */ const char* _pszLockName;
  /* 0x0018 */ struct _RTL_CRITICAL_SECTION _cs;
}; /* size: 0x0030 */

class CDllHost
{
  /* 0x000c */ struct IDLLHost* _pIDllProxy;
  /* 0x0010 */ class CStdIdentity* _pStdId;
  /* 0x0014 */ unsigned long _dwType;
  /* 0x0018 */ unsigned long _dwHostAptId;
  /* 0x001c */ unsigned long _hActivator;
  /* 0x0020 */ unsigned long _dwTid;
  /* 0x0024 */ HRESULT _hrMarshal;
  /* 0x0028 */ void* _hEvent;
  /* 0x002c */ void* _hEventWakeUp;
  /* 0x0030 */ HRESULT _hr;
  /* 0x0038 */ struct tagOBJREF _objref;
  /* 0x0090 */ class COleStaticMutexSem _mxs;
}; /* size: 0x00c0 */

