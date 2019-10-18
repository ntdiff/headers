typedef struct _HAL_HV_SVM_DEVICE_CAPABILITIES
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long SvmSupported : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long PciExecute : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long NoExecute : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long Reserved : 28; /* bit position: 3 */
    /* 0x0000 */ unsigned long OverflowPossible : 1; /* bit position: 31 */
  }; /* bitfield */
  /* 0x0004 */ unsigned long PasidCount;
  /* 0x0008 */ unsigned long IommuIndex;
} HAL_HV_SVM_DEVICE_CAPABILITIES, *PHAL_HV_SVM_DEVICE_CAPABILITIES; /* size: 0x000c */

