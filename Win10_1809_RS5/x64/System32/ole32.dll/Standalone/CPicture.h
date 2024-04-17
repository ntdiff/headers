struct tagPICTDESC
{
  /* 0x0000 */ unsigned int cbSizeofstruct;
  /* 0x0004 */ unsigned int picType;
  union
  {
    struct
    {
      /* 0x0008 */ struct HBITMAP__* hbitmap;
      /* 0x0010 */ struct HPALETTE__* hpal;
    } /* size: 0x0010 */ bmp;
    struct
    {
      /* 0x0008 */ struct HMETAFILE__* hmeta;
      /* 0x0010 */ int xExt;
      /* 0x0014 */ int yExt;
    } /* size: 0x0010 */ wmf;
    struct
    {
      /* 0x0008 */ struct HICON__* hicon;
    } /* size: 0x0008 */ icon;
    struct
    {
      struct
      {
        /* 0x0008 */ struct HENHMETAFILE__* hemf;
      } /* size: 0x0008 */ emf;
      /* 0x0010 */ long __PADDING__[2];
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
}; /* size: 0x0018 */

struct tagSIZE
{
  /* 0x0000 */ long cx;
  /* 0x0004 */ long cy;
}; /* size: 0x0008 */

class CCacheStream
{
  /* 0x0008 */ unsigned long m_stmixCacheID;
}; /* size: 0x0010 */

class CRgPv
{
  /* 0x0000 */ unsigned int m_cElems;
  union
  {
    /* 0x0008 */ void* m_pv;
    /* 0x0008 */ void** m_rgpv;
  }; /* size: 0x0008 */
}; /* size: 0x0010 */

class CNotifyCP
{
  /* 0x0008 */ long m_cRefs;
  /* 0x0010 */ struct IConnectionPointContainer* m_pcpc;
  /* 0x0018 */ class CRgPv m_rgpv;
  /* 0x0028 */ long m_lFreezeCount;
}; /* size: 0x0030 */

class CPicture
{
  /* 0x0030 */ const unsigned char mc_fAsync : 1; /* bit position: 0 */
  /* 0x0038 */ struct tagPICTDESC m_pic;
  /* 0x0050 */ struct tagSIZE m_slPixels;
  /* 0x0058 */ struct tagSIZE m_slHimetric;
  /* 0x0060 */ struct HDC__* m_hdc;
  /* 0x0068 */ struct HBITMAP__* m_hbmpAnd;
  /* 0x0070 */ struct HBITMAP__* m_hbmpXor;
  /* 0x0078 */ struct HBITMAP__* m_hbmpMask;
  /* 0x0080 */ unsigned long m_lLen;
  /* 0x0088 */ class CGdiCustodian* m_pcstOwn;
  struct /* bitfield */
  {
    /* 0x0090 */ unsigned char m_fBitsLoaded : 1; /* bit position: 0 */
    /* 0x0090 */ unsigned char m_fOwn : 1; /* bit position: 1 */
    /* 0x0090 */ unsigned char m_fKeepOriginalFormat : 1; /* bit position: 2 */
  }; /* bitfield */
  /* 0x0091 */ unsigned char m_fTransparent;
  /* 0x0098 */ struct ISimpleBinding* m_qbndData;
  /* 0x00a0 */ class CCacheStream m_csmOriginalFormat;
  /* 0x00b0 */ long m_cRefs;
  /* 0x00b8 */ class CNotifyCP m_cpNotify;
  /* 0x00e8 */ struct METAINFO* m_pMetaInfo;
  /* 0x00f0 */ struct METADC* m_pCurMdc;
  /* 0x00f8 */ int m_fMetaDC;
  /* 0x00fc */ int m_nRecord;
  /* 0x0100 */ HRESULT m_error;
  /* 0x0108 */ struct tagLOGPALETTE* m_pColorSet;
  /* 0x0110 */ int m_fConvert;
  union
  {
    /* 0x0000 */ unsigned int s_cPictObjs;
    /* 0x0000 */ struct ITypeInfo* s_ptinfo;
  }; /* size: 0x0008 */
}; /* size: 0x0118 */

