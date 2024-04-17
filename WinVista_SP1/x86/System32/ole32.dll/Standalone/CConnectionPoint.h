typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0004 */ long LockCount;
  /* 0x0008 */ long RecursionCount;
  /* 0x000c */ void* OwningThread;
  /* 0x0010 */ void* LockSemaphore;
  /* 0x0014 */ unsigned long SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0018 */

class CConnectionPoint
{
  /* 0x0004 */ unsigned long _dwCookie;
  /* 0x0008 */ long _cReferences;
  /* 0x000c */ class CSinkList* _pSinkHead;
  /* 0x0010 */ struct IDocfileAsyncConnectionPoint* _pParentCP;
  /* 0x0014 */ int _fCSInitialized;
  /* 0x0018 */ struct _RTL_CRITICAL_SECTION _csSinkList;
}; /* size: 0x0030 */

