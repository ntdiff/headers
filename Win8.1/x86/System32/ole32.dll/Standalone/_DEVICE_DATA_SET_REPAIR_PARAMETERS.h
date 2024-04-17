typedef struct _DEVICE_DATA_SET_REPAIR_PARAMETERS
{
  /* 0x0000 */ unsigned long NumberOfRepairCopies;
  /* 0x0004 */ unsigned long SourceCopy;
  /* 0x0008 */ unsigned long RepairCopies[1];
} DEVICE_DATA_SET_REPAIR_PARAMETERS, *PDEVICE_DATA_SET_REPAIR_PARAMETERS; /* size: 0x000c */

