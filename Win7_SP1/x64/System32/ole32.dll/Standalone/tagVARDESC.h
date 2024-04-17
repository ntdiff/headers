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

struct tagIDLDESC
{
  /* 0x0000 */ unsigned __int64 dwReserved;
  /* 0x0008 */ unsigned short wIDLFlags;
  /* 0x000a */ char __PADDING__[6];
}; /* size: 0x0010 */

struct tagPARAMDESC
{
  /* 0x0000 */ struct tagPARAMDESCEX* pparamdescex;
  /* 0x0008 */ unsigned short wParamFlags;
  /* 0x000a */ char __PADDING__[6];
}; /* size: 0x0010 */

struct tagELEMDESC
{
  /* 0x0000 */ struct tagTYPEDESC tdesc;
  union
  {
    /* 0x0010 */ struct tagIDLDESC idldesc;
    /* 0x0010 */ struct tagPARAMDESC paramdesc;
  }; /* size: 0x0010 */
}; /* size: 0x0020 */

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
  /* 0x0008 */ unsigned short* lpstrSchema;
  union
  {
    /* 0x0010 */ unsigned long oInst;
    /* 0x0010 */ struct tagVARIANT* lpvarValue;
  }; /* size: 0x0008 */
  /* 0x0018 */ struct tagELEMDESC elemdescVar;
  /* 0x0038 */ unsigned short wVarFlags;
  /* 0x003c */ enum tagVARKIND varkind;
}; /* size: 0x0040 */

