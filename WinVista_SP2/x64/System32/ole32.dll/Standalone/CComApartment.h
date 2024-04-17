enum tagAPTKIND
{
  APTKIND_NEUTRALTHREADED = 1,
  APTKIND_MULTITHREADED = 2,
  APTKIND_APARTMENTTHREADED = 4,
};

struct CComApartment::MessageListHead
{
  /* 0x0000 */ class IMessageParam* pFirst;
  /* 0x0008 */ class IMessageParam* pLast;
}; /* size: 0x0010 */

typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0008 */ long LockCount;
  /* 0x000c */ long RecursionCount;
  /* 0x0010 */ void* OwningThread;
  /* 0x0018 */ void* LockSemaphore;
  /* 0x0020 */ unsigned __int64 SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0028 */

class CComApartment
{
  /* 0x0008 */ unsigned long _cRefs;
  /* 0x000c */ unsigned long _dwState;
  /* 0x0010 */ enum tagAPTKIND _AptKind;
  /* 0x0014 */ unsigned long _AptId;
  /* 0x0018 */ class OXIDEntry* _pOXIDEntry;
  /* 0x0020 */ class CRemoteUnknown* _pRemUnk;
  /* 0x0028 */ long _cWaiters;
  /* 0x0030 */ void* _hEventOID;
  /* 0x0038 */ unsigned long _cPreRegOidsAvail;
  /* 0x0040 */ unsigned __int64 _arPreRegOids[20];
  /* 0x00e0 */ unsigned long _cOidsReturn;
  /* 0x00e8 */ unsigned __int64 _arOidsReturn[20];
  /* 0x0188 */ struct CComApartment::MessageListHead _arMessageParams[8];
  /* 0x0208 */ int _fInitializedCS;
  /* 0x0210 */ struct _RTL_CRITICAL_SECTION _csMessageParams;
}; /* size: 0x0238 */

