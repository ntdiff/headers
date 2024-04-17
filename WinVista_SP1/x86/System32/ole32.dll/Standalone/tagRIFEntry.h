struct SHashChain
{
  /* 0x0000 */ struct SHashChain* pNext;
  /* 0x0004 */ struct SHashChain* pPrev;
}; /* size: 0x0008 */

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
  /* 0x0008 */ struct _GUID key;
}; /* size: 0x0018 */

struct tagRIFEntry
{
  /* 0x0000 */ struct SUUIDHashNode HashNode;
  /* 0x0018 */ struct _GUID iidCounterpart;
  /* 0x0028 */ struct _GUID psclsid;
  /* 0x0038 */ unsigned long dwFlags;
  /* 0x003c */ unsigned long cRefs;
  /* 0x0040 */ struct tagRIFEntry* pBase;
  /* 0x0044 */ struct _RPC_SERVER_INTERFACE* pSrvInterface;
  /* 0x0048 */ struct _RPC_CLIENT_INTERFACE* pCliInterface;
}; /* size: 0x004c */

