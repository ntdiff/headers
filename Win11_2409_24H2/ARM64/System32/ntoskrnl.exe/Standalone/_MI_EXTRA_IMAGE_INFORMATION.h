typedef struct _MI_EXTRA_IMAGE_INFORMATION
{
  /* 0x0000 */ unsigned long SizeOfHeaders;
  /* 0x0004 */ unsigned long SizeOfImage;
  /* 0x0008 */ unsigned long TimeDateStamp;
  struct /* bitfield */
  {
    /* 0x000c */ unsigned long ImageCetShadowStacksReady : 1; /* bit position: 0 */
    /* 0x000c */ unsigned long ImageCetShadowStacksStrictMode : 1; /* bit position: 1 */
    /* 0x000c */ unsigned long ImageCetSetContextIpValidationRelaxedMode : 1; /* bit position: 2 */
    /* 0x000c */ unsigned long ImageCetDynamicApisAllowInProc : 1; /* bit position: 3 */
    /* 0x000c */ unsigned long ImageCetDowngradeReserved1 : 1; /* bit position: 4 */
    /* 0x000c */ unsigned long ImageCetDowngradeReserved2 : 1; /* bit position: 5 */
    /* 0x000c */ unsigned long ImageExpansionCompatible : 1; /* bit position: 6 */
    /* 0x000c */ unsigned long Spare : 25; /* bit position: 7 */
  }; /* bitfield */
} MI_EXTRA_IMAGE_INFORMATION, *PMI_EXTRA_IMAGE_INFORMATION; /* size: 0x0010 */

