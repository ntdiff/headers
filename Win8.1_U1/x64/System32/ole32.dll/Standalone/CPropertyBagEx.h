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

