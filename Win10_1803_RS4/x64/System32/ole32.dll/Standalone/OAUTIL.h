struct OAUTIL
{
  /* 0x0000 */ struct ICallFrameWalker* m_pWalkerCopy;
  /* 0x0008 */ struct ICallFrameWalker* m_pWalkerFree;
  /* 0x0010 */ struct ICallFrameWalker* m_pWalkerWalk;
  /* 0x0018 */ int m_fWorkingOnInParam;
  /* 0x001c */ int m_fWorkingOnOutParam;
  /* 0x0020 */ int m_fDoNotWalkInterfaces;
  /* 0x0024 */ long __PADDING__[1];
}; /* size: 0x0028 */

