typedef struct _HAL_DP_REPLACE_PARAMETERS
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0008 */ struct _PNP_REPLACE_PROCESSOR_LIST* TargetProcessors;
  /* 0x0010 */ struct _PNP_REPLACE_PROCESSOR_LIST* SpareProcessors;
} HAL_DP_REPLACE_PARAMETERS, *PHAL_DP_REPLACE_PARAMETERS; /* size: 0x0018 */

