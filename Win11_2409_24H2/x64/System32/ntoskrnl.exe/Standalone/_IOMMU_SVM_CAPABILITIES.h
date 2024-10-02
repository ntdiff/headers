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
        /* 0x0000 */ unsigned long Padding : 18; /* bit position: 0 */
        /* 0x0000 */ unsigned long AtsEnable : 1; /* bit position: 18 */
        /* 0x0000 */ unsigned long PriEnable : 1; /* bit position: 19 */
        /* 0x0000 */ unsigned long PasidEnable : 1; /* bit position: 20 */
        /* 0x0000 */ unsigned long ExecutePermissionEnable : 1; /* bit position: 21 */
        /* 0x0000 */ unsigned long PrivilegedModeEnable : 1; /* bit position: 22 */
        /* 0x0000 */ unsigned long Rsvd : 9; /* bit position: 23 */
      }; /* bitfield */
    } /* size: 0x0004 */ EnabledCaps;
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
      /* 0x0000 */ unsigned long EnabledCapsBits : 5; /* bit position: 18 */
      /* 0x0000 */ unsigned long DeviceInformationBits : 1; /* bit position: 23 */
      /* 0x0000 */ unsigned long Rsvd1 : 8; /* bit position: 24 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} IOMMU_SVM_CAPABILITIES, *PIOMMU_SVM_CAPABILITIES; /* size: 0x0004 */

