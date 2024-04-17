typedef enum _EDP_CRED_SVC_INFO_TYPE
{
  EdpCredSvcInfo_Unknown = 0,
  EdpCredSvcInfo_DplKeyState = 1,
  EdpCredSvcInfo_RevocationInfo = 2,
  EdpCredSvcInfo_Test_ReloadConfig = 3,
  EdpCredSvcInfo_Test_SetLockState = 4,
  EdpCredSvcInfo_SetProcessUiEnforcement = 5,
  EdpCredSvcInfo_ClearProcessUiEnforcement = 6,
  EdpCredSvcInfo_SetProcessTlsIndex = 7,
  EdpCredSvcInfo_SetSecondaryIdentities = 8,
  EdpCredSvcInfo_ConsumerDplKeyState = 9,
  EdpCredSvcInfo_Max = 10,
} EDP_CRED_SVC_INFO_TYPE, *PEDP_CRED_SVC_INFO_TYPE;

