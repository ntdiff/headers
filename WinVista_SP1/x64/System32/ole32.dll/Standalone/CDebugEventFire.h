typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0008 */ long LockCount;
  /* 0x000c */ long RecursionCount;
  /* 0x0010 */ void* OwningThread;
  /* 0x0018 */ void* LockSemaphore;
  /* 0x0020 */ unsigned __int64 SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0028 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class CDebugEventFire
{
  /* 0x0008 */ unsigned long _cRef;
  /* 0x0010 */ struct _RTL_CRITICAL_SECTION _csEventFire;
  /* 0x0038 */ int _fLogDisabled;
  /* 0x003c */ struct _GUID _guidSession;
  /* 0x0050 */ wchar_t* _strSessionName;
  /* 0x0058 */ struct ISystemDebugEventFire* _pEventFire;
  /* 0x0060 */ struct IUnknown* _punkFTM;
}; /* size: 0x0068 */

