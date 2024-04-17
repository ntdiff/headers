enum WilFailureAction
{
  None = 0,
  RequestFailFast = 1,
  RequestSuppressTelemetry = 2,
  RequestDebugBreak = 3,
};

struct WilFailureReportInformation
{
  /* 0x0000 */ long id;
  /* 0x0004 */ enum WilFailureAction action;
  /* 0x0005 */ char __PADDING__[3];
}; /* size: 0x0008 */

