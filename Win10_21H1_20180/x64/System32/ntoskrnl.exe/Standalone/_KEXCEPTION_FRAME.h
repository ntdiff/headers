typedef struct _M128A
{
  /* 0x0000 */ unsigned __int64 Low;
  /* 0x0008 */ __int64 High;
} M128A, *PM128A; /* size: 0x0010 */

typedef struct _KEXCEPTION_FRAME
{
  /* 0x0000 */ unsigned __int64 P1Home;
  /* 0x0008 */ unsigned __int64 P2Home;
  /* 0x0010 */ unsigned __int64 P3Home;
  /* 0x0018 */ unsigned __int64 P4Home;
  /* 0x0020 */ unsigned __int64 P5;
  /* 0x0028 */ unsigned __int64 Spare1;
  /* 0x0030 */ struct _M128A Xmm6;
  /* 0x0040 */ struct _M128A Xmm7;
  /* 0x0050 */ struct _M128A Xmm8;
  /* 0x0060 */ struct _M128A Xmm9;
  /* 0x0070 */ struct _M128A Xmm10;
  /* 0x0080 */ struct _M128A Xmm11;
  /* 0x0090 */ struct _M128A Xmm12;
  /* 0x00a0 */ struct _M128A Xmm13;
  /* 0x00b0 */ struct _M128A Xmm14;
  /* 0x00c0 */ struct _M128A Xmm15;
  /* 0x00d0 */ unsigned __int64 TrapFrame;
  /* 0x00d8 */ unsigned __int64 OutputBuffer;
  /* 0x00e0 */ unsigned __int64 OutputLength;
  /* 0x00e8 */ unsigned __int64 Spare2;
  /* 0x00f0 */ unsigned __int64 MxCsr;
  /* 0x00f8 */ unsigned __int64 Rbp;
  /* 0x0100 */ unsigned __int64 Rbx;
  /* 0x0108 */ unsigned __int64 Rdi;
  /* 0x0110 */ unsigned __int64 Rsi;
  /* 0x0118 */ unsigned __int64 R12;
  /* 0x0120 */ unsigned __int64 R13;
  /* 0x0128 */ unsigned __int64 R14;
  /* 0x0130 */ unsigned __int64 R15;
  /* 0x0138 */ unsigned __int64 Return;
} KEXCEPTION_FRAME, *PKEXCEPTION_FRAME; /* size: 0x0140 */

