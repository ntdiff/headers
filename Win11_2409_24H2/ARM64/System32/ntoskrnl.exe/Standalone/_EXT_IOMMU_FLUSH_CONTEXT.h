typedef struct _EXT_IOMMU_FLUSH_CONTEXT
{
  /* 0x0000 */ unsigned char InProgress;
  /* 0x0001 */ unsigned char IsPowerCollapsed;
  /* 0x0008 */ unsigned __int64 Address;
} EXT_IOMMU_FLUSH_CONTEXT, *PEXT_IOMMU_FLUSH_CONTEXT; /* size: 0x0010 */

