struct RECTS
{
  /* 0x0000 */ short left;
  /* 0x0002 */ short top;
  /* 0x0004 */ short right;
  /* 0x0006 */ short bottom;
}; /* size: 0x0008 */

struct WMFHEADER
{
  /* 0x0000 */ unsigned short hmf;
  /* 0x0002 */ struct RECTS rcBox;
  /* 0x000a */ unsigned short inch;
  /* 0x000c */ unsigned long ulReserved;
  /* 0x0010 */ unsigned short checksum;
}; /* size: 0x0012 */

