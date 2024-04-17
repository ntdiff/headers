typedef enum _NETSETUP_ENVIRONMENT_TYPE
{
  NetSetupEnvironmentApplicationOnline = 0,
  NetSetupEnvironmentCbsOnline = 1,
  NetSetupEnvironmentCbsOffline = 2,
  NetSetupEnvironmentRpcServer = 3,
  NetSetupEnvironmentMiniportPnp = 4,
  NetSetupEnvironmentTest = 5,
  NetSetupEnvironmentApplicationOffline = 6,
  NetSetupEnvironmentNetCfgShim = 7,
  NetSetupEnvironmentOSMigrationOffline = 8,
  NetSetupEnvironmentOSMigrationOnline = 9,
  NetSetupEnvironmentNotifyObjectHost = 10,
  NetSetupEnvironmentTransactionMonitor = 11,
  NetSetupEnvironmentTypeNotifyObjectReplay = 12,
} NETSETUP_ENVIRONMENT_TYPE, *PNETSETUP_ENVIRONMENT_TYPE;

