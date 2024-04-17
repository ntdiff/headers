struct CFileStream
{
  /* 0x0030 */ class CGlobalFileStream* _pgfst;
  /* 0x0038 */ class CPerContext* _ppc;
  /* 0x0040 */ void* _hFile;
  /* 0x0048 */ void* _hPreDuped;
  /* 0x0050 */ unsigned long _sig;
  /* 0x0054 */ long _cReferences;
  /* 0x0058 */ struct IMalloc* const _pMalloc;
  /* 0x0060 */ void* _hMapObject;
  /* 0x0068 */ unsigned char* _pbBaseAddr;
  /* 0x0070 */ unsigned long _cbViewSize;
  /* 0x0074 */ long __PADDING__[1];
}; /* size: 0x0078 */

