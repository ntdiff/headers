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

typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

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
      /* 0x0014 */ int bKeyUnlockFailed;
    } /* size: 0x0010 */ DplKeyState;
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
      /* 0x0008 */ wchar_t wszSecondaryIdentities[1];
    } /* size: 0x0002 */ EdpSecondaryIdentities;
    struct
    {
      /* 0x0008 */ unsigned __int64 DplUserId;
      /* 0x0010 */ unsigned __int64 DplCredentialId;
      /* 0x0018 */ unsigned char DplKeyDropAnnounced;
      /* 0x0019 */ unsigned char DplIsConsumerCredential;
      /* 0x001a */ char __PADDING__[6];
    } /* size: 0x0018 */ DplUserCredentialInfo;
    struct
    {
      /* 0x0008 */ unsigned long KeyIDOffset;
      /* 0x000c */ unsigned long KeyIDSize;
      /* 0x0010 */ wchar_t wszCredentialId[1];
      /* 0x0012 */ char __PADDING__[2];
    } /* size: 0x000c */ ConsumerDplCredentialCreate;
    struct
    {
      /* 0x0008 */ unsigned long CredentialLevel;
    } /* size: 0x0004 */ ConsumerDplCredentialDelete;
    struct
    {
      /* 0x0008 */ unsigned long cbKeyID;
      /* 0x000c */ unsigned char pbKeyID[1];
      /* 0x000d */ char __PADDING__[3];
    } /* size: 0x0008 */ CredentialKeyID;
    struct
    {
      /* 0x0008 */ unsigned char pbAppIdSalt[32];
      /* 0x0028 */ unsigned char pbAppIdHash[32];
      /* 0x0048 */ unsigned char pbAppKey[32];
      /* 0x0068 */ struct _GUID CryptoSession;
      /* 0x0078 */ unsigned long dwProtectionSequence;
      /* 0x007c */ unsigned long dwKdfVcn;
      /* 0x0080 */ unsigned long cbKeyID;
      /* 0x0084 */ unsigned char pbKeyID[1];
      /* 0x0085 */ char __PADDING__[3];
    } /* size: 0x0080 */ AppKeyCacheInfo;
  }; /* size: 0x0080 */
} EDP_CRED_SVC_INFO, *PEDP_CRED_SVC_INFO; /* size: 0x0088 */

