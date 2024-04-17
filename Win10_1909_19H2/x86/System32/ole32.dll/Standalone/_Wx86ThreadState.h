typedef struct _Wx86ThreadState
{
  /* 0x0000 */ unsigned long* CallBx86Eip;
  /* 0x0004 */ void* DeallocationCpu;
  /* 0x0008 */ unsigned char UseKnownWx86Dll;
  /* 0x0009 */ char OleStubInvoked;
  /* 0x000a */ char __PADDING__[2];
} Wx86ThreadState, *PWx86ThreadState; /* size: 0x000c */

