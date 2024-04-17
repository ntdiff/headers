class CBasedMStreamPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CBasedPubDocFilePtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CBasedGlobalContextPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CBasedFreeBlockPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CFreeList
{
  /* 0x0000 */ class CBasedFreeBlockPtr _pfbHead;
}; /* size: 0x0008 */

class CDFBasis
{
  union
  {
    struct
    {
      /* 0x0000 */ class CBasedMStreamPtr _pms;
      /* 0x0008 */ class CBasedMStreamPtr _pmsScratch;
      /* 0x0010 */ struct ILockBytes* _plkbBase;
      /* 0x0018 */ struct CFileStream* _pfstDirty;
      /* 0x0020 */ struct ILockBytes* _plkbOriginal;
      /* 0x0028 */ const unsigned long _dfOpen;
      /* 0x002c */ long _cReferences;
      /* 0x0030 */ class CBasedPubDocFilePtr _pdfCopyBase;
      /* 0x0038 */ class CBasedGlobalContextPtr _pgcGlobalContext;
      /* 0x0040 */ unsigned long _dwOrigLocks;
      /* 0x0044 */ unsigned long _dwSectorSize;
      /* 0x0048 */ class CFreeList _afrl[4];
    }; /* size: 0x0068 */
    /* 0x0000 */ unsigned __int64 _aReserveSize[4];
  }; /* size: 0x0068 */
  /* 0x0068 */ int _fDirectWriterMode;
  /* 0x006c */ int _fWriteLocked;
  /* 0x0070 */ struct IMalloc* const _pMalloc;
}; /* size: 0x0078 */

