class CBasedMSFPagePtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CBasedPagedVectorPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CMSFPage
{
  /* 0x0000 */ class CBasedMSFPagePtr _pmpNext;
  /* 0x0004 */ class CBasedMSFPagePtr _pmpPrev;
  /* 0x0008 */ unsigned long _sid;
  /* 0x000c */ unsigned long _ulOffset;
  /* 0x0010 */ class CBasedPagedVectorPtr _ppv;
  /* 0x0014 */ unsigned long _sect;
  /* 0x0018 */ unsigned long _dwFlags;
  /* 0x001c */ long _cReferences;
  /* 0x0020 */ unsigned char* _ab /* zero-length array */;
}; /* size: 0x0020 */

