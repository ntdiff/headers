struct tagPICTDESC
{
  /* 0x0000 */ unsigned int cbSizeofstruct;
  /* 0x0004 */ unsigned int picType;
  union
  {
    struct
    {
      /* 0x0008 */ struct HBITMAP__* hbitmap;
      /* 0x000c */ struct HPALETTE__* hpal;
    } /* size: 0x0008 */ bmp;
    struct
    {
      /* 0x0008 */ struct HMETAFILE__* hmeta;
      /* 0x000c */ int xExt;
      /* 0x0010 */ int yExt;
    } /* size: 0x000c */ wmf;
    struct
    {
      /* 0x0008 */ struct HICON__* hicon;
    } /* size: 0x0004 */ icon;
    struct
    {
      struct
      {
        /* 0x0008 */ struct HENHMETAFILE__* hemf;
      } /* size: 0x0004 */ emf;
      /* 0x000c */ long __PADDING__[2];
    }; /* size: 0x000c */
  }; /* size: 0x000c */
}; /* size: 0x0014 */

struct tagSIZE
{
  /* 0x0000 */ long cx;
  /* 0x0004 */ long cy;
}; /* size: 0x0008 */

class CCacheStream
{
  /* 0x0004 */ unsigned long m_stmixCacheID;
}; /* size: 0x0008 */

class CRgPv
{
  /* 0x0000 */ unsigned int m_cElems;
  union
  {
    /* 0x0004 */ void* m_pv;
    /* 0x0004 */ void** m_rgpv;
  }; /* size: 0x0004 */
}; /* size: 0x0008 */

class CNotifyCP
{
  /* 0x0004 */ long m_cRefs;
  /* 0x0008 */ struct IConnectionPointContainer* m_pcpc;
  /* 0x000c */ class CRgPv m_rgpv;
  /* 0x0014 */ long m_lFreezeCount;
}; /* size: 0x0018 */

class CPicture
{
  /* 0x0018 */ const unsigned char mc_fAsync : 1; /* bit position: 0 */
  /* 0x001c */ struct tagPICTDESC m_pic;
  /* 0x0030 */ struct tagSIZE m_slPixels;
  /* 0x0038 */ struct tagSIZE m_slHimetric;
  /* 0x0040 */ struct HDC__* m_hdc;
  /* 0x0044 */ struct HBITMAP__* m_hbmpAnd;
  /* 0x0048 */ struct HBITMAP__* m_hbmpXor;
  /* 0x004c */ struct HBITMAP__* m_hbmpMask;
  /* 0x0050 */ unsigned long m_lLen;
  /* 0x0054 */ class CGdiCustodian* m_pcstOwn;
  struct /* bitfield */
  {
    /* 0x0058 */ unsigned char m_fBitsLoaded : 1; /* bit position: 0 */
    /* 0x0058 */ unsigned char m_fOwn : 1; /* bit position: 1 */
    /* 0x0058 */ unsigned char m_fKeepOriginalFormat : 1; /* bit position: 2 */
  }; /* bitfield */
  /* 0x0059 */ unsigned char m_fTransparent;
  /* 0x005c */ struct ISimpleBinding* m_qbndData;
  /* 0x0060 */ class CCacheStream m_csmOriginalFormat;
  /* 0x0068 */ long m_cRefs;
  /* 0x006c */ class CNotifyCP m_cpNotify;
  /* 0x0084 */ struct METAINFO* m_pMetaInfo;
  /* 0x0088 */ struct METADC* m_pCurMdc;
  /* 0x008c */ int m_fMetaDC;
  /* 0x0090 */ int m_nRecord;
  /* 0x0094 */ HRESULT m_error;
  /* 0x0098 */ struct tagLOGPALETTE* m_pColorSet;
  /* 0x009c */ int m_fConvert;
  union
  {
    /* 0x0000 */ unsigned int s_cPictObjs;
    /* 0x0000 */ struct ITypeInfo* s_ptinfo;
  }; /* size: 0x0004 */
}; /* size: 0x00a0 */

