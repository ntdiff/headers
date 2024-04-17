struct tagSTREAM_ACL
{
  /* 0x0000 */ unsigned long ulNumOfDenyEntries;
  /* 0x0004 */ unsigned long ulNumOfGrantEntries;
  /* 0x0008 */ struct tagSTREAM_ACE* pACL;
}; /* size: 0x000c */

struct tagPCB
{
  /* 0x0000 */ char* pPicklingBuff;
  /* 0x0004 */ char* pTruePicklingBuff;
  /* 0x0008 */ unsigned long ulPicklingBuffSize;
  /* 0x000c */ unsigned long ulBytesUsed;
  /* 0x0010 */ struct tagSTREAM_ACL StreamACL;
  /* 0x001c */ void* PickleHandle;
  /* 0x0020 */ int bDirtyHandle;
  /* 0x0024 */ int bPickled;
  /* 0x0028 */ unsigned long ulMaxNumOfStreamACEs;
  /* 0x002c */ unsigned long ulNumOfStreamACEs;
}; /* size: 0x0030 */

