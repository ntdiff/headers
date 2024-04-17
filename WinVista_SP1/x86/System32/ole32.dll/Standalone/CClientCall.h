class CClientCall
{
  /* 0x00c8 */ unsigned long m_cRefs;
  /* 0x00cc */ unsigned long m_dwFlags;
  /* 0x00d0 */ void* m_hThread;
  /* 0x00d4 */ unsigned long m_dwThreadId;
  union
  {
    /* 0x0000 */ void* _aList[8];
    /* 0x0000 */ unsigned long _iNext;
  }; /* size: 0x0020 */
}; /* size: 0x00d8 */

