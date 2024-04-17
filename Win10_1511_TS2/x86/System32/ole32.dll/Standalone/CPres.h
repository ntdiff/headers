enum FORMATTAG
{
  ftagNone = 0,
  ftagClipFormat = 1,
  ftagString = 2,
};

class CData
{
  /* 0x0000 */ unsigned long m_cbSize;
  /* 0x0004 */ void* m_pv;
  /* 0x0008 */ void* m_h;
  /* 0x000c */ int m_fNoFree;
}; /* size: 0x0010 */

class CFormat
{
  /* 0x0000 */ enum FORMATTAG m_ftag;
  /* 0x0004 */ unsigned short m_cf;
  /* 0x0008 */ class CData m_dataFormatString;
}; /* size: 0x0018 */

class CPres
{
  /* 0x0000 */ class CFormat m_format;
  /* 0x0018 */ unsigned long m_ulHeight;
  /* 0x001c */ unsigned long m_ulWidth;
  /* 0x0020 */ class CData m_data;
}; /* size: 0x0030 */

