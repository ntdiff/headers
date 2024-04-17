enum tagAPTKIND
{
  APTKIND_NEUTRALTHREADED = 1,
  APTKIND_MULTITHREADED = 2,
  APTKIND_APARTMENTTHREADED = 4,
};

struct CComApartment::MessageListHead
{
  /* 0x0000 */ class IMessageParam* pFirst;
  /* 0x0004 */ class IMessageParam* pLast;
}; /* size: 0x0008 */

typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0004 */ long LockCount;
  /* 0x0008 */ long RecursionCount;
  /* 0x000c */ void* OwningThread;
  /* 0x0010 */ void* LockSemaphore;
  /* 0x0014 */ unsigned long SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0018 */

class CComApartment
{
  /* 0x0004 */ unsigned long _cRefs;
  /* 0x0008 */ unsigned long _dwState;
  /* 0x000c */ enum tagAPTKIND _AptKind;
  /* 0x0010 */ unsigned long _AptId;
  /* 0x0014 */ class OXIDEntry* _pOXIDEntry;
  /* 0x0018 */ class CRemoteUnknown* _pRemUnk;
  /* 0x001c */ long _cWaiters;
  /* 0x0020 */ void* _hEventOID;
  /* 0x0024 */ unsigned long _cPreRegOidsAvail;
  /* 0x0028 */ unsigned __int64 _arPreRegOids[20];
  /* 0x00c8 */ unsigned long _cOidsReturn;
  /* 0x00d0 */ unsigned __int64 _arOidsReturn[20];
  /* 0x0170 */ struct CComApartment::MessageListHead _arMessageParams[8];
  /* 0x01b0 */ int _fInitializedCS;
  /* 0x01b4 */ struct _RTL_CRITICAL_SECTION _csMessageParams;
}; /* size: 0x01d0 */

