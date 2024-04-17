enum WilFailureReportKind
{
  Exception = 0,
  Return = 1,
  Log = 2,
  FailFast = 3,
  Assert = 4,
};

enum WilFailureReportFlags
{
  None = 0,
  SuppressUnwatched = 1,
  SuppressRecent = 2,
  SuppressWatched = 4,
  AlwaysMonitorUnwatched = 8,
};

struct WilFailureCodeLocation
{
  /* 0x0000 */ unsigned short line;
  /* 0x0004 */ unsigned int functionHash;
  /* 0x0008 */ const char* file;
  /* 0x0010 */ const char* module;
}; /* size: 0x0018 */

struct WilFailureReport
{
  /* 0x0000 */ HRESULT hr;
  /* 0x0008 */ const wchar_t* message;
  /* 0x0010 */ enum WilFailureReportKind kind;
  /* 0x0012 */ enum WilFailureReportFlags flags;
  /* 0x0018 */ struct WilFailureCodeLocation location;
}; /* size: 0x0030 */

