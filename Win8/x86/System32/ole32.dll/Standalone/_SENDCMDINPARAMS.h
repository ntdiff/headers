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

typedef struct _SENDCMDINPARAMS
{
  /* 0x0000 */ unsigned long cBufferSize;
  /* 0x0004 */ struct _IDEREGS irDriveRegs;
  /* 0x000c */ unsigned char bDriveNumber;
  /* 0x000d */ unsigned char bReserved[3];
  /* 0x0010 */ unsigned long dwReserved[4];
  /* 0x0020 */ unsigned char bBuffer[1];
} SENDCMDINPARAMS, *PSENDCMDINPARAMS; /* size: 0x0021 */

