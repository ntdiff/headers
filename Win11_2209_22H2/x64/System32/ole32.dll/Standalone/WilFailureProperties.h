enum WilFailureProperties
{
  None = 0,
  IsEnabled = 1,
  AntiDefault = 2,
  FirstEnablementCheck = 4,
  PeriodicUsage = 16,
  ExplicitUsage = 32,
  ViolatesAssert = 64,
  RequestFailFast = 8192,
  RequestSuppressTelemetry = 16384,
  RequestDebugBreak = 0xffff8000,
};

