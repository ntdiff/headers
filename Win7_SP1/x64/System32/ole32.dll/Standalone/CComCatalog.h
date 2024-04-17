class CComCatalog
{
  /* 0x0030 */ long m_cRef;
  /* 0x0038 */ struct IComCatalogInternal* m_pCatalogRegNative;
  /* 0x0040 */ struct IComCatalogInternal* m_pCatalogCOMBaseInCLB;
  /* 0x0048 */ struct IComCatalogInternal* m_pCatalogRegNonNative;
  /* 0x0050 */ struct IComCatalogInternal* m_pCatalogCLB;
  /* 0x0058 */ struct IComCatalogInternal* m_pCatalogSxS;
  union
  {
    /* 0x0000 */ int ms_fComPlusEnabled;
    /* 0x0000 */ int ms_fComPlusEnabledInitialized;
    /* 0x0000 */ int ms_fComPlusCatalogsResolved;
    /* 0x0000 */ int ms_fInitialized;
  }; /* size: 0x0004 */
}; /* size: 0x0060 */

