struct tagInitializeSpyNode
{
  /* 0x0000 */ struct tagInitializeSpyNode* pNext;
  /* 0x0008 */ struct tagInitializeSpyNode* pPrev;
  /* 0x0010 */ unsigned long dwRefs;
  /* 0x0014 */ unsigned long dwCookie;
  /* 0x0018 */ struct IInitializeSpy* pInitSpy;
}; /* size: 0x0020 */

