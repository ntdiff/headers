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

struct tagRIFEntry
{
  /* 0x0000 */ struct SUUIDHashNode HashNode;
  /* 0x0020 */ struct _GUID iidCounterpart;
  /* 0x0030 */ struct _GUID psclsid;
  /* 0x0040 */ unsigned long dwFlags;
  /* 0x0044 */ unsigned long cRefs;
  /* 0x0048 */ struct tagRIFEntry* pBase;
  /* 0x0050 */ struct _RPC_SERVER_INTERFACE* pSrvInterface;
  /* 0x0058 */ struct _RPC_CLIENT_INTERFACE* pCliInterface;
}; /* size: 0x0060 */

