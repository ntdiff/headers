enum MAPPED_STREAM_OPTS
{
  MAPPED_STREAM_CREATE = 0,
  MAPPED_STREAM_QI = 1,
};

typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0008 */ long LockCount;
  /* 0x000c */ long RecursionCount;
  /* 0x0010 */ void* OwningThread;
  /* 0x0018 */ void* LockSemaphore;
  /* 0x0020 */ unsigned __int64 SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0028 */

class CCoTaskAllocator
{
}; /* size: 0x0008 */

class CPropertyStorage
{
  /* 0x0008 */ unsigned long _ulSig;
  /* 0x000c */ long _cRefs;
  /* 0x0010 */ struct IStorage* _pstgPropSet;
  /* 0x0018 */ struct IStream* _pstmPropSet;
  /* 0x0020 */ class CPropertySetStream* _np;
  /* 0x0028 */ class IMappedStream* _ms;
  /* 0x0030 */ enum MAPPED_STREAM_OPTS _fMSOpts;
  /* 0x0034 */ int _fInitCriticalSection;
  /* 0x0038 */ struct _RTL_CRITICAL_SECTION _CriticalSection;
  struct /* bitfield */
  {
    /* 0x0060 */ int _fUserDefinedProperties : 1; /* bit position: 0 */
    /* 0x0060 */ int _fExplicitelyProbedForWriteAccess : 1; /* bit position: 1 */
  }; /* bitfield */
  /* 0x0064 */ unsigned short _usCodePage;
  /* 0x0068 */ unsigned long _dwOSVersion;
  /* 0x006c */ unsigned long _grfFlags;
  /* 0x0070 */ unsigned long _grfMode;
  /* 0x0078 */ class CCoTaskAllocator _cCoTaskAllocator;
}; /* size: 0x0080 */

