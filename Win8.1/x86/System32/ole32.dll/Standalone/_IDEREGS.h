typedef struct _IDEREGS
{
  /* 0x0000 */ unsigned char bFeaturesReg;
  /* 0x0001 */ unsigned char bSectorCountReg;
  /* 0x0002 */ unsigned char bSectorNumberReg;
  /* 0x0003 */ unsigned char bCylLowReg;
  /* 0x0004 */ unsigned char bCylHighReg;
  /* 0x0005 */ unsigned char bDriveHeadReg;
  /* 0x0006 */ unsigned char bCommandReg;
  /* 0x0007 */ unsigned char bReserved;
} IDEREGS, *PIDEREGS; /* size: 0x0008 */

