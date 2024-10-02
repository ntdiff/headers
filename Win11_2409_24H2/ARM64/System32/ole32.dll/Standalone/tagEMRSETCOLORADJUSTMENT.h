struct tagEMR
{
  /* 0x0000 */ unsigned long iType;
  /* 0x0004 */ unsigned long nSize;
}; /* size: 0x0008 */

struct tagCOLORADJUSTMENT
{
  /* 0x0000 */ unsigned short caSize;
  /* 0x0002 */ unsigned short caFlags;
  /* 0x0004 */ unsigned short caIlluminantIndex;
  /* 0x0006 */ unsigned short caRedGamma;
  /* 0x0008 */ unsigned short caGreenGamma;
  /* 0x000a */ unsigned short caBlueGamma;
  /* 0x000c */ unsigned short caReferenceBlack;
  /* 0x000e */ unsigned short caReferenceWhite;
  /* 0x0010 */ short caContrast;
  /* 0x0012 */ short caBrightness;
  /* 0x0014 */ short caColorfulness;
  /* 0x0016 */ short caRedGreenTint;
}; /* size: 0x0018 */

struct tagEMRSETCOLORADJUSTMENT
{
  /* 0x0000 */ struct tagEMR emr;
  /* 0x0008 */ struct tagCOLORADJUSTMENT ColorAdjustment;
}; /* size: 0x0020 */

