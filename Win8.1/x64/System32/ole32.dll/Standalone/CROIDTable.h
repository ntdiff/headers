struct SHashChain
{
  /* 0x0000 */ struct SHashChain* pNext;
  /* 0x0008 */ struct SHashChain* pPrev;
}; /* size: 0x0010 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct SUUIDHashNode
{
  /* 0x0000 */ struct SHashChain chain;
  /* 0x0010 */ struct _GUID key;
}; /* size: 0x0020 */

struct SOIDRegistration
{
  /* 0x0000 */ struct SUUIDHashNode Node;
  /* 0x0020 */ unsigned short cRefs;
  /* 0x0022 */ unsigned short flags;
  /* 0x0028 */ unsigned __int64 mid;
  /* 0x0030 */ unsigned __int64 oxid;
  /* 0x0038 */ struct SOIDRegistration* pPrevList;
  /* 0x0040 */ struct SOIDRegistration* pNextList;
  /* 0x0048 */ class CRefCache* pRefCache;
}; /* size: 0x0050 */

class CUUIDHashTable
{
}; /* size: 0x0028 */

class CROIDTable
{
  union
  {
    /* 0x0000 */ unsigned long _ulWorkerThreadSequence;
    /* 0x0000 */ unsigned long _cOidsToAdd;
    /* 0x0000 */ unsigned long _cOidsToRemove;
    /* 0x0000 */ struct SOIDRegistration _ClientOIDRegList;
    /* 0x0000 */ int _fWorker;
    /* 0x0000 */ unsigned long _dwSleepPeriod;
    /* 0x0000 */ class CUUIDHashTable _ClientRegisteredOIDs;
  }; /* size: 0x0050 */
}; /* size: 0x0001 */

