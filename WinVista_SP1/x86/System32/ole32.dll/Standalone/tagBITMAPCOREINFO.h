struct tagBITMAPCOREHEADER
{
  /* 0x0000 */ unsigned long bcSize;
  /* 0x0004 */ unsigned short bcWidth;
  /* 0x0006 */ unsigned short bcHeight;
  /* 0x0008 */ unsigned short bcPlanes;
  /* 0x000a */ unsigned short bcBitCount;
}; /* size: 0x000c */

struct tagRGBTRIPLE
{
  /* 0x0000 */ unsigned char rgbtBlue;
  /* 0x0001 */ unsigned char rgbtGreen;
  /* 0x0002 */ unsigned char rgbtRed;
}; /* size: 0x0003 */

struct tagBITMAPCOREINFO
{
  /* 0x0000 */ struct tagBITMAPCOREHEADER bmciHeader;
  /* 0x000c */ struct tagRGBTRIPLE bmciColors[1];
  /* 0x000f */ char __PADDING__[1];
}; /* size: 0x0010 */

