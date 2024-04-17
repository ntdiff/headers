struct tagSTREAM_ACL
{
  /* 0x0000 */ unsigned long ulNumOfDenyEntries;
  /* 0x0004 */ unsigned long ulNumOfGrantEntries;
  /* 0x0008 */ struct tagSTREAM_ACE* pACL;
}; /* size: 0x0010 */

struct tagPCB
{
  /* 0x0000 */ char* pPicklingBuff;
  /* 0x0008 */ char* pTruePicklingBuff;
  /* 0x0010 */ unsigned long ulPicklingBuffSize;
  /* 0x0014 */ unsigned long ulBytesUsed;
  /* 0x0018 */ struct tagSTREAM_ACL StreamACL;
  /* 0x0028 */ void* PickleHandle;
  /* 0x0030 */ int bDirtyHandle;
  /* 0x0034 */ int bPickled;
  /* 0x0038 */ unsigned long ulMaxNumOfStreamACEs;
  /* 0x003c */ unsigned long ulNumOfStreamACEs;
}; /* size: 0x0040 */

