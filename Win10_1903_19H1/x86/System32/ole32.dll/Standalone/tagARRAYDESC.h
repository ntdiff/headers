struct tagTYPEDESC
{
  union
  {
    /* 0x0000 */ struct tagTYPEDESC* lptdesc;
    /* 0x0000 */ struct tagARRAYDESC* lpadesc;
    /* 0x0000 */ unsigned long hreftype;
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned short vt;
  /* 0x0006 */ char __PADDING__[2];
}; /* size: 0x0008 */

struct tagSAFEARRAYBOUND
{
  /* 0x0000 */ unsigned long cElements;
  /* 0x0004 */ long lLbound;
}; /* size: 0x0008 */

struct tagARRAYDESC
{
  /* 0x0000 */ struct tagTYPEDESC tdescElem;
  /* 0x0008 */ unsigned short cDims;
  /* 0x000c */ struct tagSAFEARRAYBOUND rgbounds[1];
}; /* size: 0x0014 */

