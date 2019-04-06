typedef struct _NB10
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long Offset;
  /* 0x0008 */ unsigned long TimeStamp;
  /* 0x000c */ unsigned long Age;
  /* 0x0010 */ char PdbName[1];
  /* 0x0011 */ char __PADDING__[3];
} NB10, *PNB10; /* size: 0x0014 */

