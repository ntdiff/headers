struct tagTYPEDESC
{
  union
  {
    /* 0x0000 */ struct tagTYPEDESC* lptdesc;
    /* 0x0000 */ struct tagARRAYDESC* lpadesc;
    /* 0x0000 */ unsigned long hreftype;
  }; /* size: 0x0008 */
  /* 0x0008 */ unsigned short vt;
  /* 0x000a */ char __PADDING__[6];
}; /* size: 0x0010 */

struct tagSAFEARRAYBOUND
{
  /* 0x0000 */ unsigned long cElements;
  /* 0x0004 */ long lLbound;
}; /* size: 0x0008 */

struct tagARRAYDESC
{
  /* 0x0000 */ struct tagTYPEDESC tdescElem;
  /* 0x0010 */ unsigned short cDims;
  /* 0x0014 */ struct tagSAFEARRAYBOUND rgbounds[1];
  /* 0x001c */ long __PADDING__[1];
}; /* size: 0x0020 */

