typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef union _IOMMU_SVM_CAPABILITIES
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long AtsCapability : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned long PriCapability : 1; /* bit position: 1 */
        /* 0x0000 */ unsigned long PasidCapability : 1; /* bit position: 2 */
      }; /* bitfield */
      struct
      {
        struct /* bitfield */
        {
          /* 0x0004 */ unsigned long PasidMaxWidth : 5; /* bit position: 0 */
          /* 0x0004 */ unsigned long PasidExePerm : 1; /* bit position: 5 */
          /* 0x0004 */ unsigned long PasidPrivMode : 1; /* bit position: 6 */
          /* 0x0004 */ unsigned long AtsPageAlignedRequest : 1; /* bit position: 7 */
          /* 0x0004 */ unsigned long AtsGlobalInvalidate : 1; /* bit position: 8 */
          /* 0x0004 */ unsigned long AtsInvalidateQueueDepth : 5; /* bit position: 9 */
        }; /* bitfield */
      } /* size: 0x0004 */ CapReg;
      /* 0x0008 */ unsigned long Rsvd : 15; /* bit position: 0 */
    }; /* size: 0x000c */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x000c */
} IOMMU_SVM_CAPABILITIES, *PIOMMU_SVM_CAPABILITIES; /* size: 0x000c */

typedef struct _IOMMU_TRACKED_DEVICE
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ unsigned __int64 Lock;
  /* 0x0018 */ void* Iommu;
  /* 0x0020 */ unsigned long IommuCapabilities;
  /* 0x0024 */ unsigned long ReferenceCount;
  /* 0x0028 */ unsigned __int64 SourceId;
  /* 0x0030 */ union _IOMMU_SVM_CAPABILITIES Capabilities;
  /* 0x003c */ unsigned long Flags;
  /* 0x0040 */ struct _IOMMU_PASID_TABLE_OBJECT* CurrentPasidTable;
  /* 0x0048 */ struct _LIST_ENTRY PasidTableDeviceList;
  /* 0x0058 */ struct _LIST_ENTRY ActiveDeviceListHead;
  /* 0x0068 */ struct _IOMMU_DMA_DEVICE* DmaDevice;
} IOMMU_TRACKED_DEVICE, *PIOMMU_TRACKED_DEVICE; /* size: 0x0070 */

