typedef struct _EXT_IOMMU_FLUSH_CONTEXT
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned int Status;
      /* 0x0008 */ unsigned __int64 PhysicalAddress;
    } /* size: 0x0010 */ Intel;
    struct
    {
      /* 0x0000 */ unsigned __int64* StatusAddr;
      /* 0x0008 */ unsigned __int64 OldStatus;
    } /* size: 0x0010 */ Amd;
  }; /* size: 0x0010 */
} EXT_IOMMU_FLUSH_CONTEXT, *PEXT_IOMMU_FLUSH_CONTEXT; /* size: 0x0010 */

