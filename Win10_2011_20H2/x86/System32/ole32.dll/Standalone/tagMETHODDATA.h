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

struct tagMETHODDATA
{
  /* 0x0000 */ wchar_t* szName;
  /* 0x0004 */ struct tagPARAMDATA* ppdata;
  /* 0x0008 */ long dispid;
  /* 0x000c */ unsigned int iMeth;
  /* 0x0010 */ enum tagCALLCONV cc;
  /* 0x0014 */ unsigned int cArgs;
  /* 0x0018 */ unsigned short wFlags;
  /* 0x001a */ unsigned short vtReturn;
}; /* size: 0x001c */

