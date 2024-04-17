class CBasedMSFPagePtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CBasedPagedVectorPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CMSFPage
{
  /* 0x0000 */ class CBasedMSFPagePtr _pmpNext;
  /* 0x0008 */ class CBasedMSFPagePtr _pmpPrev;
  /* 0x0010 */ unsigned long _sid;
  /* 0x0014 */ unsigned long _ulOffset;
  /* 0x0018 */ class CBasedPagedVectorPtr _ppv;
  /* 0x0020 */ unsigned long _sect;
  /* 0x0024 */ unsigned long _dwFlags;
  /* 0x0028 */ long _cReferences;
  /* 0x0030 */ unsigned __int64 ulPadding;
  /* 0x0038 */ unsigned char* _ab /* zero-length array */;
}; /* size: 0x0038 */

