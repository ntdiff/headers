class CHashTable
{
  /* 0x0004 */ class COleStaticMutexSem* _pExLock;
  /* 0x0008 */ class CRWLock* _pRWLock;
  /* 0x000c */ struct SHashChain* _buckets;
  /* 0x0010 */ unsigned long _cCurEntries;
  /* 0x0014 */ unsigned long _cMaxEntries;
}; /* size: 0x0018 */

