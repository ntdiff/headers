typedef union _IOMMU_INTERFACE_STATE_CHANGE_FIELDS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long AvailableDomainTypes : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Reserved : 31; /* bit position: 1 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} IOMMU_INTERFACE_STATE_CHANGE_FIELDS, *PIOMMU_INTERFACE_STATE_CHANGE_FIELDS; /* size: 0x0004 */

typedef struct _IOMMU_INTERFACE_STATE_CHANGE
{
  /* 0x0000 */ union _IOMMU_INTERFACE_STATE_CHANGE_FIELDS PresentFields;
  /* 0x0004 */ unsigned long AvailableDomainTypes;
} IOMMU_INTERFACE_STATE_CHANGE, *PIOMMU_INTERFACE_STATE_CHANGE; /* size: 0x0008 */

