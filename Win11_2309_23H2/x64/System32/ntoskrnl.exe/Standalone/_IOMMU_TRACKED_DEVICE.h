typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef union _IOMMU_SVM_CAPABILITIES
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long AtsCapability : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long PriCapability : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long PasidCapability : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long Rsvd0 : 29; /* bit position: 3 */
    }; /* bitfield */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long Padding : 3; /* bit position: 0 */
        /* 0x0000 */ unsigned long PasidMaxWidth : 5; /* bit position: 3 */
        /* 0x0000 */ unsigned long PasidExePerm : 1; /* bit position: 8 */
        /* 0x0000 */ unsigned long PasidPrivMode : 1; /* bit position: 9 */
        /* 0x0000 */ unsigned long AtsPageAlignedRequest : 1; /* bit position: 10 */
        /* 0x0000 */ unsigned long AtsGlobalInvalidate : 1; /* bit position: 11 */
        /* 0x0000 */ unsigned long AtsInvalidateQueueDepth : 5; /* bit position: 12 */
        /* 0x0000 */ unsigned long PriPrgResponsePasidRequired : 1; /* bit position: 17 */
        /* 0x0000 */ unsigned long Rsvd : 14; /* bit position: 18 */
      }; /* bitfield */
    } /* size: 0x0004 */ CapReg;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long Padding : 23; /* bit position: 0 */
        /* 0x0000 */ unsigned long IsSecureDevice : 1; /* bit position: 23 */
        /* 0x0000 */ unsigned long Rsvd : 8; /* bit position: 24 */
      }; /* bitfield */
    } /* size: 0x0004 */ DeviceInformation;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long AtsPriPasidBits : 3; /* bit position: 0 */
      /* 0x0000 */ unsigned long CapRegBits : 15; /* bit position: 3 */
      /* 0x0000 */ unsigned long DeviceInformationBits : 1; /* bit position: 18 */
      /* 0x0000 */ unsigned long Rsvd1 : 13; /* bit position: 19 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} IOMMU_SVM_CAPABILITIES, *PIOMMU_SVM_CAPABILITIES; /* size: 0x0004 */

typedef struct _GROUP_FAULT_REFERENCE
{
  union
  {
    union
    {
      struct
      {
        /* 0x0000 */ unsigned long Count;
        struct /* bitfield */
        {
          /* 0x0004 */ unsigned long Pending : 1; /* bit position: 0 */
          /* 0x0004 */ unsigned long Asid : 20; /* bit position: 1 */
          /* 0x0004 */ unsigned long LastInGroupSeen : 1; /* bit position: 21 */
          /* 0x0004 */ unsigned long Error : 1; /* bit position: 22 */
          /* 0x0004 */ unsigned long Unused : 9; /* bit position: 23 */
        }; /* bitfield */
      }; /* size: 0x0008 */
      /* 0x0000 */ unsigned __int64 Long;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
} GROUP_FAULT_REFERENCE, *PGROUP_FAULT_REFERENCE; /* size: 0x0008 */

typedef struct _IOMMU_TRACKED_DEVICE
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ unsigned __int64 Lock;
  /* 0x0018 */ void* Iommu;
  /* 0x0020 */ unsigned long IommuCapabilities;
  /* 0x0024 */ unsigned long ReferenceCount;
  /* 0x0028 */ unsigned __int64 SourceId;
  /* 0x0030 */ union _IOMMU_SVM_CAPABILITIES Capabilities;
  /* 0x0034 */ unsigned long Flags;
  /* 0x0038 */ struct _IOMMU_PASID_TABLE_OBJECT* CurrentPasidTable;
  /* 0x0040 */ struct _LIST_ENTRY PasidTableDeviceList;
  /* 0x0050 */ struct _LIST_ENTRY ActiveDeviceListHead;
  /* 0x0060 */ struct _IOMMU_DMA_DEVICE* DmaDevice;
  /* 0x0068 */ unsigned long LastGroupFaultSequenceNumber;
  /* 0x0070 */ struct _GROUP_FAULT_REFERENCE GroupFaultReferences[512];
} IOMMU_TRACKED_DEVICE, *PIOMMU_TRACKED_DEVICE; /* size: 0x1070 */

