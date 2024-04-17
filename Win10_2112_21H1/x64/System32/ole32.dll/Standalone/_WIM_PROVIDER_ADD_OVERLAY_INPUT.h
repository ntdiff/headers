typedef struct _WIM_PROVIDER_ADD_OVERLAY_INPUT
{
  /* 0x0000 */ unsigned long WimType;
  /* 0x0004 */ unsigned long WimIndex;
  /* 0x0008 */ unsigned long WimFileNameOffset;
  /* 0x000c */ unsigned long WimFileNameLength;
} WIM_PROVIDER_ADD_OVERLAY_INPUT, *PWIM_PROVIDER_ADD_OVERLAY_INPUT; /* size: 0x0010 */

