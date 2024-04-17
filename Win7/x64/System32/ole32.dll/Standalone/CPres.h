enum FORMATTAG
{
  ftagNone = 0,
  ftagClipFormat = 1,
  ftagString = 2,
};

class CData
{
  /* 0x0000 */ unsigned long m_cbSize;
  /* 0x0008 */ void* m_pv;
  /* 0x0010 */ void* m_h;
  /* 0x0018 */ int m_fNoFree;
}; /* size: 0x0020 */

class CFormat
{
  /* 0x0000 */ enum FORMATTAG m_ftag;
  /* 0x0008 */ unsigned short m_cf;
  /* 0x0010 */ class CData m_dataFormatString;
}; /* size: 0x0030 */

class CPres
{
  /* 0x0000 */ class CFormat m_format;
  /* 0x0030 */ unsigned long m_ulHeight;
  /* 0x0034 */ unsigned long m_ulWidth;
  /* 0x0038 */ class CData m_data;
}; /* size: 0x0058 */

