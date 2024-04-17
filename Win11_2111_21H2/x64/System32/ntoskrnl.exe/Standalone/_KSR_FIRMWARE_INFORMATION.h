typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

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

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

struct DEBUG_MEMORY_REQUIREMENTS
{
  /* 0x0000 */ union _LARGE_INTEGER Start;
  /* 0x0008 */ union _LARGE_INTEGER MaxEnd;
  /* 0x0010 */ void* VirtualAddress;
  /* 0x0018 */ unsigned long Length;
  /* 0x001c */ unsigned char Cached;
  /* 0x001d */ unsigned char Aligned;
  /* 0x001e */ char __PADDING__[2];
}; /* size: 0x0020 */

typedef union _KSR_CAPABILITIES
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long PerrenialDatabase : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long SkipSubAllocator : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Reserved : 30; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULong;
  }; /* size: 0x0004 */
} KSR_CAPABILITIES, *PKSR_CAPABILITIES; /* size: 0x0004 */

typedef struct _KSR_FIRMWARE_INFORMATION
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0008 */ struct _UNICODE_STRING EfiVersionString;
  /* 0x0018 */ struct _VIRTUAL_EFI_RUNTIME_SERVICES EfiRuntimeServices;
  /* 0x0088 */ void* EfiMemoryMap;
  /* 0x0090 */ unsigned long EfiMemoryMapSize;
  /* 0x0094 */ unsigned long EfiMemoryMapDescriptorSize;
  /* 0x0098 */ struct _MEMORY_CACHING_REQUIREMENTS* CachingRequirements;
  /* 0x00a0 */ unsigned long CachingRequirementsCount;
  /* 0x00a8 */ void* Smbios;
  /* 0x00b0 */ struct _INBV_DISPLAY_CONTEXT* DisplayContext;
  /* 0x00b8 */ void* SecureBootPolicy;
  /* 0x00c0 */ unsigned long SecureBootPolicySize;
  /* 0x00c8 */ struct DEBUG_MEMORY_REQUIREMENTS DebugDeviceMemory;
  /* 0x00e8 */ unsigned long SoftRestartCount;
  /* 0x00f0 */ void* CodeIntegrityPolicy;
  /* 0x00f8 */ unsigned long CodeIntegrityPolicySize;
  /* 0x0100 */ void* EfiMemoryAttributes;
  /* 0x0108 */ void* Esrt;
  /* 0x0110 */ unsigned long EsrtSize;
  /* 0x0118 */ void* CodeIntegrityPolicyHash;
  /* 0x0120 */ unsigned long CodeIntegrityPolicyHashSize;
  /* 0x0128 */ void* CodeIntegrityPolicyOriginalHash;
  /* 0x0130 */ unsigned long CodeIntegrityPolicyOriginalHashSize;
  /* 0x0138 */ struct _PHYSICAL_MEMORY_RANGE* BadPageRanges;
  /* 0x0140 */ unsigned long BadPageRangeCount;
  /* 0x0144 */ union _KSR_CAPABILITIES Capabilities;
} KSR_FIRMWARE_INFORMATION, *PKSR_FIRMWARE_INFORMATION; /* size: 0x0148 */

