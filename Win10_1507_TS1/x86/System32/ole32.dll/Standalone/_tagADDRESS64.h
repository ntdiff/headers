enum ADDRESS_MODE
{
  AddrMode1616 = 0,
  AddrMode1632 = 1,
  AddrModeReal = 2,
  AddrModeFlat = 3,
};

typedef struct _tagADDRESS64
{
  /* 0x0000 */ unsigned __int64 Offset;
  /* 0x0008 */ unsigned short Segment;
  /* 0x000c */ enum ADDRESS_MODE Mode;
} tagADDRESS64, *PtagADDRESS64; /* size: 0x0010 */

