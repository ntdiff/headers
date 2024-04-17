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
      /* 0x0188 */ unsigned long m_cRefs;
      /* 0x018c */ unsigned long m_dwFlags;
      /* 0x0190 */ void* m_hThread;
      /* 0x0198 */ unsigned long m_dwThreadId;
    }; /* size: 0x0018 */
    /* 0x0000 */ void* _aList[8];
    /* 0x0000 */ unsigned long _iNext;
  }; /* size: 0x0040 */
}; /* size: 0x01a0 */

