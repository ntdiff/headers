typedef struct _HAL_HV_SYSTEM_PASID_CAPABILITIES
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long SvmSupported : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long GpaAlwaysValid : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long PasidSupported : 1; /* bit position: 2 */
  }; /* bitfield */
  /* 0x0004 */ unsigned long MaxPasidSpacePasidCount;
  /* 0x0008 */ unsigned long MaxPrqSize;
  /* 0x000c */ unsigned long SvmIommuCount;
  /* 0x0010 */ unsigned long MinIommuPasidCount;
} HAL_HV_SYSTEM_PASID_CAPABILITIES, *PHAL_HV_SYSTEM_PASID_CAPABILITIES; /* size: 0x0014 */

