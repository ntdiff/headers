class CDfMutex
{
  /* 0x0000 */ struct _GLOBAL_SHARED_CRITICAL_SECTION* _pGlobalPortion;
  /* 0x0004 */ void* _hLockEvent;
}; /* size: 0x0008 */

class CPerContext
{
  /* 0x0008 */ struct ILockBytes* _plkbBase;
  /* 0x000c */ struct CFileStream* _pfstDirty;
  /* 0x0010 */ struct ILockBytes* _plkbOriginal;
  /* 0x0014 */ unsigned long _ulOpenLock;
  /* 0x0018 */ class CGlobalContext* _pgc;
  /* 0x001c */ long _cReferences;
  /* 0x0020 */ struct IMalloc* const _pMalloc;
  /* 0x0024 */ struct IFillInfo* _pfi;
  /* 0x0028 */ void* _hNotificationEvent;
  /* 0x002c */ class CSharedMemoryBlock* _psmb;
  /* 0x0030 */ unsigned char* _pbBase;
  /* 0x0034 */ unsigned long _ulHeapName;
  /* 0x0038 */ class CDfMutex _dmtx;
  /* 0x0040 */ unsigned long _cRecursion;
}; /* size: 0x0044 */

