typedef enum _SYSTEM_DLL_TYPE
{
  PsNativeSystemDll = 0,
  PsWowX86SystemDll = 1,
  PsWowArm32SystemDll = 2,
  PsWowAmd64SystemDll = 3,
  PsWowChpeX86SystemDll = 4,
  PsVsmEnclaveRuntimeDll = 5,
  PsSystemDllTotalTypes = 6,
} SYSTEM_DLL_TYPE, *PSYSTEM_DLL_TYPE;

