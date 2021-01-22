typedef enum _IOMMU_MAP_PHYSICAL_ADDRESS_TYPE
{
  MapPhysicalAddressTypeMdl = 0,
  MapPhysicalAddressTypeContiguousRange = 1,
  MapPhysicalAddressTypePfn = 2,
  MapPhysicalAddressTypeMax = 3,
} IOMMU_MAP_PHYSICAL_ADDRESS_TYPE, *PIOMMU_MAP_PHYSICAL_ADDRESS_TYPE;

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

typedef struct _IOMMU_MAP_PHYSICAL_ADDRESS
{
  /* 0x0000 */ enum _IOMMU_MAP_PHYSICAL_ADDRESS_TYPE MapType;
  union
  {
    struct
    {
      /* 0x0008 */ struct _MDL* Mdl;
    } /* size: 0x0004 */ Mdl;
    struct
    {
      /* 0x0008 */ union _LARGE_INTEGER Base;
      /* 0x0010 */ unsigned long Size;
      /* 0x0014 */ long __PADDING__[1];
    } /* size: 0x0010 */ ContiguousRange;
    struct
    {
      struct
      {
        /* 0x0008 */ unsigned long* PageFrame;
        /* 0x000c */ unsigned long NumberOfPages;
      } /* size: 0x0008 */ PfnArray;
      /* 0x0010 */ long __PADDING__[2];
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
} IOMMU_MAP_PHYSICAL_ADDRESS, *PIOMMU_MAP_PHYSICAL_ADDRESS; /* size: 0x0018 */

