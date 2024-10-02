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

enum WilFailureSubscriptionIdKind
{
  None = 0,
  TIP = 1,
  Fix = 2,
  Feature = 3,
};

struct WilFailureCodeLocation
{
  /* 0x0000 */ unsigned short line;
  /* 0x0004 */ unsigned int functionHash;
  /* 0x0008 */ const char* file;
  /* 0x0010 */ const char* module;
}; /* size: 0x0018 */

struct WilFailureSubscriptionInfo
{
  /* 0x0000 */ enum WilFailureProperties properties;
  /* 0x0002 */ unsigned short version;
  /* 0x0004 */ unsigned int id;
  /* 0x0008 */ enum WilFailureSubscriptionIdKind idKind;
  /* 0x0010 */ struct WilFailureCodeLocation subscriptionLocation;
  /* 0x0028 */ HRESULT actionResults[3];
  /* 0x0034 */ long __PADDING__[1];
}; /* size: 0x0038 */

