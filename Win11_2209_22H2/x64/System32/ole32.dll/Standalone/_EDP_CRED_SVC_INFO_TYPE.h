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
  EdpCredSvcInfo_GetDplUserCredentialInfo = 10,
  EdpCredSvcInfo_Test_ConsumerSetLockState = 11,
  EdpCredSvcInfo_ConsumerCredentialCreate = 12,
  EdpCredSvcInfo_Test_ConsumerCredentialDelete = 13,
  EdpCredSvcInfo_GetCredentialKeyID = 14,
  EdpCredSvcInfo_GetAppKeyForAppCache = 15,
  EdpCredSvcInfo_Max = 16,
} EDP_CRED_SVC_INFO_TYPE, *PEDP_CRED_SVC_INFO_TYPE;

