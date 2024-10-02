typedef enum _SYSTEM_DLL_TYPE
{
  PsNativeSystemDll = 0,
  PsWowX86SystemDll = 1,
  PsWowChpeX86SystemDll = 2,
  PsChpeV2SystemDll = 3,
  PsVsmEnclaveRuntimeDll = 4,
  PsTrustedAppsRuntimeDll = 5,
  PsSystemDllTotalTypes = 6,
} SYSTEM_DLL_TYPE, *PSYSTEM_DLL_TYPE;

