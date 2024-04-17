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

struct tagIDLDESC
{
  /* 0x0000 */ unsigned long dwReserved;
  /* 0x0004 */ unsigned short wIDLFlags;
  /* 0x0006 */ char __PADDING__[2];
}; /* size: 0x0008 */

struct tagPARAMDESC
{
  /* 0x0000 */ struct tagPARAMDESCEX* pparamdescex;
  /* 0x0004 */ unsigned short wParamFlags;
  /* 0x0006 */ char __PADDING__[2];
}; /* size: 0x0008 */

struct tagELEMDESC
{
  /* 0x0000 */ struct tagTYPEDESC tdesc;
  union
  {
    /* 0x0008 */ struct tagIDLDESC idldesc;
    /* 0x0008 */ struct tagPARAMDESC paramdesc;
  }; /* size: 0x0008 */
}; /* size: 0x0010 */

enum tagVARKIND
{
  VAR_PERINSTANCE = 0,
  VAR_STATIC = 1,
  VAR_CONST = 2,
  VAR_DISPATCH = 3,
};

struct tagVARDESC
{
  /* 0x0000 */ long memid;
  /* 0x0004 */ unsigned short* lpstrSchema;
  union
  {
    /* 0x0008 */ unsigned long oInst;
    /* 0x0008 */ struct tagVARIANT* lpvarValue;
  }; /* size: 0x0004 */
  /* 0x000c */ struct tagELEMDESC elemdescVar;
  /* 0x001c */ unsigned short wVarFlags;
  /* 0x0020 */ enum tagVARKIND varkind;
}; /* size: 0x0024 */

