struct CFileStream
{
  /* 0x0018 */ class CGlobalFileStream* _pgfst;
  /* 0x001c */ class CPerContext* _ppc;
  /* 0x0020 */ void* _hFile;
  /* 0x0024 */ void* _hPreDuped;
  /* 0x0028 */ unsigned long _sig;
  /* 0x002c */ long _cReferences;
  /* 0x0030 */ struct IMalloc* const _pMalloc;
  /* 0x0034 */ void* _hMapObject;
  /* 0x0038 */ unsigned char* _pbBaseAddr;
  /* 0x003c */ unsigned long _cbViewSize;
}; /* size: 0x0040 */

