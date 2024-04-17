struct tagPROPERTYIDOFFSET
{
  /* 0x0000 */ unsigned long propertyID;
  /* 0x0004 */ unsigned long dwOffset;
}; /* size: 0x0008 */

struct tagPROPERTYSECTIONHEADER
{
  /* 0x0000 */ unsigned long cbSection;
  /* 0x0004 */ unsigned long cProperties;
  /* 0x0008 */ struct tagPROPERTYIDOFFSET rgprop[1];
}; /* size: 0x0010 */

