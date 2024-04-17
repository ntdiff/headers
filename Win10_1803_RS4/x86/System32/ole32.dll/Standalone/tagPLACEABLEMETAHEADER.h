struct tagWIN16RECT
{
  /* 0x0000 */ unsigned short left;
  /* 0x0002 */ unsigned short top;
  /* 0x0004 */ unsigned short right;
  /* 0x0006 */ unsigned short bottom;
}; /* size: 0x0008 */

struct tagPLACEABLEMETAHEADER
{
  /* 0x0000 */ unsigned long key;
  /* 0x0004 */ unsigned short hmf;
  /* 0x0006 */ struct tagWIN16RECT bbox;
  /* 0x000e */ unsigned short inch;
  /* 0x0010 */ unsigned long reserved;
  /* 0x0014 */ unsigned short checksum;
}; /* size: 0x0016 */

