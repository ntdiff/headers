struct tagPIXELFORMATDESCRIPTOR
{
  /* 0x0000 */ unsigned short nSize;
  /* 0x0002 */ unsigned short nVersion;
  /* 0x0004 */ unsigned long dwFlags;
  /* 0x0008 */ unsigned char iPixelType;
  /* 0x0009 */ unsigned char cColorBits;
  /* 0x000a */ unsigned char cRedBits;
  /* 0x000b */ unsigned char cRedShift;
  /* 0x000c */ unsigned char cGreenBits;
  /* 0x000d */ unsigned char cGreenShift;
  /* 0x000e */ unsigned char cBlueBits;
  /* 0x000f */ unsigned char cBlueShift;
  /* 0x0010 */ unsigned char cAlphaBits;
  /* 0x0011 */ unsigned char cAlphaShift;
  /* 0x0012 */ unsigned char cAccumBits;
  /* 0x0013 */ unsigned char cAccumRedBits;
  /* 0x0014 */ unsigned char cAccumGreenBits;
  /* 0x0015 */ unsigned char cAccumBlueBits;
  /* 0x0016 */ unsigned char cAccumAlphaBits;
  /* 0x0017 */ unsigned char cDepthBits;
  /* 0x0018 */ unsigned char cStencilBits;
  /* 0x0019 */ unsigned char cAuxBuffers;
  /* 0x001a */ unsigned char iLayerType;
  /* 0x001b */ unsigned char bReserved;
  /* 0x001c */ unsigned long dwLayerMask;
  /* 0x0020 */ unsigned long dwVisibleMask;
  /* 0x0024 */ unsigned long dwDamageMask;
}; /* size: 0x0028 */

