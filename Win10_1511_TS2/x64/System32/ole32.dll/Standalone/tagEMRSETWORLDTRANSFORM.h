struct tagEMR
{
  /* 0x0000 */ unsigned long iType;
  /* 0x0004 */ unsigned long nSize;
}; /* size: 0x0008 */

struct tagXFORM
{
  /* 0x0000 */ float eM11;
  /* 0x0004 */ float eM12;
  /* 0x0008 */ float eM21;
  /* 0x000c */ float eM22;
  /* 0x0010 */ float eDx;
  /* 0x0014 */ float eDy;
}; /* size: 0x0018 */

struct tagEMRSETWORLDTRANSFORM
{
  /* 0x0000 */ struct tagEMR emr;
  /* 0x0008 */ struct tagXFORM xform;
}; /* size: 0x0020 */

