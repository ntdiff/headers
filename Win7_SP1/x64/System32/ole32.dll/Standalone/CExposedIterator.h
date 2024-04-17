class CDfName
{
  /* 0x0000 */ unsigned char _ab[64];
  /* 0x0040 */ unsigned short _cb;
}; /* size: 0x0042 */

struct CExposedIterator
{
  /* 0x0030 */ class CPubDocFile* _ppdf;
  /* 0x0038 */ class CDFBasis* _pdfb;
  /* 0x0040 */ class CPerContext* _ppc;
  /* 0x0048 */ long _cReferences;
  /* 0x004c */ unsigned long _sig;
  /* 0x0050 */ class CDfName _dfnKey;
  /* 0x0092 */ char __PADDING__[6];
}; /* size: 0x0098 */

