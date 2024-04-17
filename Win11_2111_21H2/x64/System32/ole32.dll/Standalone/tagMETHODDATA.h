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
  /* 0x0008 */ struct tagPARAMDATA* ppdata;
  /* 0x0010 */ long dispid;
  /* 0x0014 */ unsigned int iMeth;
  /* 0x0018 */ enum tagCALLCONV cc;
  /* 0x001c */ unsigned int cArgs;
  /* 0x0020 */ unsigned short wFlags;
  /* 0x0022 */ unsigned short vtReturn;
  /* 0x0024 */ long __PADDING__[1];
}; /* size: 0x0028 */

