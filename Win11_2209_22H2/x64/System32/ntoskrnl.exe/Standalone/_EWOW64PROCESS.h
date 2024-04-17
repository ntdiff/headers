typedef enum _SYSTEM_DLL_TYPE
{
  PsNativeSystemDll = 0,
  PsWowX86SystemDll = 1,
  PsWowArm32SystemDll = 2,
  PsWowChpeX86SystemDll = 3,
  PsChpeV2SystemDll = 4,
  PsVsmEnclaveRuntimeDll = 5,
  PsTrustedAppsRuntimeDll = 6,
  PsSystemDllTotalTypes = 7,
} SYSTEM_DLL_TYPE, *PSYSTEM_DLL_TYPE;

typedef struct _EWOW64PROCESS
{
  /* 0x0000 */ void* Peb;
  /* 0x0008 */ enum _SYSTEM_DLL_TYPE NtdllType;
  /* 0x000c */ long __PADDING__[1];
} EWOW64PROCESS, *PEWOW64PROCESS; /* size: 0x0010 */

