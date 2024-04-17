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
  /* 0x000c */ long m_cRef;
  /* 0x0010 */ struct _GUID m_guidProcessId;
  /* 0x0020 */ wchar_t* m_pwszProcessName;
  /* 0x0024 */ enum tagProcessType m_eProcessType;
  /* 0x0028 */ wchar_t* m_pwszServiceName;
  /* 0x002c */ wchar_t* m_pwszServiceParameters;
  /* 0x0030 */ int m_fActivateAtStorage;
  /* 0x0034 */ wchar_t* m_pwszRunAsUser;
  /* 0x0038 */ enum tagRunAsType m_eRunAsType;
  /* 0x003c */ wchar_t* m_pwszSurrogatePath;
  /* 0x0040 */ struct _SECURITY_DESCRIPTOR* m_pLaunchPermission;
  /* 0x0044 */ unsigned long m_cbLaunchPermission;
  /* 0x0048 */ unsigned long m_dwAuthenticationLevel;
  /* 0x004c */ unsigned long m_dwROTFlags;
  /* 0x0050 */ unsigned long m_dwAppIDFlags;
  /* 0x0054 */ wchar_t* m_pwszRemoteServerName;
  /* 0x0058 */ unsigned long m_dwFlags;
  /* 0x005c */ unsigned long m_dwSaferTrustLevel;
  /* 0x0060 */ struct _KEY_FULL_INFORMATION* m_pKeyInformation;
  /* 0x0064 */ struct _KEY_NAME_INFORMATION* m_pKeyNameInformation;
  union
  {
    /* 0x0000 */ int m_fGotLegacyLevels;
    /* 0x0000 */ unsigned long m_dwLegacyAuthenticationLevel;
    /* 0x0000 */ unsigned long m_dwLegacyImpersonationLevel;
  }; /* size: 0x0004 */
  /* 0x0068 */ unsigned long m_dwPreferredServerBitness;
  /* 0x006c */ wchar_t* m_pwszSurrogateCommandDebug;
  /* 0x0070 */ wchar_t* m_pwszServerExecutable;
  /* 0x0074 */ int m_bLoadUserSettings;
  /* 0x0078 */ int m_fDebugSurrogate;
}; /* size: 0x007c */

