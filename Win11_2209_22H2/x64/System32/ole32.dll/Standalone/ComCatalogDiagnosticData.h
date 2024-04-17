enum ComCatalogDiagnosticData::Catalogs
{
  None = 0,
  SxS = 1,
  PackagedComCurrentPackage = 2,
  PrivateHive = 4,
  Cache = 8,
  CLB = 16,
  COMBaseInCLB = 32,
  PackagedComAllPackage = 64,
  RegistryNative = 128,
  RegistryX86WoW = 256,
  RegistryArm32WoW = 512,
  BSP = 1024,
  Driver = 2048,
};

struct ComCatalogDiagnosticData
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long FlagsForCache;
  /* 0x0008 */ enum ComCatalogDiagnosticData::Catalogs TriedCatalogs;
  /* 0x000c */ enum ComCatalogDiagnosticData::Catalogs FoundInCatalogs;
  /* 0x0010 */ enum ComCatalogDiagnosticData::Catalogs AcceptedCatalogs;
  /* 0x0014 */ enum ComCatalogDiagnosticData::Catalogs SelectedCatalog;
}; /* size: 0x0018 */

