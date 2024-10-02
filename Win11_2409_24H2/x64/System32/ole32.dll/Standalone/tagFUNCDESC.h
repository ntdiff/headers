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

struct tagFUNCDESC
{
  /* 0x0000 */ long memid;
  /* 0x0008 */ long* lprgscode;
  /* 0x0010 */ struct tagELEMDESC* lprgelemdescParam;
  /* 0x0018 */ enum tagFUNCKIND funckind;
  /* 0x001c */ enum tagINVOKEKIND invkind;
  /* 0x0020 */ enum tagCALLCONV callconv;
  /* 0x0024 */ short cParams;
  /* 0x0026 */ short cParamsOpt;
  /* 0x0028 */ short oVft;
  /* 0x002a */ short cScodes;
  /* 0x0030 */ struct tagELEMDESC elemdescFunc;
  /* 0x0050 */ unsigned short wFuncFlags;
  /* 0x0052 */ char __PADDING__[6];
}; /* size: 0x0058 */

