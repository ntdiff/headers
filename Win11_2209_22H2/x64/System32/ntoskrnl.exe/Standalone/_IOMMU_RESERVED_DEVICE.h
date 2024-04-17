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

typedef struct _EXT_IOMMU_RESERVED_MEMORY_REGION
{
  /* 0x0000 */ union _LARGE_INTEGER Base;
  /* 0x0008 */ union _LARGE_INTEGER Limit;
  /* 0x0010 */ unsigned char Ignored;
  /* 0x0011 */ char __PADDING__[7];
} EXT_IOMMU_RESERVED_MEMORY_REGION, *PEXT_IOMMU_RESERVED_MEMORY_REGION; /* size: 0x0018 */

typedef struct _IOMMU_RESERVED_DEVICE
{
  /* 0x0000 */ struct _EXT_IOMMU_DEVICE_ID* DeviceId;
  /* 0x0008 */ void* PageTable;
  /* 0x0010 */ union _LARGE_INTEGER PageTablePhysical;
  /* 0x0018 */ unsigned long RegionCount;
  /* 0x0020 */ struct _EXT_IOMMU_RESERVED_MEMORY_REGION Regions[1];
} IOMMU_RESERVED_DEVICE, *PIOMMU_RESERVED_DEVICE; /* size: 0x0038 */

