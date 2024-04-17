struct tagForwardProcBuffer
{
  /* 0x0000 */ unsigned char pMethodsa[4][24];
  /* 0x0060 */ struct tagForwardProcBuffer* pNext;
  /* 0x0064 */ unsigned char pAsm[29];
  /* 0x0081 */ unsigned char pMethodsb[4][24];
  /* 0x00e1 */ char __PADDING__[3];
}; /* size: 0x00e4 */

