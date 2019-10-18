typedef struct _VIRTUAL_EFI_RUNTIME_SERVICES
{
  /* 0x0000 */ unsigned long GetTime;
  /* 0x0004 */ unsigned long SetTime;
  /* 0x0008 */ unsigned long GetWakeupTime;
  /* 0x000c */ unsigned long SetWakeupTime;
  /* 0x0010 */ unsigned long SetVirtualAddressMap;
  /* 0x0014 */ unsigned long ConvertPointer;
  /* 0x0018 */ unsigned long GetVariable;
  /* 0x001c */ unsigned long GetNextVariableName;
  /* 0x0020 */ unsigned long SetVariable;
  /* 0x0024 */ unsigned long GetNextHighMonotonicCount;
  /* 0x0028 */ unsigned long ResetSystem;
  /* 0x002c */ unsigned long UpdateCapsule;
  /* 0x0030 */ unsigned long QueryCapsuleCapabilities;
  /* 0x0034 */ unsigned long QueryVariableInfo;
} VIRTUAL_EFI_RUNTIME_SERVICES, *PVIRTUAL_EFI_RUNTIME_SERVICES; /* size: 0x0038 */

