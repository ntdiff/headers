enum SYM_TYPE
{
  SymNone = 0,
  SymCoff = 1,
  SymCv = 2,
  SymPdb = 3,
  SymExport = 4,
  SymDeferred = 5,
  SymSym = 6,
  SymDia = 7,
  SymVirtual = 8,
  NumSymTypes = 9,
};

typedef struct _IMAGEHLP_MODULEW
{
  /* 0x0000 */ unsigned long SizeOfStruct;
  /* 0x0004 */ unsigned long BaseOfImage;
  /* 0x0008 */ unsigned long ImageSize;
  /* 0x000c */ unsigned long TimeDateStamp;
  /* 0x0010 */ unsigned long CheckSum;
  /* 0x0014 */ unsigned long NumSyms;
  /* 0x0018 */ enum SYM_TYPE SymType;
  /* 0x001c */ wchar_t ModuleName[32];
  /* 0x005c */ wchar_t ImageName[256];
  /* 0x025c */ wchar_t LoadedImageName[256];
} IMAGEHLP_MODULEW, *PIMAGEHLP_MODULEW; /* size: 0x045c */

