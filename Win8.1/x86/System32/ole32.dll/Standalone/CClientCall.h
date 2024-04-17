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
      /* 0x0100 */ unsigned long m_cRefs;
      /* 0x0104 */ unsigned long m_dwFlags;
      /* 0x0108 */ void* m_hThread;
      /* 0x010c */ unsigned long m_dwThreadId;
    }; /* size: 0x0014 */
    /* 0x0000 */ void* _aList[8];
    /* 0x0000 */ unsigned long _iNext;
  }; /* size: 0x0020 */
}; /* size: 0x0110 */

