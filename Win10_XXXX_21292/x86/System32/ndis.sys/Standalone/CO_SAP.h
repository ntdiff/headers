struct CO_SAP
{
  /* 0x0000 */ unsigned long SapType;
  /* 0x0004 */ unsigned long SapLength;
  /* 0x0008 */ unsigned char Sap[1];
  /* 0x0009 */ char __PADDING__[3];
}; /* size: 0x000c */

