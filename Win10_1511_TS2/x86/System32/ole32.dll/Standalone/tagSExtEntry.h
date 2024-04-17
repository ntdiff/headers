struct SHashChain
{
  /* 0x0000 */ struct SHashChain* pNext;
  /* 0x0004 */ struct SHashChain* pPrev;
}; /* size: 0x0008 */

struct SExtHashNode
{
  /* 0x0000 */ struct SHashChain chain;
  /* 0x0008 */ const wchar_t* pwszExt;
}; /* size: 0x000c */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagSExtEntry
{
  /* 0x0000 */ struct SExtHashNode m_node;
  /* 0x000c */ wchar_t* m_wszExt;
  /* 0x0010 */ struct _GUID m_clsid;
  /* 0x0020 */ wchar_t m_wszBuf[8];
}; /* size: 0x0030 */

