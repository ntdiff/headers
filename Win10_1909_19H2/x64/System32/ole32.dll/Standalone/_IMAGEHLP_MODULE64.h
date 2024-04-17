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

typedef struct _IMAGEHLP_MODULE64
{
  /* 0x0000 */ unsigned long SizeOfStruct;
  /* 0x0008 */ unsigned __int64 BaseOfImage;
  /* 0x0010 */ unsigned long ImageSize;
  /* 0x0014 */ unsigned long TimeDateStamp;
  /* 0x0018 */ unsigned long CheckSum;
  /* 0x001c */ unsigned long NumSyms;
  /* 0x0020 */ enum SYM_TYPE SymType;
  /* 0x0024 */ char ModuleName[32];
  /* 0x0044 */ char ImageName[256];
  /* 0x0144 */ char LoadedImageName[256];
  /* 0x0244 */ char LoadedPdbName[256];
  /* 0x0344 */ unsigned long CVSig;
  /* 0x0348 */ char CVData[780];
  /* 0x0654 */ unsigned long PdbSig;
  /* 0x0658 */ struct _GUID PdbSig70;
  /* 0x0668 */ unsigned long PdbAge;
  /* 0x066c */ int PdbUnmatched;
  /* 0x0670 */ int DbgUnmatched;
  /* 0x0674 */ int LineNumbers;
  /* 0x0678 */ int GlobalSymbols;
  /* 0x067c */ int TypeInfo;
  /* 0x0680 */ int SourceIndexed;
  /* 0x0684 */ int Publics;
  /* 0x0688 */ unsigned long MachineType;
  /* 0x068c */ unsigned long Reserved;
} IMAGEHLP_MODULE64, *PIMAGEHLP_MODULE64; /* size: 0x0690 */

