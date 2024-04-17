struct tagInitializeSpyNode
{
  /* 0x0000 */ struct tagInitializeSpyNode* pNext;
  /* 0x0004 */ struct tagInitializeSpyNode* pPrev;
  /* 0x0008 */ unsigned long dwRefs;
  /* 0x000c */ unsigned long dwCookie;
  /* 0x0010 */ struct IInitializeSpy* pInitSpy;
}; /* size: 0x0014 */

