typedef struct _FAULT_INFORMATION_ARM64_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long WriteNotRead : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long InstructionNotData : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long Privileged : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long FaultAddressValid : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long Reserved : 28; /* bit position: 4 */
  }; /* bitfield */
} FAULT_INFORMATION_ARM64_FLAGS, *PFAULT_INFORMATION_ARM64_FLAGS; /* size: 0x0004 */

typedef enum _FAULT_INFORMATION_ARM64_TYPE
{
  UnsupportedUpstreamTransaction = 0,
  AddressSizeFault = 1,
  TlbMatchConflict = 2,
  ExternalFault = 3,
  PermissionFault = 4,
  AccessFlagFault = 5,
  TranslationFault = 6,
  MaxFaultType = 7,
} FAULT_INFORMATION_ARM64_TYPE, *PFAULT_INFORMATION_ARM64_TYPE;

typedef struct _FAULT_INFORMATION_ARM64
{
  /* 0x0000 */ void* DomainHandle;
  /* 0x0008 */ void* FaultAddress;
  /* 0x0010 */ struct _DEVICE_OBJECT* PhysicalDeviceObject;
  /* 0x0018 */ unsigned long InputMappingId;
  /* 0x001c */ struct _FAULT_INFORMATION_ARM64_FLAGS Flags;
  /* 0x0020 */ enum _FAULT_INFORMATION_ARM64_TYPE Type;
  /* 0x0028 */ unsigned __int64 IommuBaseAddress;
} FAULT_INFORMATION_ARM64, *PFAULT_INFORMATION_ARM64; /* size: 0x0030 */

