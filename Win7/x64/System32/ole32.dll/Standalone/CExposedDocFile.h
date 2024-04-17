class CPropertyBagEx
{
  /* 0x0010 */ int _fLcidInitialized : 1; /* bit position: 0 */
  /* 0x0014 */ unsigned long _lcid;
  /* 0x0018 */ struct IPropertySetStorage* _ppropsetstgContainer;
  /* 0x0020 */ struct IPropertyStorage* _ppropstg;
  /* 0x0028 */ struct IBlockingLock* _pBlockingLock;
  /* 0x0030 */ unsigned long _grfMode;
  /* 0x0034 */ long _cRefs;
}; /* size: 0x0038 */

class CExposedDocFile
{
  /* 0x0090 */ class CPubDocFile* _pdf;
  /* 0x0098 */ class CDFBasis* _pdfb;
  /* 0x00a0 */ class CPerContext* _ppc;
  /* 0x00a8 */ unsigned long _sig;
  /* 0x00ac */ long _cReferences;
  /* 0x00b0 */ class CPropertyBagEx _PropertyBagEx;
}; /* size: 0x00e8 */

