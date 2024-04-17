class CancellableCall
{
  /* 0x0000 */ unsigned long m_tid;
  /* 0x0004 */ HRESULT m_hr;
  /* 0x0008 */ class CancellableCall* m_pPrevious;
  /* 0x000c */ class CancellableCall* m_pNext;
}; /* size: 0x0010 */

