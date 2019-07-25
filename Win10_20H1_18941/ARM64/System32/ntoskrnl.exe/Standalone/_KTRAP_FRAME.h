typedef struct _KTRAP_FRAME
{
  /* 0x0000 */ unsigned char ExceptionActive;
  /* 0x0001 */ unsigned char ContextFromKFramesUnwound;
  /* 0x0002 */ unsigned char DebugRegistersValid;
  union
  {
    /* 0x0003 */ char PreviousMode;
    /* 0x0003 */ unsigned char PreviousIrql;
  }; /* size: 0x0001 */
  /* 0x0004 */ unsigned long Reserved;
  union
  {
    /* 0x0008 */ unsigned __int64 FaultAddress;
    /* 0x0008 */ unsigned __int64 TrapFrame;
  }; /* size: 0x0008 */
  /* 0x0010 */ struct _KARM64_VFP_STATE* VfpState;
  /* 0x0018 */ unsigned long Bcr[8];
  /* 0x0038 */ unsigned __int64 Bvr[8];
  /* 0x0078 */ unsigned long Wcr[2];
  /* 0x0080 */ unsigned __int64 Wvr[2];
  /* 0x0090 */ unsigned long Spsr;
  /* 0x0094 */ unsigned long Esr;
  /* 0x0098 */ unsigned __int64 Sp;
  union
  {
    /* 0x00a0 */ unsigned __int64 X[19];
    struct
    {
      /* 0x00a0 */ unsigned __int64 X0;
      /* 0x00a8 */ unsigned __int64 X1;
      /* 0x00b0 */ unsigned __int64 X2;
      /* 0x00b8 */ unsigned __int64 X3;
      /* 0x00c0 */ unsigned __int64 X4;
      /* 0x00c8 */ unsigned __int64 X5;
      /* 0x00d0 */ unsigned __int64 X6;
      /* 0x00d8 */ unsigned __int64 X7;
      /* 0x00e0 */ unsigned __int64 X8;
      /* 0x00e8 */ unsigned __int64 X9;
      /* 0x00f0 */ unsigned __int64 X10;
      /* 0x00f8 */ unsigned __int64 X11;
      /* 0x0100 */ unsigned __int64 X12;
      /* 0x0108 */ unsigned __int64 X13;
      /* 0x0110 */ unsigned __int64 X14;
      /* 0x0118 */ unsigned __int64 X15;
      /* 0x0120 */ unsigned __int64 X16;
      /* 0x0128 */ unsigned __int64 X17;
      /* 0x0130 */ unsigned __int64 X18;
    }; /* size: 0x0098 */
  }; /* size: 0x0098 */
  /* 0x0138 */ unsigned __int64 Lr;
  /* 0x0140 */ unsigned __int64 Fp;
  /* 0x0148 */ unsigned __int64 Pc;
} KTRAP_FRAME, *PKTRAP_FRAME; /* size: 0x0150 */

