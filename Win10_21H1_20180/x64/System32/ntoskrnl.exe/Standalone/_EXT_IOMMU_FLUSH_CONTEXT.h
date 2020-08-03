typedef struct _EXT_IOMMU_FLUSH_CONTEXT
{
  /* 0x0000 */ unsigned char InProgress;
  /* 0x0008 */ volatile unsigned __int64 Status;
  /* 0x0010 */ unsigned __int64 PhysicalAddress;
} EXT_IOMMU_FLUSH_CONTEXT, *PEXT_IOMMU_FLUSH_CONTEXT; /* size: 0x0018 */

