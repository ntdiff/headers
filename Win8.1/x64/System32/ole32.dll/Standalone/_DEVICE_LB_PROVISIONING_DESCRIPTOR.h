typedef struct _DEVICE_LB_PROVISIONING_DESCRIPTOR
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  struct /* bitfield */
  {
    /* 0x0008 */ unsigned char ThinProvisioningEnabled : 1; /* bit position: 0 */
    /* 0x0008 */ unsigned char ThinProvisioningReadZeros : 1; /* bit position: 1 */
    /* 0x0008 */ unsigned char AnchorSupported : 3; /* bit position: 2 */
    /* 0x0008 */ unsigned char UnmapGranularityAlignmentValid : 1; /* bit position: 5 */
    /* 0x0008 */ unsigned char Reserved0 : 2; /* bit position: 6 */
  }; /* bitfield */
  /* 0x0009 */ unsigned char Reserved1[7];
  /* 0x0010 */ unsigned __int64 OptimalUnmapGranularity;
  /* 0x0018 */ unsigned __int64 UnmapGranularityAlignment;
} DEVICE_LB_PROVISIONING_DESCRIPTOR, *PDEVICE_LB_PROVISIONING_DESCRIPTOR; /* size: 0x0020 */

