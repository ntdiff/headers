class LockEntry
{
  /* 0x0000 */ class LockEntry* _pNext;
  /* 0x0004 */ class LockEntry* _pPrev;
  /* 0x0008 */ class CRWLock* _pRWLock;
  /* 0x000c */ unsigned short _wReaderLevel;
}; /* size: 0x0010 */

