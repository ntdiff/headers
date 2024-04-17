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

struct tagSECURITYBINDING
{
  /* 0x0000 */ unsigned short wAuthnSvc;
  /* 0x0002 */ unsigned short wAuthzSvc;
  /* 0x0004 */ unsigned short aPrincName;
}; /* size: 0x0006 */

struct SNameHashNode
{
  /* 0x0000 */ struct SHashChain chain;
  /* 0x0010 */ unsigned long dwHash;
  /* 0x0014 */ unsigned long cRef;
  /* 0x0018 */ struct _GUID ipid;
  /* 0x0028 */ struct tagSECURITYBINDING sName;
  /* 0x002e */ char __PADDING__[2];
}; /* size: 0x0030 */

