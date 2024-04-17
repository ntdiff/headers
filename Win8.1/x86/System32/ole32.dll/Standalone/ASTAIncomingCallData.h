struct ASTAIncomingCallData
{
  /* 0x0000 */ unsigned __int64 uCallNumber;
  struct /* bitfield */
  {
    /* 0x0008 */ BOOL bQueuedInCurrentKernelWait : 1; /* bit position: 0 */
    /* 0x0008 */ BOOL bMarkedForTimeoutHandling : 1; /* bit position: 1 */
  }; /* bitfield */
  union
  {
    /* 0x0010 */ unsigned __int64 uQueuedTickCount;
    struct
    {
      /* 0x0010 */ unsigned long dwAccumulatedWaitTime;
      /* 0x0014 */ long __PADDING__[1];
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
}; /* size: 0x0018 */

