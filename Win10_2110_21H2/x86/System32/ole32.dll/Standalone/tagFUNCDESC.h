enum tagFUNCKIND
{
  FUNC_VIRTUAL = 0,
  FUNC_PUREVIRTUAL = 1,
  FUNC_NONVIRTUAL = 2,
  FUNC_STATIC = 3,
  FUNC_DISPATCH = 4,
};

enum tagINVOKEKIND
{
  INVOKE_FUNC = 1,
  INVOKE_PROPERTYGET = 2,
  INVOKE_PROPERTYPUT = 4,
  INVOKE_PROPERTYPUTREF = 8,
};

enum tagCALLCONV
{
  CC_FASTCALL = 0,
  CC_CDECL = 1,
  CC_MSCPASCAL = 2,
  CC_PASCAL = 2,
  CC_MACPASCAL = 3,
  CC_STDCALL = 4,
  CC_FPFASTCALL = 5,
  CC_SYSCALL = 6,
  CC_MPWCDECL = 7,
  CC_MPWPASCAL = 8,
  CC_MAX = 9,
};

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

struct tagFUNCDESC
{
  /* 0x0000 */ long memid;
  /* 0x0004 */ long* lprgscode;
  /* 0x0008 */ struct tagELEMDESC* lprgelemdescParam;
  /* 0x000c */ enum tagFUNCKIND funckind;
  /* 0x0010 */ enum tagINVOKEKIND invkind;
  /* 0x0014 */ enum tagCALLCONV callconv;
  /* 0x0018 */ short cParams;
  /* 0x001a */ short cParamsOpt;
  /* 0x001c */ short oVft;
  /* 0x001e */ short cScodes;
  /* 0x0020 */ struct tagELEMDESC elemdescFunc;
  /* 0x0030 */ unsigned short wFuncFlags;
  /* 0x0032 */ char __PADDING__[2];
}; /* size: 0x0034 */

