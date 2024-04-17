typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef enum _KINTERRUPT_POLARITY
{
  InterruptPolarityUnknown = 0,
  InterruptActiveHigh = 1,
  InterruptRisingEdge = 1,
  InterruptActiveLow = 2,
  InterruptFallingEdge = 2,
  InterruptActiveBoth = 3,
  InterruptActiveBothTriggerLow = 3,
  InterruptActiveBothTriggerHigh = 4,
} KINTERRUPT_POLARITY, *PKINTERRUPT_POLARITY;

typedef enum _KINTERRUPT_MODE
{
  LevelSensitive = 0,
  Latched = 1,
} KINTERRUPT_MODE, *PKINTERRUPT_MODE;

typedef struct _EXT_IOMMU_FUNCTION_TABLE
{
  /* 0x0000 */ void* ConfigureSettings /* function */;
  /* 0x0008 */ void* Initialize /* function */;
  /* 0x0010 */ void* AllocateDomain /* function */;
  /* 0x0018 */ void* FreeDomain /* function */;
  /* 0x0020 */ void* CreateDevice /* function */;
  /* 0x0028 */ void* DeleteDevice /* function */;
  /* 0x0030 */ void* OwnDevice /* function */;
  /* 0x0038 */ void* ConfigureDeviceFaultReporting /* function */;
  /* 0x0040 */ void* AttachDeviceDomain /* function */;
  /* 0x0048 */ void* DetachDeviceDomain /* function */;
  /* 0x0050 */ void* FlushDomainTb /* function */;
  /* 0x0058 */ void* SyncFlush /* function */;
  /* 0x0060 */ void* CompleteFlush /* function */;
  /* 0x0068 */ void* AllocateRemappingTableEntry /* function */;
  /* 0x0070 */ void* FreeRemappingTableEntry /* function */;
  /* 0x0078 */ void* UpdateRemappingTableEntry /* function */;
  /* 0x0080 */ void* InvalidateRemappingTableEntry /* function */;
  /* 0x0088 */ void* UpdateRemappingDestination /* function */;
  /* 0x0090 */ void* CaptureGlobalCrashdumpState /* function */;
} EXT_IOMMU_FUNCTION_TABLE, *PEXT_IOMMU_FUNCTION_TABLE; /* size: 0x0098 */

typedef struct _EXT_IOMMU_FUNCTION_TABLE_EXTENDED
{
  /* 0x0000 */ void* FindDevice /* function */;
  /* 0x0008 */ void* SetDeviceSvmCapabilities /* function */;
  /* 0x0010 */ void* SetDevicePasidTable /* function */;
  /* 0x0018 */ void* GrowPasidTable /* function */;
  /* 0x0020 */ void* SetPasidAddressSpace /* function */;
  /* 0x0028 */ void* FlushTb /* function */;
  /* 0x0030 */ void* FlushDeviceTbOnly /* function */;
  /* 0x0038 */ void* DismissPageFault /* function */;
  /* 0x0040 */ void* GetPageFault /* function */;
  /* 0x0048 */ void* SetMessageInterruptRouting /* function */;
  /* 0x0050 */ void* EnableInterrupt /* function */;
  /* 0x0058 */ void* DisableInterrupt /* function */;
  /* 0x0060 */ void* HandleInterrupt /* function */;
  /* 0x0068 */ void* CheckForReservedRegion /* function */;
  /* 0x0070 */ void* MarkHiberRegions /* function */;
  /* 0x0078 */ void* DrainSvmPageRequests /* function */;
  /* 0x0080 */ void* CancelPageRequests /* function */;
  /* 0x0088 */ void* EnumerateReservedDevices /* function */;
  /* 0x0090 */ void* ProcessReservedDomains /* function */;
  /* 0x0098 */ void* QueryAcpiDeviceMapping /* function */;
  /* 0x00a0 */ void* GetRidAcpiMapCount /* function */;
  /* 0x00a8 */ void* FreePasidTable /* function */;
  /* 0x00b0 */ void* ConfigureAts /* function */;
} EXT_IOMMU_FUNCTION_TABLE_EXTENDED, *PEXT_IOMMU_FUNCTION_TABLE_EXTENDED; /* size: 0x00b8 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0008 */

