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

enum ProcessToken::DesignModeState
{
  DesignModeNotDetermined = 0,
  InDesignMode = 1,
  NotInDesignMode = 2,
};

enum ProcessToken::SysAppIdState
{
  SysAppIdNotDetermined = 0,
  SysAppIdPresent = 1,
  SysAppIdAbsent = 2,
};

enum ProcessToken::LifecycleManagerCanSuspendState
{
  LifecycleManagerCanSuspendNotDetermined = 0,
  LifecycleManagerCanSuspend = 1,
  LifecycleManagerCanNotSuspend = 2,
};

enum ProcessToken::ProcessILState
{
  ProcessILUndetermined = 0,
  ProcessILIsLessThanMediumIL = 1,
  ProcessILIsMediumOrGreaterIL = 2,
};

class ProcessToken
{
  /* 0x0000 */ void* _pSelfSid;
  /* 0x0008 */ wchar_t* _pszSelfSid;
  /* 0x0010 */ void* _pPackageSid;
  /* 0x0018 */ wchar_t* _pszPackageSid;
  /* 0x0020 */ wchar_t* _pszPackageMoniker;
  /* 0x0028 */ int _fHasPackageMoniker;
  /* 0x002c */ enum ProcessToken::UserHiveOkState _userHiveOkState;
  /* 0x0030 */ enum ProcessToken::AppContainerState _appContainerState;
  /* 0x0034 */ enum ProcessToken::DesignModeState _designModeState;
  /* 0x0038 */ enum ProcessToken::SysAppIdState _sysAppIdState;
  /* 0x003c */ enum ProcessToken::LifecycleManagerCanSuspendState _lifecycleManagerCanSuspendState;
  /* 0x0040 */ enum ProcessToken::ProcessILState _processILState;
}; /* size: 0x0048 */

