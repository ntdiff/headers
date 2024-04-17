typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

enum tagProcessType
{
  ProcessTypeNormal = 0,
  ProcessTypeService = 1,
  ProcessTypeComPlus = 2,
  ProcessTypeLegacySurrogate = 3,
  ProcessTypeComPlusService = 4,
};

enum tagRunAsType
{
  RunAsSpecifiedUser = 0,
  RunAsInteractiveUser = 1,
  RunAsLaunchingUser = 2,
};

class CComProcessInfo
{
  /* 0x0018 */ long m_cRef;
  /* 0x001c */ struct _GUID m_guidProcessId;
  /* 0x0030 */ wchar_t* m_pwszProcessName;
  /* 0x0038 */ enum tagProcessType m_eProcessType;
  /* 0x0040 */ wchar_t* m_pwszServiceName;
  /* 0x0048 */ wchar_t* m_pwszServiceParameters;
  /* 0x0050 */ int m_fActivateAtStorage;
  /* 0x0058 */ wchar_t* m_pwszRunAsUser;
  /* 0x0060 */ enum tagRunAsType m_eRunAsType;
  /* 0x0068 */ wchar_t* m_pwszSurrogatePath;
  /* 0x0070 */ struct _SECURITY_DESCRIPTOR* m_pLaunchPermission;
  /* 0x0078 */ unsigned long m_cbLaunchPermission;
  /* 0x007c */ unsigned long m_dwAuthenticationLevel;
  /* 0x0080 */ unsigned long m_dwROTFlags;
  /* 0x0084 */ unsigned long m_dwAppIDFlags;
  /* 0x0088 */ wchar_t* m_pwszRemoteServerName;
  /* 0x0090 */ unsigned long m_dwFlags;
  /* 0x0094 */ unsigned long m_dwSaferTrustLevel;
  /* 0x0098 */ struct _KEY_FULL_INFORMATION* m_pKeyInformation;
  /* 0x00a0 */ struct _KEY_NAME_INFORMATION* m_pKeyNameInformation;
  union
  {
    /* 0x0000 */ int m_fGotLegacyLevels;
    /* 0x0000 */ unsigned long m_dwLegacyAuthenticationLevel;
    /* 0x0000 */ unsigned long m_dwLegacyImpersonationLevel;
  }; /* size: 0x0004 */
  /* 0x00a8 */ unsigned long m_dwPreferredServerBitness;
  /* 0x00b0 */ wchar_t* m_pwszSurrogateCommandDebug;
  /* 0x00b8 */ wchar_t* m_pwszServerExecutable;
  /* 0x00c0 */ int m_bLoadUserSettings;
  /* 0x00c4 */ int m_fDebugSurrogate;
}; /* size: 0x00c8 */

