enum MAPPED_STREAM_OPTS
{
  MAPPED_STREAM_CREATE = 0,
  MAPPED_STREAM_QI = 1,
};

typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0004 */ long LockCount;
  /* 0x0008 */ long RecursionCount;
  /* 0x000c */ void* OwningThread;
  /* 0x0010 */ void* LockSemaphore;
  /* 0x0014 */ unsigned long SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0018 */

class CCoTaskAllocator
{
}; /* size: 0x0004 */

class CPropertyStorage
{
  /* 0x0004 */ unsigned long _ulSig;
  /* 0x0008 */ long _cRefs;
  /* 0x000c */ struct IStorage* _pstgPropSet;
  /* 0x0010 */ struct IStream* _pstmPropSet;
  /* 0x0014 */ class CPropertySetStream* _np;
  /* 0x0018 */ class IMappedStream* _ms;
  /* 0x001c */ enum MAPPED_STREAM_OPTS _fMSOpts;
  /* 0x0020 */ int _fInitCriticalSection;
  /* 0x0024 */ struct _RTL_CRITICAL_SECTION _CriticalSection;
  struct /* bitfield */
  {
    /* 0x003c */ int _fUserDefinedProperties : 1; /* bit position: 0 */
    /* 0x003c */ int _fExplicitelyProbedForWriteAccess : 1; /* bit position: 1 */
  }; /* bitfield */
  /* 0x0040 */ unsigned short _usCodePage;
  /* 0x0044 */ unsigned long _dwOSVersion;
  /* 0x0048 */ unsigned long _grfFlags;
  /* 0x004c */ unsigned long _grfMode;
  /* 0x0050 */ class CCoTaskAllocator _cCoTaskAllocator;
}; /* size: 0x0054 */

