struct tagSAFEARRAYBOUND
{
  /* 0x0000 */ unsigned long cElements;
  /* 0x0004 */ long lLbound;
}; /* size: 0x0008 */

struct tagSAFEARRAY
{
  /* 0x0000 */ unsigned short cDims;
  /* 0x0002 */ unsigned short fFeatures;
  /* 0x0004 */ unsigned long cbElements;
  /* 0x0008 */ unsigned long cLocks;
  /* 0x0010 */ void* pvData;
  /* 0x0018 */ struct tagSAFEARRAYBOUND rgsabound[1];
}; /* size: 0x0020 */

