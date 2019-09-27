typedef struct _FAULT_INFORMATION_X64_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long FaultAddressValid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long Reserved : 31; /* bit position: 1 */
  }; /* bitfield */
} FAULT_INFORMATION_X64_FLAGS, *PFAULT_INFORMATION_X64_FLAGS; /* size: 0x0004 */

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

typedef struct _FAULT_INFORMATION_X64
{
  /* 0x0000 */ void* DomainHandle;
  /* 0x0008 */ void* FaultAddress;
  /* 0x0010 */ struct _FAULT_INFORMATION_X64_FLAGS Flags;
  /* 0x0014 */ enum _FAULT_INFORMATION_ARM64_TYPE Type;
  /* 0x0018 */ unsigned __int64 IommuBaseAddress;
  /* 0x0020 */ unsigned long PciSegment;
  /* 0x0024 */ long __PADDING__[1];
} FAULT_INFORMATION_X64, *PFAULT_INFORMATION_X64; /* size: 0x0028 */

