struct SPendingCall
{
  /* 0x0000 */ struct SPendingCall* pNext;
  /* 0x0008 */ struct SPendingCall* pPrev;
  /* 0x0010 */ class CChannelObject* pChnlObj;
}; /* size: 0x0018 */

