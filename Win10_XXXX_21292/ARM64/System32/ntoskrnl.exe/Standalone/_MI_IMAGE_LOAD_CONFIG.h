typedef struct _MI_IMAGE_LOAD_CONFIG
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned short CfgAlignmentBias;
  /* 0x0006 */ unsigned short MachineType;
  /* 0x0008 */ struct _RTL_RVA_LIST* RvaList;
  /* 0x0010 */ void* ConditionalFixups;
  /* 0x0018 */ void* EcCodeRanges;
  /* 0x0020 */ unsigned long EcCodeRangeCount;
  /* 0x0024 */ unsigned long AlternateEntryPoint;
} MI_IMAGE_LOAD_CONFIG, *PMI_IMAGE_LOAD_CONFIG; /* size: 0x0028 */