typedef struct _IOMMU_PAGE_HANDLING_DATA
{
  /* 0x0000 */ struct _EX_PUSH_LOCK ResetLock;
  /* 0x0008 */ unsigned __int64 Lock;
  /* 0x0010 */ unsigned long ValidGroupFaultSequenceNumber;
  /* 0x0018 */ void* GetPageFault /* function */;
  /* 0x0020 */ void* DismissPageFault /* function */;
} IOMMU_PAGE_HANDLING_DATA, *PIOMMU_PAGE_HANDLING_DATA; /* size: 0x0028 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0008 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0010 */

typedef enum _EXT_IOMMU_KNOWN_IOMMU_TYPE
{
  ExtIommuInvalid = 0,
  ExtIommuAmd = 1,
  ExtIommuIntel = 2,
  ExtIommuSmmuv1 = 3,
  ExtIommuSmmuv2 = 4,
  ExtIommuSmmuv3 = 5,
  ExtIommuIts = 6,
  ExtIommuUnknown = 4096,
} EXT_IOMMU_KNOWN_IOMMU_TYPE, *PEXT_IOMMU_KNOWN_IOMMU_TYPE;

typedef struct _PCI_SLOT_NUMBER
{
  union
  {
    union
    {
      struct
      {
        struct /* bitfield */
        {
          /* 0x0000 */ unsigned long DeviceNumber : 5; /* bit position: 0 */
          /* 0x0000 */ unsigned long FunctionNumber : 3; /* bit position: 5 */
          /* 0x0000 */ unsigned long Reserved : 24; /* bit position: 8 */
        }; /* bitfield */
      } /* size: 0x0004 */ bits;
      /* 0x0000 */ unsigned long AsULONG;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
} PCI_SLOT_NUMBER, *PPCI_SLOT_NUMBER; /* size: 0x0004 */

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

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _REGISTERED_IOMMU
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ void* InternalData;
  /* 0x0018 */ unsigned long InternalDataSize;
  /* 0x0020 */ void* InterruptContext;
  /* 0x0028 */ unsigned char Irql;
  /* 0x002c */ long Gsi;
  /* 0x0030 */ enum _KINTERRUPT_POLARITY InterruptPolarity;
  /* 0x0034 */ enum _KINTERRUPT_MODE InterruptMode;
  /* 0x0038 */ struct _EXT_IOMMU_FUNCTION_TABLE FunctionTable;
  /* 0x00d0 */ struct _EXT_IOMMU_FUNCTION_TABLE_EXTENDED FunctionTableExtended;
  /* 0x0188 */ unsigned long Flags;
  /* 0x0190 */ struct _LIST_ENTRY PasidTableListHead;
  /* 0x01a0 */ struct _IOMMU_PAGE_HANDLING_DATA PageHandling;
  /* 0x01c8 */ unsigned long MaximumDomainIds;
  /* 0x01d0 */ unsigned __int64 DomainIdBitmapLock;
  /* 0x01d8 */ struct _RTL_BITMAP DomainIdBitmap;
  /* 0x01e8 */ unsigned long Capabilities;
  /* 0x01ec */ enum _EXT_IOMMU_KNOWN_IOMMU_TYPE KnownType;
  /* 0x01f0 */ unsigned long PciSegment;
  /* 0x01f4 */ unsigned long PciBus;
  /* 0x01f8 */ struct _PCI_SLOT_NUMBER PciSlot;
  /* 0x0200 */ union _LARGE_INTEGER MsiAddress;
  /* 0x0208 */ unsigned __int64 MsiData;
  /* 0x0210 */ unsigned long MaximumAsids;
  /* 0x0214 */ unsigned long Identifier;
  /* 0x0218 */ struct _UNICODE_STRING ResourceId;
  /* 0x0228 */ struct _IOMMU_RESERVED_DEVICE_LIST* ReservedDevices;
} REGISTERED_IOMMU, *PREGISTERED_IOMMU; /* size: 0x0230 */

