enum OLETLS_PREVENT_RUNDOWN_MITIGATION
{
  NoMitigationInEffect = 0,
  MarshalingWithInParameterMitigation = 1,
  MarshalingWithInprocOutParameterMitigation = 2,
  MarshalingWithOutofprocOutParameterMitigation = 3,
  MarshalingWithMshlflagsTablestrong = 4,
  UnmarshalingWithInParameterMitigation = 5,
  UnmarshalingWithInprocOutParameterMitigation = 6,
  UnmarshalingWithOutofprocOutParameterMitigation = 7,
};

class PushTlsPreventRundownMitigation
{
  /* 0x0000 */ enum OLETLS_PREVENT_RUNDOWN_MITIGATION _currentMitigation;
  /* 0x0004 */ enum OLETLS_PREVENT_RUNDOWN_MITIGATION _savedMitigation;
}; /* size: 0x0008 */

