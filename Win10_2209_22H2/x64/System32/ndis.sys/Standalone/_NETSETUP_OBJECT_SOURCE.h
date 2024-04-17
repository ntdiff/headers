typedef enum _NETSETUP_OBJECT_SOURCE
{
  NetSetupObjectSourceUnknown = 0,
  NetSetupObjectSourcePartOfOS = 1,
  NetSetupObjectCreatedByOtherOSComponent = 2,
  NetSetupObjectCreatedByNetSetupInternal = 3,
  NetSetupObjectCreatedByOSMigration = 4,
  NetSetupObjectCreatedByNicInstallation = 5,
  NetSetupObjectCreatedByINetCfg = 6,
  NetSetupObjectSourceHardcoded = 7,
  NetSetupObjectSourceOfflineDism = 8,
  NetSetupObjectSourceUniversalInfRegistration = 9,
} NETSETUP_OBJECT_SOURCE, *PNETSETUP_OBJECT_SOURCE;

