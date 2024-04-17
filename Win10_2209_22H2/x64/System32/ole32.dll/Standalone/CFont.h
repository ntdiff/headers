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

class CFontEventsCP
{
  /* 0x0008 */ long m_cRefs;
  /* 0x0010 */ struct IConnectionPointContainer* m_pcpc;
  /* 0x0018 */ class CRgPv m_rgpv;
}; /* size: 0x0028 */

union tagCY
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long Lo;
      /* 0x0004 */ long Hi;
    }; /* size: 0x0008 */
    /* 0x0000 */ __int64 int64;
  }; /* size: 0x0008 */
}; /* size: 0x0008 */

struct FR
{
  /* 0x0000 */ union tagCY cySize;
  /* 0x0008 */ long cyLogical;
  /* 0x000c */ long cyHimetric;
  /* 0x0010 */ short sCharset;
  /* 0x0012 */ short sWeight;
  union
  {
    struct /* bitfield */
    {
      /* 0x0014 */ unsigned char fBold : 1; /* bit position: 0 */
      /* 0x0014 */ unsigned char fItalic : 1; /* bit position: 1 */
      /* 0x0014 */ unsigned char fUnderline : 1; /* bit position: 2 */
      /* 0x0014 */ unsigned char fStrikethrough : 1; /* bit position: 3 */
    }; /* bitfield */
    /* 0x0014 */ unsigned char bFlags;
  }; /* size: 0x0001 */
  /* 0x0016 */ wchar_t rgchFace[32];
  /* 0x0056 */ char __PADDING__[2];
}; /* size: 0x0058 */

class CFont
{
  /* 0x0030 */ class CNotifyCP m_cpNotify;
  /* 0x0060 */ class CFontEventsCP m_cpEvents;
  /* 0x0088 */ struct FR m_fr;
  /* 0x00e0 */ struct HDC__* m_hdc;
  /* 0x00e8 */ struct HFONT__* m_hfont;
  /* 0x00f0 */ int m_nFcr;
  /* 0x00f4 */ long m_cRefs;
  struct /* bitfield */
  {
    /* 0x00f8 */ unsigned char m_fNameDirty : 1; /* bit position: 0 */
    /* 0x00f8 */ unsigned char m_fCharSetDirty : 1; /* bit position: 1 */
    /* 0x00f8 */ unsigned char m_fNotifyOff : 1; /* bit position: 2 */
  }; /* bitfield */
  union
  {
    /* 0x0000 */ int s_cFcr;
    /* 0x0000 */ struct FCR* s_rgfcr;
    /* 0x0000 */ int s_cFontObjs;
    /* 0x0000 */ int s_fInit;
    /* 0x0000 */ struct ITypeInfo* s_ptinfo;
  }; /* size: 0x0008 */
}; /* size: 0x0100 */

