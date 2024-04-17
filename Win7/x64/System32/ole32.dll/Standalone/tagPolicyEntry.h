typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagPolicyEntry
{
  /* 0x0000 */ struct tagPolicyEntry* pNext;
  /* 0x0008 */ struct tagPolicyEntry* pPrev;
  /* 0x0010 */ unsigned long ctxEvent;
  /* 0x0018 */ struct IPolicy* pPolicy;
  /* 0x0020 */ struct _GUID policyID;
}; /* size: 0x0030 */

