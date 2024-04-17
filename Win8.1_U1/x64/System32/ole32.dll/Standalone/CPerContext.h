class CDfMutex
{
  /* 0x0000 */ struct _GLOBAL_SHARED_CRITICAL_SECTION* _pGlobalPortion;
  /* 0x0008 */ void* _hLockEvent;
}; /* size: 0x0010 */

class CPerContext
{
  /* 0x0010 */ struct ILockBytes* _plkbBase;
  /* 0x0018 */ struct CFileStream* _pfstDirty;
  /* 0x0020 */ struct ILockBytes* _plkbOriginal;
  /* 0x0028 */ unsigned long _ulOpenLock;
  /* 0x0030 */ class CGlobalContext* _pgc;
  /* 0x0038 */ long _cReferences;
  /* 0x0040 */ struct IMalloc* const _pMalloc;
  /* 0x0048 */ struct IFillInfo* _pfi;
  /* 0x0050 */ void* _hNotificationEvent;
  /* 0x0058 */ class CSharedMemoryBlock* _psmb;
  /* 0x0060 */ unsigned char* _pbBase;
  /* 0x0068 */ unsigned long _ulHeapName;
  /* 0x0070 */ class CDfMutex _dmtx;
  /* 0x0080 */ unsigned long _cRecursion;
}; /* size: 0x0088 */

