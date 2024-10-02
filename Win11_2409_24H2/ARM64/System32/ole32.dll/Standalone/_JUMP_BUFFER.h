typedef struct _SETJMP_FLOAT128
{
  /* 0x0000 */ unsigned __int64 Part[2];
} SETJMP_FLOAT128, *PSETJMP_FLOAT128; /* size: 0x0010 */

typedef struct _JUMP_BUFFER
{
  /* 0x0000 */ unsigned __int64 Frame;
  /* 0x0008 */ unsigned __int64 Rbx;
  /* 0x0010 */ unsigned __int64 Rsp;
  /* 0x0018 */ unsigned __int64 Rbp;
  /* 0x0020 */ unsigned __int64 Rsi;
  /* 0x0028 */ unsigned __int64 Rdi;
  /* 0x0030 */ unsigned __int64 R12;
  /* 0x0038 */ unsigned __int64 R13;
  /* 0x0040 */ unsigned __int64 R14;
  /* 0x0048 */ unsigned __int64 R15;
  /* 0x0050 */ unsigned __int64 Rip;
  /* 0x0058 */ unsigned long MxCsr;
  /* 0x005c */ unsigned short FpCsr;
  /* 0x005e */ unsigned short Spare;
  /* 0x0060 */ struct _SETJMP_FLOAT128 Xmm6;
  /* 0x0070 */ struct _SETJMP_FLOAT128 Xmm7;
  /* 0x0080 */ struct _SETJMP_FLOAT128 Xmm8;
  /* 0x0090 */ struct _SETJMP_FLOAT128 Xmm9;
  /* 0x00a0 */ struct _SETJMP_FLOAT128 Xmm10;
  /* 0x00b0 */ struct _SETJMP_FLOAT128 Xmm11;
  /* 0x00c0 */ struct _SETJMP_FLOAT128 Xmm12;
  /* 0x00d0 */ struct _SETJMP_FLOAT128 Xmm13;
  /* 0x00e0 */ struct _SETJMP_FLOAT128 Xmm14;
  /* 0x00f0 */ struct _SETJMP_FLOAT128 Xmm15;
} JUMP_BUFFER, *PJUMP_BUFFER; /* size: 0x0100 */

