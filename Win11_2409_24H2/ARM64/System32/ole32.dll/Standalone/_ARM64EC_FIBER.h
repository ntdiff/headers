typedef union _ARM64_NT_NEON128
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Low;
      /* 0x0008 */ __int64 High;
    }; /* size: 0x0010 */
    /* 0x0000 */ double D[2];
    /* 0x0000 */ float S[4];
    /* 0x0000 */ unsigned short H[8];
    /* 0x0000 */ unsigned char B[16];
  }; /* size: 0x0010 */
} ARM64_NT_NEON128, *PARM64_NT_NEON128; /* size: 0x0010 */

typedef struct _CONTEXT
{
  /* 0x0000 */ unsigned long ContextFlags;
  /* 0x0004 */ unsigned long Cpsr;
  union
  {
    struct
    {
      /* 0x0008 */ unsigned __int64 X0;
      /* 0x0010 */ unsigned __int64 X1;
      /* 0x0018 */ unsigned __int64 X2;
      /* 0x0020 */ unsigned __int64 X3;
      /* 0x0028 */ unsigned __int64 X4;
      /* 0x0030 */ unsigned __int64 X5;
      /* 0x0038 */ unsigned __int64 X6;
      /* 0x0040 */ unsigned __int64 X7;
      /* 0x0048 */ unsigned __int64 X8;
      /* 0x0050 */ unsigned __int64 X9;
      /* 0x0058 */ unsigned __int64 X10;
      /* 0x0060 */ unsigned __int64 X11;
      /* 0x0068 */ unsigned __int64 X12;
      /* 0x0070 */ unsigned __int64 X13;
      /* 0x0078 */ unsigned __int64 X14;
      /* 0x0080 */ unsigned __int64 X15;
      /* 0x0088 */ unsigned __int64 X16;
      /* 0x0090 */ unsigned __int64 X17;
      /* 0x0098 */ unsigned __int64 X18;
      /* 0x00a0 */ unsigned __int64 X19;
      /* 0x00a8 */ unsigned __int64 X20;
      /* 0x00b0 */ unsigned __int64 X21;
      /* 0x00b8 */ unsigned __int64 X22;
      /* 0x00c0 */ unsigned __int64 X23;
      /* 0x00c8 */ unsigned __int64 X24;
      /* 0x00d0 */ unsigned __int64 X25;
      /* 0x00d8 */ unsigned __int64 X26;
      /* 0x00e0 */ unsigned __int64 X27;
      /* 0x00e8 */ unsigned __int64 X28;
      /* 0x00f0 */ unsigned __int64 Fp;
      /* 0x00f8 */ unsigned __int64 Lr;
    }; /* size: 0x00f8 */
    /* 0x0008 */ unsigned __int64 X[31];
  }; /* size: 0x00f8 */
  /* 0x0100 */ unsigned __int64 Sp;
  /* 0x0108 */ unsigned __int64 Pc;
  /* 0x0110 */ union _ARM64_NT_NEON128 V[32];
  /* 0x0310 */ unsigned long Fpcr;
  /* 0x0314 */ unsigned long Fpsr;
  /* 0x0318 */ unsigned long Bcr[8];
  /* 0x0338 */ unsigned __int64 Bvr[8];
  /* 0x0378 */ unsigned long Wcr[2];
  /* 0x0380 */ unsigned __int64 Wvr[2];
} CONTEXT, *PCONTEXT; /* size: 0x0390 */

