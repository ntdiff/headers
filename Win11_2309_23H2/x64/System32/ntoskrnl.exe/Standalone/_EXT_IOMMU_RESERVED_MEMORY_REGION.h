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

