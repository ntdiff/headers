struct tagEMR
{
  /* 0x0000 */ unsigned long iType;
  /* 0x0004 */ unsigned long nSize;
}; /* size: 0x0008 */

struct tagPALETTEENTRY
{
  /* 0x0000 */ unsigned char peRed;
  /* 0x0001 */ unsigned char peGreen;
  /* 0x0002 */ unsigned char peBlue;
  /* 0x0003 */ unsigned char peFlags;
}; /* size: 0x0004 */

struct tagEMRSETPALETTEENTRIES
{
  /* 0x0000 */ struct tagEMR emr;
  /* 0x0008 */ unsigned long ihPal;
  /* 0x000c */ unsigned long iStart;
  /* 0x0010 */ unsigned long cEntries;
  /* 0x0014 */ struct tagPALETTEENTRY aPalEntries[1];
}; /* size: 0x0018 */

