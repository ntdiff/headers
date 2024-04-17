typedef struct _KNONVOLATILE_CONTEXT_POINTERS
{
  union
  {
    /* 0x0000 */ struct _M128A* FloatingContext[16];
    struct
    {
      /* 0x0000 */ struct _M128A* Xmm0;
      /* 0x0008 */ struct _M128A* Xmm1;
      /* 0x0010 */ struct _M128A* Xmm2;
      /* 0x0018 */ struct _M128A* Xmm3;
      /* 0x0020 */ struct _M128A* Xmm4;
      /* 0x0028 */ struct _M128A* Xmm5;
      /* 0x0030 */ struct _M128A* Xmm6;
      /* 0x0038 */ struct _M128A* Xmm7;
      /* 0x0040 */ struct _M128A* Xmm8;
      /* 0x0048 */ struct _M128A* Xmm9;
      /* 0x0050 */ struct _M128A* Xmm10;
      /* 0x0058 */ struct _M128A* Xmm11;
      /* 0x0060 */ struct _M128A* Xmm12;
      /* 0x0068 */ struct _M128A* Xmm13;
      /* 0x0070 */ struct _M128A* Xmm14;
      /* 0x0078 */ struct _M128A* Xmm15;
    }; /* size: 0x0080 */
  }; /* size: 0x0080 */
  union
  {
    /* 0x0080 */ unsigned __int64* IntegerContext[16];
    struct
    {
      /* 0x0080 */ unsigned __int64* Rax;
      /* 0x0088 */ unsigned __int64* Rcx;
      /* 0x0090 */ unsigned __int64* Rdx;
      /* 0x0098 */ unsigned __int64* Rbx;
      /* 0x00a0 */ unsigned __int64* Rsp;
      /* 0x00a8 */ unsigned __int64* Rbp;
      /* 0x00b0 */ unsigned __int64* Rsi;
      /* 0x00b8 */ unsigned __int64* Rdi;
      /* 0x00c0 */ unsigned __int64* R8;
      /* 0x00c8 */ unsigned __int64* R9;
      /* 0x00d0 */ unsigned __int64* R10;
      /* 0x00d8 */ unsigned __int64* R11;
      /* 0x00e0 */ unsigned __int64* R12;
      /* 0x00e8 */ unsigned __int64* R13;
      /* 0x00f0 */ unsigned __int64* R14;
      /* 0x00f8 */ unsigned __int64* R15;
    }; /* size: 0x0080 */
  }; /* size: 0x0080 */
} KNONVOLATILE_CONTEXT_POINTERS, *PKNONVOLATILE_CONTEXT_POINTERS; /* size: 0x0100 */

