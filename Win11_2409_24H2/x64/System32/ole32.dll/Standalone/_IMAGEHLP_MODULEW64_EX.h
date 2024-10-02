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

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _IMAGEHLP_MODULEW64
{
  /* 0x0000 */ unsigned long SizeOfStruct;
  /* 0x0008 */ unsigned __int64 BaseOfImage;
  /* 0x0010 */ unsigned long ImageSize;
  /* 0x0014 */ unsigned long TimeDateStamp;
  /* 0x0018 */ unsigned long CheckSum;
  /* 0x001c */ unsigned long NumSyms;
  /* 0x0020 */ enum SYM_TYPE SymType;
  /* 0x0024 */ wchar_t ModuleName[32];
  /* 0x0064 */ wchar_t ImageName[256];
  /* 0x0264 */ wchar_t LoadedImageName[256];
  /* 0x0464 */ wchar_t LoadedPdbName[256];
  /* 0x0664 */ unsigned long CVSig;
  /* 0x0668 */ wchar_t CVData[780];
  /* 0x0c80 */ unsigned long PdbSig;
  /* 0x0c84 */ struct _GUID PdbSig70;
  /* 0x0c94 */ unsigned long PdbAge;
  /* 0x0c98 */ int PdbUnmatched;
  /* 0x0c9c */ int DbgUnmatched;
  /* 0x0ca0 */ int LineNumbers;
  /* 0x0ca4 */ int GlobalSymbols;
  /* 0x0ca8 */ int TypeInfo;
  /* 0x0cac */ int SourceIndexed;
  /* 0x0cb0 */ int Publics;
  /* 0x0cb4 */ unsigned long MachineType;
  /* 0x0cb8 */ unsigned long Reserved;
  /* 0x0cbc */ long __PADDING__[1];
} IMAGEHLP_MODULEW64, *PIMAGEHLP_MODULEW64; /* size: 0x0cc0 */

typedef struct _IMAGEHLP_MODULEW64_EX
{
  /* 0x0000 */ struct _IMAGEHLP_MODULEW64 Module;
  /* 0x0cc0 */ unsigned long RegionFlags;
  /* 0x0cc4 */ long __PADDING__[1];
} IMAGEHLP_MODULEW64_EX, *PIMAGEHLP_MODULEW64_EX; /* size: 0x0cc8 */