typedef struct _ARM64EC_NT_CONTEXT
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 AMD64_P1Home;
      /* 0x0008 */ unsigned __int64 AMD64_P2Home;
      /* 0x0010 */ unsigned __int64 AMD64_P3Home;
      /* 0x0018 */ unsigned __int64 AMD64_P4Home;
      /* 0x0020 */ unsigned __int64 AMD64_P5Home;
      /* 0x0028 */ unsigned __int64 AMD64_P6Home;
      /* 0x0030 */ unsigned long ContextFlags;
      /* 0x0034 */ unsigned long AMD64_MxCsr_copy;
      /* 0x0038 */ unsigned short AMD64_SegCs;
      /* 0x003a */ unsigned short AMD64_SegDs;
      /* 0x003c */ unsigned short AMD64_SegEs;
      /* 0x003e */ unsigned short AMD64_SegFs;
      /* 0x0040 */ unsigned short AMD64_SegGs;
      /* 0x0042 */ unsigned short AMD64_SegSs;
      /* 0x0044 */ unsigned long AMD64_EFlags;
      /* 0x0048 */ unsigned __int64 AMD64_Dr0;
      /* 0x0050 */ unsigned __int64 AMD64_Dr1;
      /* 0x0058 */ unsigned __int64 AMD64_Dr2;
      /* 0x0060 */ unsigned __int64 AMD64_Dr3;
      /* 0x0068 */ unsigned __int64 AMD64_Dr6;
      /* 0x0070 */ unsigned __int64 AMD64_Dr7;
      /* 0x0078 */ unsigned __int64 X8;
      /* 0x0080 */ unsigned __int64 X0;
      /* 0x0088 */ unsigned __int64 X1;
      /* 0x0090 */ unsigned __int64 X27;
      /* 0x0098 */ unsigned __int64 Sp;
      /* 0x00a0 */ unsigned __int64 Fp;
      /* 0x00a8 */ unsigned __int64 X25;
      /* 0x00b0 */ unsigned __int64 X26;
      /* 0x00b8 */ unsigned __int64 X2;
      /* 0x00c0 */ unsigned __int64 X3;
      /* 0x00c8 */ unsigned __int64 X4;
      /* 0x00d0 */ unsigned __int64 X5;
      /* 0x00d8 */ unsigned __int64 X19;
      /* 0x00e0 */ unsigned __int64 X20;
      /* 0x00e8 */ unsigned __int64 X21;
      /* 0x00f0 */ unsigned __int64 X22;
      /* 0x00f8 */ unsigned __int64 Pc;
      /* 0x0100 */ unsigned short AMD64_ControlWord;
      /* 0x0102 */ unsigned short AMD64_StatusWord;
      /* 0x0104 */ unsigned char AMD64_TagWord;
      /* 0x0105 */ unsigned char AMD64_Reserved1;
      /* 0x0106 */ unsigned short AMD64_ErrorOpcode;
      /* 0x0108 */ unsigned long AMD64_ErrorOffset;
      /* 0x010c */ unsigned short AMD64_ErrorSelector;
      /* 0x010e */ unsigned short AMD64_Reserved2;
      /* 0x0110 */ unsigned long AMD64_DataOffset;
      /* 0x0114 */ unsigned short AMD64_DataSelector;
      /* 0x0116 */ unsigned short AMD64_Reserved3;
      /* 0x0118 */ unsigned long AMD64_MxCsr;
      /* 0x011c */ unsigned long AMD64_MxCsr_Mask;
      /* 0x0120 */ unsigned __int64 Lr;
      /* 0x0128 */ unsigned short X16_0;
      /* 0x012a */ unsigned short AMD64_St0_Reserved1;
      /* 0x012c */ unsigned long AMD64_St0_Reserved2;
      /* 0x0130 */ unsigned __int64 X6;
      /* 0x0138 */ unsigned short X16_1;
      /* 0x013a */ unsigned short AMD64_St1_Reserved1;
      /* 0x013c */ unsigned long AMD64_St1_Reserved2;
      /* 0x0140 */ unsigned __int64 X7;
      /* 0x0148 */ unsigned short X16_2;
      /* 0x014a */ unsigned short AMD64_St2_Reserved1;
      /* 0x014c */ unsigned long AMD64_St2_Reserved2;
      /* 0x0150 */ unsigned __int64 X9;
      /* 0x0158 */ unsigned short X16_3;
      /* 0x015a */ unsigned short AMD64_St3_Reserved1;
      /* 0x015c */ unsigned long AMD64_St3_Reserved2;
      /* 0x0160 */ unsigned __int64 X10;
      /* 0x0168 */ unsigned short X17_0;
      /* 0x016a */ unsigned short AMD64_St4_Reserved1;
      /* 0x016c */ unsigned long AMD64_St4_Reserved2;
      /* 0x0170 */ unsigned __int64 X11;
      /* 0x0178 */ unsigned short X17_1;
      /* 0x017a */ unsigned short AMD64_St5_Reserved1;
      /* 0x017c */ unsigned long AMD64_St5_Reserved2;
      /* 0x0180 */ unsigned __int64 X12;
      /* 0x0188 */ unsigned short X17_2;
      /* 0x018a */ unsigned short AMD64_St6_Reserved1;
      /* 0x018c */ unsigned long AMD64_St6_Reserved2;
      /* 0x0190 */ unsigned __int64 X15;
      /* 0x0198 */ unsigned short X17_3;
      /* 0x019a */ unsigned short AMD64_St7_Reserved1;
      /* 0x019c */ unsigned long AMD64_St7_Reserved2;
      /* 0x01a0 */ union _ARM64_NT_NEON128 V[16];
      /* 0x02a0 */ unsigned char AMD64_XSAVE_FORMAT_Reserved4[96];
      /* 0x0300 */ union _ARM64_NT_NEON128 AMD64_VectorRegister[26];
      /* 0x04a0 */ unsigned __int64 AMD64_VectorControl;
      /* 0x04a8 */ unsigned __int64 AMD64_DebugControl;
      /* 0x04b0 */ unsigned __int64 AMD64_LastBranchToRip;
      /* 0x04b8 */ unsigned __int64 AMD64_LastBranchFromRip;
      /* 0x04c0 */ unsigned __int64 AMD64_LastExceptionToRip;
      /* 0x04c8 */ unsigned __int64 AMD64_LastExceptionFromRip;
    }; /* size: 0x04d0 */
    struct
    {
      /* 0x0000 */ struct _CONTEXT AMD64_Context;
      /* 0x0390 */ long __PADDING__[80];
    }; /* size: 0x04d0 */
  }; /* size: 0x04d0 */
} ARM64EC_NT_CONTEXT, *PARM64EC_NT_CONTEXT; /* size: 0x04d0 */

typedef struct _ARM64EC_FIBER
{
  /* 0x0000 */ void* FiberData;
  /* 0x0008 */ struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList;
  /* 0x0010 */ void* StackBase;
  /* 0x0018 */ void* StackLimit;
  /* 0x0020 */ void* DeallocationStack;
  /* 0x0028 */ void* Pad;
  /* 0x0030 */ struct _ARM64EC_NT_CONTEXT FiberContext;
  /* 0x0500 */ struct _Wx86TIB* Wx86Tib;
  /* 0x0508 */ struct _ACTIVATION_CONTEXT_STACK* ActivationContextStackPointer;
  /* 0x0510 */ void* FlsData;
  /* 0x0518 */ unsigned long GuaranteedStackBytes;
  /* 0x051c */ unsigned short TebFlags;
  /* 0x051e */ unsigned short ReservedPad;
  /* 0x0520 */ unsigned __int64 FiberCookie;
  /* 0x0528 */ void* Ssp;
} ARM64EC_FIBER, *PARM64EC_FIBER; /* size: 0x0530 */

