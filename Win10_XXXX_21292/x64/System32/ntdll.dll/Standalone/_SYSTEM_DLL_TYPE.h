typedef enum _SYSTEM_DLL_TYPE
{
  PsNativeSystemDll = 0,
  PsWowX86SystemDll = 1,
  PsWowArm32SystemDll = 2,
  PsWowChpeX86SystemDll = 3,
  PsChpeV2SystemDll = 4,
  PsVsmEnclaveRuntimeDll = 5,
  PsSystemDllTotalTypes = 6,
} SYSTEM_DLL_TYPE, *PSYSTEM_DLL_TYPE;

