typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _RTL_CRITICAL_SECTION
{
  /* 0x0000 */ struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
  /* 0x0008 */ long LockCount;
  /* 0x000c */ long RecursionCount;
  /* 0x0010 */ void* OwningThread;
  /* 0x0018 */ void* LockSemaphore;
  /* 0x0020 */ unsigned __int64 SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION; /* size: 0x0028 */

class COleStaticMutexSem
{
  /* 0x0000 */ unsigned char _fInitialized;
  /* 0x0001 */ unsigned char _fUseSpincount;
  /* 0x0004 */ unsigned long _cLocks;
  /* 0x0008 */ unsigned long _dwLine;
  /* 0x0010 */ const char* _pszFile;
  /* 0x0018 */ const char* _pszLockName;
  /* 0x0020 */ struct _RTL_CRITICAL_SECTION _cs;
}; /* size: 0x0048 */

class CRpcResolver
{
  union
  {
    struct
    {
      /* 0x0000 */ class CFastBH* _fbhILocalObjectExporter;
      /* 0x0008 */ class CFastBH* _fbhIROT;
      /* 0x0010 */ class CFastBH* _fbhISCM;
      /* 0x0018 */ class CFastBH* _fbhIMachineActivatorControl;
      /* 0x0020 */ struct _PSM_APPSTATE_REGISTRATION* _psmRegistration;
      /* 0x0028 */ int _fLocalRemReleaseFailed;
    }; /* size: 0x002c */
    /* 0x0000 */ void* _ph;
    /* 0x0000 */ unsigned long _dwFlags;
    /* 0x0000 */ class CDualStringArray* _pdsaLocalResolver;
    /* 0x0000 */ unsigned __int64 _dwCurrentBindingsID;
    /* 0x0000 */ struct _GUID _GuidRPCSSProcessIdentifier;
    /* 0x0000 */ class CMachineNamesHelper* _pMNHelper;
    /* 0x0000 */ unsigned long _cReservedOidsAvail;
    /* 0x0000 */ unsigned __int64 _OidsReserved[10];
    /* 0x0000 */ struct ISCMLocalActivator* _pSCMProxy;
    /* 0x0000 */ struct ISCMLocalActivator* _pCloakedSCMProxy;
    /* 0x0000 */ wchar_t* _pwszWinstaDesktop;
    /* 0x0000 */ wchar_t* _pwszFQDN;
    /* 0x0000 */ unsigned __int64 _ProcessSignature;
    /* 0x0000 */ void* _pNoRegLaunchPermissionsSD;
    /* 0x0000 */ void* _pNoRegAccessPermissionsSD;
    /* 0x0000 */ void* _pNoRegLaunchRestrictionsSD;
    /* 0x0000 */ void* _pNoRegAccessRestrictionsSD;
    /* 0x0000 */ void* _pDefaultAccessRestrictionsSD;
    /* 0x0000 */ void* _pSelfSid;
    /* 0x0000 */ class COleStaticMutexSem _mxsResolver;
    /* 0x0000 */ void* _hResolverWaitEvent;
    /* 0x0000 */ int _developerLicenseInstalled;
  }; /* size: 0x0050 */
}; /* size: 0x0030 */

