class CClientCall
{
  /* 0x0138 */ unsigned long m_cRefs;
  /* 0x013c */ unsigned long m_dwFlags;
  /* 0x0140 */ void* m_hThread;
  /* 0x0148 */ unsigned long m_dwThreadId;
  union
  {
    /* 0x0000 */ void* _aList[8];
    /* 0x0000 */ unsigned long _iNext;
  }; /* size: 0x0040 */
}; /* size: 0x0150 */

