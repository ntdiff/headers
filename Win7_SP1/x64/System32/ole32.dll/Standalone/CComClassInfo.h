typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

enum tagLocalServerType
{
  LocalServerType16 = 0,
  LocalServerType32 = 1,
};

class CComClassInfo
{
  /* 0x0028 */ long m_cRef;
  /* 0x002c */ long m_cLocks;
  /* 0x0030 */ struct _GUID m_clsid;
  /* 0x0040 */ struct _GUID m_guidProcessId;
  /* 0x0050 */ enum tagLocalServerType m_serverType;
  /* 0x0058 */ struct IUnknown* m_pProcessInfo;
  /* 0x0060 */ wchar_t m_wszClsidString[45];
  /* 0x00c0 */ wchar_t* m_pwszProgid;
  /* 0x00c8 */ wchar_t* m_pwszClassName;
  /* 0x00d0 */ int m_clsctx;
  /* 0x00d4 */ int m_threadingmodel;
  /* 0x00d8 */ unsigned long m_regOwningCatalog;
  /* 0x00dc */ unsigned long m_regView;
  /* 0x00e0 */ wchar_t* m_pwszInprocServer32;
  /* 0x00e8 */ wchar_t* m_pwszInprocHandler32;
  /* 0x00f0 */ wchar_t* m_pwszLocalServer;
  /* 0x00f8 */ wchar_t* m_pwszInprocServer16;
  /* 0x0100 */ wchar_t* m_pwszInprocHandler16;
  /* 0x0108 */ wchar_t* m_pwszSurrogateCommand;
  /* 0x0110 */ wchar_t* m_pwszServerExecutable;
  /* 0x0118 */ unsigned long m_dwPreferredServerBitness;
  /* 0x011c */ unsigned long m_dwLocalServer32BinaryBitness;
  /* 0x0120 */ int m_bLUAEnabled;
  /* 0x0128 */ wchar_t* m_pwszDisplayName;
  /* 0x0130 */ wchar_t* m_pwszBinaryName;
  /* 0x0138 */ wchar_t* m_pwszIconReference;
  /* 0x0140 */ struct _KEY_FULL_INFORMATION* m_pKeyInformation;
  /* 0x0148 */ struct _KEY_NAME_INFORMATION* m_pKeyNameInformation;
}; /* size: 0x0150 */

