typedef struct _TRAPFRAME_LOG_ENTRY
{
  /* 0x0000 */ unsigned __int64 Thread;
  /* 0x0008 */ unsigned char CpuNumber;
  /* 0x0009 */ unsigned char TrapType;
  /* 0x000a */ unsigned short Padding;
  /* 0x000c */ unsigned long Cpsr;
  /* 0x0010 */ unsigned __int64 X0;
  /* 0x0018 */ unsigned __int64 X1;
  /* 0x0020 */ unsigned __int64 X2;
  /* 0x0028 */ unsigned __int64 X3;
  /* 0x0030 */ unsigned __int64 X4;
  /* 0x0038 */ unsigned __int64 X5;
  /* 0x0040 */ unsigned __int64 X6;
  /* 0x0048 */ unsigned __int64 X7;
  /* 0x0050 */ unsigned __int64 Fp;
  /* 0x0058 */ unsigned __int64 Lr;
  /* 0x0060 */ unsigned __int64 Sp;
  /* 0x0068 */ unsigned __int64 Pc;
  /* 0x0070 */ unsigned __int64 Reserved1;
  /* 0x0078 */ unsigned __int64 Reserved2;
} TRAPFRAME_LOG_ENTRY, *PTRAPFRAME_LOG_ENTRY; /* size: 0x0080 */

