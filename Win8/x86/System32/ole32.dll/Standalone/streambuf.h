typedef struct _CRT_CRITICAL_SECTION
{
  /* 0x0000 */ struct _CRT_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0004 */ long LockCount;
  /* 0x0008 */ long RecursionCount;
  /* 0x000c */ void* OwningThread;
  /* 0x0010 */ void* LockSemaphore;
  /* 0x0014 */ unsigned long Reserved;
} CRT_CRITICAL_SECTION, *PCRT_CRITICAL_SECTION; /* size: 0x0018 */

class streambuf
{
  /* 0x0004 */ int _fAlloc;
  /* 0x0008 */ int _fUnbuf;
  /* 0x000c */ int x_lastc;
  /* 0x0010 */ char* _base;
  /* 0x0014 */ char* _ebuf;
  /* 0x0018 */ char* _pbase;
  /* 0x001c */ char* _pptr;
  /* 0x0020 */ char* _epptr;
  /* 0x0024 */ char* _eback;
  /* 0x0028 */ char* _gptr;
  /* 0x002c */ char* _egptr;
  /* 0x0030 */ int LockFlg;
  /* 0x0034 */ struct _CRT_CRITICAL_SECTION x_lock;
}; /* size: 0x004c */

