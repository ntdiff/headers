enum BaseCallKind
{
  CAsyncCall = 0,
  CClientCall = 1,
  CCtxCall = 2,
};

class CClientCall
{
  union
  {
    struct
    {
      /* 0x0000 */ enum BaseCallKind CallKind;
      /* 0x00f0 */ unsigned long m_cRefs;
      /* 0x00f4 */ unsigned long m_dwFlags;
      /* 0x00f8 */ void* m_hThread;
      /* 0x00fc */ unsigned long m_dwThreadId;
    }; /* size: 0x0014 */
    /* 0x0000 */ void* _aList[8];
    /* 0x0000 */ unsigned long _iNext;
  }; /* size: 0x0020 */
}; /* size: 0x0100 */

