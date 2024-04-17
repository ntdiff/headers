typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

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

typedef struct _IOMMU_INTERFACE_CALLBACK_RECORD
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ void* CallbackRoutine /* function */;
  /* 0x0018 */ void* CallbackContext;
  /* 0x0020 */ struct _IOMMU_DMA_DEVICE* DmaDevice;
  /* 0x0028 */ struct _IOMMU_INTERFACE_STATE_CHANGE LastReportedState;
} IOMMU_INTERFACE_CALLBACK_RECORD, *PIOMMU_INTERFACE_CALLBACK_RECORD; /* size: 0x0030 */

