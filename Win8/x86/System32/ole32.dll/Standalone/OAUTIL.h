struct OAUTIL
{
  /* 0x0000 */ struct ICallFrameWalker* m_pWalkerCopy;
  /* 0x0004 */ struct ICallFrameWalker* m_pWalkerFree;
  /* 0x0008 */ struct ICallFrameWalker* m_pWalkerWalk;
  /* 0x000c */ int m_fWorkingOnInParam;
  /* 0x0010 */ int m_fWorkingOnOutParam;
  /* 0x0014 */ int m_fDoNotWalkInterfaces;
}; /* size: 0x0018 */

