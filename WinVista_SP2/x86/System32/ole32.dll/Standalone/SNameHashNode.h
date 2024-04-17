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

struct tagSECURITYBINDING
{
  /* 0x0000 */ unsigned short wAuthnSvc;
  /* 0x0002 */ unsigned short wAuthzSvc;
  /* 0x0004 */ unsigned short aPrincName;
}; /* size: 0x0006 */

struct SNameHashNode
{
  /* 0x0000 */ struct SHashChain chain;
  /* 0x0008 */ unsigned long dwHash;
  /* 0x000c */ unsigned long cRef;
  /* 0x0010 */ struct _GUID ipid;
  /* 0x0020 */ struct tagSECURITYBINDING sName;
  /* 0x0026 */ char __PADDING__[2];
}; /* size: 0x0028 */

