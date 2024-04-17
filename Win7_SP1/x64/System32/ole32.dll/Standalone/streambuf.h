typedef struct _CRT_CRITICAL_SECTION
{
  /* 0x0000 */ struct _CRT_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0008 */ long LockCount;
  /* 0x000c */ long RecursionCount;
  /* 0x0010 */ void* OwningThread;
  /* 0x0018 */ void* LockSemaphore;
  /* 0x0020 */ unsigned long Reserved;
  /* 0x0024 */ long __PADDING__[1];
} CRT_CRITICAL_SECTION, *PCRT_CRITICAL_SECTION; /* size: 0x0028 */

class streambuf
{
  /* 0x0008 */ int _fAlloc;
  /* 0x000c */ int _fUnbuf;
  /* 0x0010 */ int x_lastc;
  /* 0x0018 */ char* _base;
  /* 0x0020 */ char* _ebuf;
  /* 0x0028 */ char* _pbase;
  /* 0x0030 */ char* _pptr;
  /* 0x0038 */ char* _epptr;
  /* 0x0040 */ char* _eback;
  /* 0x0048 */ char* _gptr;
  /* 0x0050 */ char* _egptr;
  /* 0x0058 */ int LockFlg;
  /* 0x0060 */ struct _CRT_CRITICAL_SECTION x_lock;
}; /* size: 0x0088 */

