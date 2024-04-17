struct SPendingCall
{
  /* 0x0000 */ struct SPendingCall* pNext;
  /* 0x0004 */ struct SPendingCall* pPrev;
  /* 0x0008 */ class CChannelObject* pChnlObj;
}; /* size: 0x000c */

