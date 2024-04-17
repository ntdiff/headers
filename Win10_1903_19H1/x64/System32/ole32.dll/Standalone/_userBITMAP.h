typedef struct _userBITMAP
{
  /* 0x0000 */ long bmType;
  /* 0x0004 */ long bmWidth;
  /* 0x0008 */ long bmHeight;
  /* 0x000c */ long bmWidthBytes;
  /* 0x0010 */ unsigned short bmPlanes;
  /* 0x0012 */ unsigned short bmBitsPixel;
  /* 0x0014 */ unsigned long cbSize;
  /* 0x0018 */ unsigned char pBuffer[1];
  /* 0x0019 */ char __PADDING__[3];
} userBITMAP, *PuserBITMAP; /* size: 0x001c */

