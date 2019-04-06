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

typedef struct _EWOW64PROCESS
{
  /* 0x0000 */ void* Peb;
  /* 0x0008 */ unsigned short Machine;
  /* 0x000c */ enum _SYSTEM_DLL_TYPE NtdllType;
  /* 0x0010 */ void* KernelWriteToExecutableSignal;
} EWOW64PROCESS, *PEWOW64PROCESS; /* size: 0x0018 */

