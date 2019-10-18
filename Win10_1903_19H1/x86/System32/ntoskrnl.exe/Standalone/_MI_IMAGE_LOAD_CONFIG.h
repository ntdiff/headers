typedef struct _MI_IMAGE_LOAD_CONFIG
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long CfgAlignmentBias;
  /* 0x0008 */ unsigned short MachineType;
  /* 0x000c */ struct _RTL_RVA_LIST* RvaList;
  /* 0x0010 */ struct _MI_RETPOLINE_RELOCATION_INFORMATION* RetpolineRelocations;
} MI_IMAGE_LOAD_CONFIG, *PMI_IMAGE_LOAD_CONFIG; /* size: 0x0014 */

