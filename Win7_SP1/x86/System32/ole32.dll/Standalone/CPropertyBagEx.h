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

