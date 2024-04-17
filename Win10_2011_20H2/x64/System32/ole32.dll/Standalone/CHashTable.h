class CHashTable
{
  /* 0x0008 */ class COleStaticMutexSem* _pExLock;
  /* 0x0010 */ class CRWLock* _pRWLock;
  /* 0x0018 */ struct SHashChain* _buckets;
  /* 0x0020 */ unsigned long _cCurEntries;
  /* 0x0024 */ unsigned long _cMaxEntries;
}; /* size: 0x0028 */

