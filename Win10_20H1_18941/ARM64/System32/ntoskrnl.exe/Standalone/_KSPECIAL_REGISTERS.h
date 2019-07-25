typedef struct _KSPECIAL_REGISTERS
{
  /* 0x0000 */ unsigned __int64 Elr_El1;
  /* 0x0008 */ unsigned int Spsr_El1;
  /* 0x0010 */ unsigned __int64 Tpidr_El0;
  /* 0x0018 */ unsigned __int64 Tpidrro_El0;
  /* 0x0020 */ unsigned __int64 Tpidr_El1;
  /* 0x0028 */ unsigned __int64 KernelBvr[8];
  /* 0x0068 */ unsigned long KernelBcr[8];
  /* 0x0088 */ unsigned __int64 KernelWvr[2];
  /* 0x0098 */ unsigned long KernelWcr[2];
} KSPECIAL_REGISTERS, *PKSPECIAL_REGISTERS; /* size: 0x00a0 */

