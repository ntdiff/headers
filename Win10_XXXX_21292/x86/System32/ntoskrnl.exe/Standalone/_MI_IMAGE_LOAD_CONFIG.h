typedef struct _MI_IMAGE_LOAD_CONFIG
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned short CfgAlignmentBias;
  /* 0x0006 */ unsigned short MachineType;
  /* 0x0008 */ struct _RTL_RVA_LIST* RvaList;
} MI_IMAGE_LOAD_CONFIG, *PMI_IMAGE_LOAD_CONFIG; /* size: 0x000c */

