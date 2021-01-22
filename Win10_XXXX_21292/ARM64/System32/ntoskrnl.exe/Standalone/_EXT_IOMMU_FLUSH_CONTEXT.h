typedef struct _EXT_IOMMU_FLUSH_CONTEXT
{
  union
  {
    /* 0x0000 */ unsigned char InProgress;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char LowCompletionDataBit : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char Reserved0 : 7; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x0001 */ unsigned char IsPowerCollapsed;
  /* 0x0008 */ unsigned __int64 Address;
} EXT_IOMMU_FLUSH_CONTEXT, *PEXT_IOMMU_FLUSH_CONTEXT; /* size: 0x0010 */

