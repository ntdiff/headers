typedef struct _HAL_HV_SVM_SYSTEM_CAPABILITIES
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long SvmSupported : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long GpaAlwaysValid : 1; /* bit position: 1 */
  }; /* bitfield */
  /* 0x0004 */ unsigned long MaxPasidSpaceCount;
  /* 0x0008 */ unsigned long MaxPasidSpacePasidCount;
  /* 0x000c */ unsigned long MaxPrqSize;
  /* 0x0010 */ unsigned long IommuCount;
  /* 0x0014 */ unsigned long MinIommuPasidCount;
} HAL_HV_SVM_SYSTEM_CAPABILITIES, *PHAL_HV_SVM_SYSTEM_CAPABILITIES; /* size: 0x0018 */

