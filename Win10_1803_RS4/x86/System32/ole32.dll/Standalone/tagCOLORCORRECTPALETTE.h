struct tagEMR
{
  /* 0x0000 */ unsigned long iType;
  /* 0x0004 */ unsigned long nSize;
}; /* size: 0x0008 */

struct tagCOLORCORRECTPALETTE
{
  /* 0x0000 */ struct tagEMR emr;
  /* 0x0008 */ unsigned long ihPalette;
  /* 0x000c */ unsigned long nFirstEntry;
  /* 0x0010 */ unsigned long nPalEntries;
  /* 0x0014 */ unsigned long nReserved;
}; /* size: 0x0018 */

