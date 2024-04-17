typedef enum _SHUTDOWN_ACTION
{
  ShutdownNoReboot = 0,
  ShutdownReboot = 1,
  ShutdownPowerOff = 2,
  ShutdownRebootForRecovery = 3,
} SHUTDOWN_ACTION, *PSHUTDOWN_ACTION;

