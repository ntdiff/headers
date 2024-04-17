class CBasedMStreamPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CBasedPubDocFilePtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CBasedGlobalContextPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CBasedFreeBlockPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CFreeList
{
  /* 0x0000 */ class CBasedFreeBlockPtr _pfbHead;
}; /* size: 0x0004 */

class CDFBasis
{
  union
  {
    struct
    {
      /* 0x0000 */ class CBasedMStreamPtr _pms;
      /* 0x0004 */ class CBasedMStreamPtr _pmsScratch;
      /* 0x0008 */ struct ILockBytes* _plkbBase;
      /* 0x000c */ struct CFileStream* _pfstDirty;
      /* 0x0010 */ struct ILockBytes* _plkbOriginal;
      /* 0x0014 */ const unsigned long _dfOpen;
      /* 0x0018 */ long _cReferences;
      /* 0x001c */ class CBasedPubDocFilePtr _pdfCopyBase;
      /* 0x0020 */ class CBasedGlobalContextPtr _pgcGlobalContext;
      /* 0x0024 */ unsigned long _dwOrigLocks;
      /* 0x0028 */ unsigned long _dwSectorSize;
      /* 0x002c */ class CFreeList _afrl[4];
    }; /* size: 0x003c */
    /* 0x0000 */ unsigned int _aReserveSize[4];
  }; /* size: 0x003c */
  /* 0x003c */ int _fDirectWriterMode;
  /* 0x0040 */ int _fWriteLocked;
  /* 0x0044 */ struct IMalloc* const _pMalloc;
}; /* size: 0x0048 */

