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

