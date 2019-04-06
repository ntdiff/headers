typedef struct _M128A
{
  /* 0x0000 */ unsigned __int64 Low;
  /* 0x0008 */ __int64 High;
} M128A, *PM128A; /* size: 0x0010 */

typedef struct _KTRAP_FRAME
{
  /* 0x0000 */ unsigned __int64 P1Home;
  /* 0x0008 */ unsigned __int64 P2Home;
  /* 0x0010 */ unsigned __int64 P3Home;
  /* 0x0018 */ unsigned __int64 P4Home;
  /* 0x0020 */ unsigned __int64 P5;
  union
  {
    /* 0x0028 */ char PreviousMode;
    /* 0x0028 */ unsigned char InterruptRetpolineState;
  }; /* size: 0x0001 */
  /* 0x0029 */ unsigned char PreviousIrql;
  union
  {
    /* 0x002a */ unsigned char FaultIndicator;
    /* 0x002a */ unsigned char NmiMsrIbrs;
  }; /* size: 0x0001 */
  /* 0x002b */ unsigned char ExceptionActive;
  /* 0x002c */ unsigned long MxCsr;
  /* 0x0030 */ unsigned __int64 Rax;
  /* 0x0038 */ unsigned __int64 Rcx;
  /* 0x0040 */ unsigned __int64 Rdx;
  /* 0x0048 */ unsigned __int64 R8;
  /* 0x0050 */ unsigned __int64 R9;
  /* 0x0058 */ unsigned __int64 R10;
  /* 0x0060 */ unsigned __int64 R11;
  union
  {
    /* 0x0068 */ unsigned __int64 GsBase;
    /* 0x0068 */ unsigned __int64 GsSwap;
  }; /* size: 0x0008 */
  /* 0x0070 */ struct _M128A Xmm0;
  /* 0x0080 */ struct _M128A Xmm1;
  /* 0x0090 */ struct _M128A Xmm2;
  /* 0x00a0 */ struct _M128A Xmm3;
  /* 0x00b0 */ struct _M128A Xmm4;
  /* 0x00c0 */ struct _M128A Xmm5;
  union
  {
    /* 0x00d0 */ unsigned __int64 FaultAddress;
    /* 0x00d0 */ unsigned __int64 ContextRecord;
  }; /* size: 0x0008 */
  /* 0x00d8 */ unsigned __int64 Dr0;
  /* 0x00e0 */ unsigned __int64 Dr1;
  /* 0x00e8 */ unsigned __int64 Dr2;
  /* 0x00f0 */ unsigned __int64 Dr3;
  /* 0x00f8 */ unsigned __int64 Dr6;
  /* 0x0100 */ unsigned __int64 Dr7;
  /* 0x0108 */ unsigned __int64 DebugControl;
  /* 0x0110 */ unsigned __int64 LastBranchToRip;
  /* 0x0118 */ unsigned __int64 LastBranchFromRip;
  /* 0x0120 */ unsigned __int64 LastExceptionToRip;
  /* 0x0128 */ unsigned __int64 LastExceptionFromRip;
  /* 0x0130 */ unsigned short SegDs;
  /* 0x0132 */ unsigned short SegEs;
  /* 0x0134 */ unsigned short SegFs;
  /* 0x0136 */ unsigned short SegGs;
  /* 0x0138 */ unsigned __int64 TrapFrame;
  /* 0x0140 */ unsigned __int64 Rbx;
  /* 0x0148 */ unsigned __int64 Rdi;
  /* 0x0150 */ unsigned __int64 Rsi;
  /* 0x0158 */ unsigned __int64 Rbp;
  union
  {
    /* 0x0160 */ unsigned __int64 ErrorCode;
    /* 0x0160 */ unsigned __int64 ExceptionFrame;
  }; /* size: 0x0008 */
  /* 0x0168 */ unsigned __int64 Rip;
  /* 0x0170 */ unsigned short SegCs;
  /* 0x0172 */ unsigned char Fill0;
  /* 0x0173 */ unsigned char Logging;
  /* 0x0174 */ unsigned short Fill1[2];
  /* 0x0178 */ unsigned long EFlags;
  /* 0x017c */ unsigned long Fill2;
  /* 0x0180 */ unsigned __int64 Rsp;
  /* 0x0188 */ unsigned short SegSs;
  /* 0x018a */ unsigned short Fill3;
  /* 0x018c */ unsigned long Fill4;
} KTRAP_FRAME, *PKTRAP_FRAME; /* size: 0x0190 */

