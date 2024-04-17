class CPropertyBagEx
{
  /* 0x0008 */ int _fLcidInitialized : 1; /* bit position: 0 */
  /* 0x000c */ unsigned long _lcid;
  /* 0x0010 */ struct IPropertySetStorage* _ppropsetstgContainer;
  /* 0x0014 */ struct IPropertyStorage* _ppropstg;
  /* 0x0018 */ struct IBlockingLock* _pBlockingLock;
  /* 0x001c */ unsigned long _grfMode;
  /* 0x0020 */ long _cRefs;
}; /* size: 0x0024 */

class CExposedDocFile
{
  /* 0x0054 */ class CPubDocFile* _pdf;
  /* 0x0058 */ class CDFBasis* _pdfb;
  /* 0x005c */ class CPerContext* _ppc;
  /* 0x0060 */ unsigned long _sig;
  /* 0x0064 */ long _cReferences;
  /* 0x0068 */ class CPropertyBagEx _PropertyBagEx;
  /* 0x008c */ struct IUnknown* volatile _pFTM;
}; /* size: 0x0090 */

