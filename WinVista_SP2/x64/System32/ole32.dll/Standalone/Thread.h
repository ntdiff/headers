class LockEntry
{
  /* 0x0000 */ class LockEntry* _pNext;
  /* 0x0008 */ class LockEntry* _pPrev;
  /* 0x0010 */ class CRWLock* _pRWLock;
  /* 0x0018 */ unsigned short _wReaderLevel;
}; /* size: 0x0020 */

struct Thread
{
  /* 0x0000 */ class LockEntry* pHead;
  /* 0x0008 */ class LockEntry* pLastEmbeddedEnty;
  /* 0x0010 */ class LockEntry embeddedEntry[1];
}; /* size: 0x0030 */

