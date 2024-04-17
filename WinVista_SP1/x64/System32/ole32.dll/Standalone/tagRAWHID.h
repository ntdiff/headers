struct tagRAWHID
{
  /* 0x0000 */ unsigned long dwSizeHid;
  /* 0x0004 */ unsigned long dwCount;
  /* 0x0008 */ unsigned char bRawData[1];
  /* 0x0009 */ char __PADDING__[3];
}; /* size: 0x000c */

