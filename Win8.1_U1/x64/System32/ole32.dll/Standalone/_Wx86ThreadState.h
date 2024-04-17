typedef struct _Wx86ThreadState
{
  /* 0x0000 */ unsigned long* CallBx86Eip;
  /* 0x0008 */ void* DeallocationCpu;
  /* 0x0010 */ unsigned char UseKnownWx86Dll;
  /* 0x0011 */ char OleStubInvoked;
  /* 0x0012 */ char __PADDING__[6];
} Wx86ThreadState, *PWx86ThreadState; /* size: 0x0018 */

