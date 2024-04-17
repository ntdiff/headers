class CComCatalog
{
  /* 0x0018 */ long m_cRef;
  /* 0x001c */ struct IComCatalogInternal* m_pCatalogRegNative;
  /* 0x0020 */ struct IComCatalogInternal* m_pCatalogCOMBaseInCLB;
  /* 0x0024 */ struct IComCatalogInternal* m_pCatalogRegNonNative;
  /* 0x0028 */ struct IComCatalogInternal* m_pCatalogCLB;
  /* 0x002c */ struct IComCatalogInternal* m_pCatalogSxS;
  union
  {
    /* 0x0000 */ int ms_fComPlusEnabled;
    /* 0x0000 */ int ms_fComPlusEnabledInitialized;
    /* 0x0000 */ int ms_fComPlusCatalogsResolved;
    /* 0x0000 */ int ms_fInitialized;
  }; /* size: 0x0004 */
}; /* size: 0x0030 */

