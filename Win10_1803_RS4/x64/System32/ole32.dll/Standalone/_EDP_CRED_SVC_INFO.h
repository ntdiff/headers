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

typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _EDP_CRED_SVC_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ enum _EDP_CRED_SVC_INFO_TYPE eInfoType;
  union
  {
    struct
    {
      /* 0x0008 */ int bLocked;
      /* 0x000c */ struct _FILETIME ftDueTime;
    } /* size: 0x000c */ DplKeyState;
    struct
    {
      /* 0x0008 */ int bIsActive;
      /* 0x000c */ int bWasRevoked;
      /* 0x0010 */ int bNotFound;
      /* 0x0014 */ struct _FILETIME ftRevocationTime;
    } /* size: 0x0014 */ RevocationInfo;
    struct
    {
      /* 0x0008 */ int bLocked;
    } /* size: 0x0004 */ TestDeviceLockState;
    struct
    {
      /* 0x0008 */ unsigned long ProcessId;
      /* 0x000c */ unsigned long TlsIndex;
    } /* size: 0x0008 */ ProcessTlsInfo;
    struct
    {
      struct
      {
        /* 0x0008 */ wchar_t wszSecondaryIdentities[1];
      } /* size: 0x0002 */ EdpSecondaryIdentities;
      /* 0x000a */ char __PADDING__[18];
    }; /* size: 0x0014 */
  }; /* size: 0x0014 */
} EDP_CRED_SVC_INFO, *PEDP_CRED_SVC_INFO; /* size: 0x001c */

