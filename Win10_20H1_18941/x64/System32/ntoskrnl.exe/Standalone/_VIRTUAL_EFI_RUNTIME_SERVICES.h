typedef struct _VIRTUAL_EFI_RUNTIME_SERVICES
{
  /* 0x0000 */ unsigned __int64 GetTime;
  /* 0x0008 */ unsigned __int64 SetTime;
  /* 0x0010 */ unsigned __int64 GetWakeupTime;
  /* 0x0018 */ unsigned __int64 SetWakeupTime;
  /* 0x0020 */ unsigned __int64 SetVirtualAddressMap;
  /* 0x0028 */ unsigned __int64 ConvertPointer;
  /* 0x0030 */ unsigned __int64 GetVariable;
  /* 0x0038 */ unsigned __int64 GetNextVariableName;
  /* 0x0040 */ unsigned __int64 SetVariable;
  /* 0x0048 */ unsigned __int64 GetNextHighMonotonicCount;
  /* 0x0050 */ unsigned __int64 ResetSystem;
  /* 0x0058 */ unsigned __int64 UpdateCapsule;
  /* 0x0060 */ unsigned __int64 QueryCapsuleCapabilities;
  /* 0x0068 */ unsigned __int64 QueryVariableInfo;
} VIRTUAL_EFI_RUNTIME_SERVICES, *PVIRTUAL_EFI_RUNTIME_SERVICES; /* size: 0x0070 */

