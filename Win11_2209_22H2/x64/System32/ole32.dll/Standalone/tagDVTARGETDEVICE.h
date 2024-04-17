struct tagDVTARGETDEVICE
{
  /* 0x0000 */ unsigned long tdSize;
  /* 0x0004 */ unsigned short tdDriverNameOffset;
  /* 0x0006 */ unsigned short tdDeviceNameOffset;
  /* 0x0008 */ unsigned short tdPortNameOffset;
  /* 0x000a */ unsigned short tdExtDevmodeOffset;
  /* 0x000c */ unsigned char tdData[1];
  /* 0x000d */ char __PADDING__[3];
}; /* size: 0x0010 */

