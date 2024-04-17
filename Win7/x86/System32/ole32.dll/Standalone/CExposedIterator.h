class CDfName
{
  /* 0x0000 */ unsigned char _ab[64];
  /* 0x0040 */ unsigned short _cb;
}; /* size: 0x0042 */

struct CExposedIterator
{
  /* 0x001c */ class CPubDocFile* _ppdf;
  /* 0x0020 */ class CDFBasis* _pdfb;
  /* 0x0024 */ class CPerContext* _ppc;
  /* 0x0028 */ long _cReferences;
  /* 0x002c */ unsigned long _sig;
  /* 0x0030 */ class CDfName _dfnKey;
  /* 0x0072 */ char __PADDING__[2];
}; /* size: 0x0074 */

