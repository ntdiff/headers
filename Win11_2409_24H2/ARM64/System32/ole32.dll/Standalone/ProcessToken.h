enum ProcessToken::UserHiveOkState
{
  UserHiveOkStateNotDetermined = 0,
  UserHiveIsOk = 1,
  UserHiveIsNotOk = 2,
};

enum ProcessToken::AppContainerState
{
  NotDetermined = 0,
  AppContainer = 1,
  NotAppContainer = 2,
};

enum ProcessToken::AppSiloState
{
  AppSiloStateNotDetermined = 0,
  AppSilo = 1,
  NotAppSilo = 2,
};

enum ProcessToken::DesignModeState
{
  DesignModeNotDetermined = 0,
  InDesignMode = 1,
  InDesignModeV2 = 2,
  NotInDesignMode = 3,
};

enum ProcessToken::SysAppIdState
{
  SysAppIdNotDetermined = 0,
  SysAppIdPresent = 1,
  SysAppIdAbsent = 2,
};

enum ProcessToken::NoAllAppPackagesState
{
  NoAllAppPackagesNotDetermined = 0,
  NoAllAppPackagesPresent = 1,
  NoAllAppPackagesAbsent = 2,
};

enum ProcessToken::LifecycleManagerCanSuspendState
{
  LifecycleManagerCanSuspendNotDetermined = 0,
  LifecycleManagerCanSuspend = 1,
  LifecycleManagerCanNotSuspend = 2,
};

enum ProcessToken::WakeOnIntraPackageCallState
{
  WakeOnIntraPackageCallNotDetermined = 0,
  WakeOnIntraPackageCall = 1,
  NoWakeOnIntraPackageCall = 2,
};

enum ProcessToken::ProcessILState
{
  ProcessILUndetermined = 0,
  ProcessILIsLessThanMediumIL = 1,
  ProcessILIsMediumOrGreaterIL = 2,
};

class ProcessToken
{
  union
  {
    /* 0x0000 */ const unsigned long InvalidSessionId;
    /* 0x0000 */ void* _pSelfSid;
  }; /* size: 0x0008 */
  /* 0x0008 */ struct HSTRING__* volatile _stringSelfSid;
  /* 0x0010 */ void* _pPackageSid;
  /* 0x0018 */ struct HSTRING__* volatile _stringPackageSid;
  /* 0x0020 */ struct HSTRING__* volatile _packageMoniker;
  /* 0x0028 */ BOOL _fHasPackageMonikerBeenChecked;
  /* 0x002c */ enum ProcessToken::UserHiveOkState _userHiveOkState;
  /* 0x0030 */ enum ProcessToken::AppContainerState _appContainerState;
  /* 0x0034 */ enum ProcessToken::AppSiloState _appSiloState;
  /* 0x0038 */ enum ProcessToken::DesignModeState _designModeState;
  /* 0x003c */ enum ProcessToken::SysAppIdState _sysAppIdState;
  /* 0x0040 */ enum ProcessToken::NoAllAppPackagesState _noAllAppPackagesState;
  /* 0x0044 */ enum ProcessToken::LifecycleManagerCanSuspendState _lifecycleManagerCanSuspendState;
  /* 0x0048 */ enum ProcessToken::WakeOnIntraPackageCallState _wakeOnIntraPackageCallState;
  /* 0x004c */ enum ProcessToken::ProcessILState _processILState;
  /* 0x0050 */ BOOL _fHasPkgClaimBeenChecked;
  /* 0x0058 */ unsigned __int64 _pkgFlags;
  /* 0x0060 */ unsigned long _sessionId;
}; /* size: 0x0068 */

