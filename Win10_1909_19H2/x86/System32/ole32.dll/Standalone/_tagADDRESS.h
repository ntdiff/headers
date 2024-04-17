enum ADDRESS_MODE
{
  AddrMode1616 = 0,
  AddrMode1632 = 1,
  AddrModeReal = 2,
  AddrModeFlat = 3,
};

typedef struct _tagADDRESS
{
  /* 0x0000 */ unsigned long Offset;
  /* 0x0004 */ unsigned short Segment;
  /* 0x0008 */ enum ADDRESS_MODE Mode;
} tagADDRESS, *PtagADDRESS; /* size: 0x000c */

