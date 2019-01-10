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

