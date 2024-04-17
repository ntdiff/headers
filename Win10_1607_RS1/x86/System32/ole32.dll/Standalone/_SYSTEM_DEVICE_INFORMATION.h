typedef struct _SYSTEM_DEVICE_INFORMATION
{
  /* 0x0000 */ unsigned long NumberOfDisks;
  /* 0x0004 */ unsigned long NumberOfFloppies;
  /* 0x0008 */ unsigned long NumberOfCdRoms;
  /* 0x000c */ unsigned long NumberOfTapes;
  /* 0x0010 */ unsigned long NumberOfSerialPorts;
  /* 0x0014 */ unsigned long NumberOfParallelPorts;
} SYSTEM_DEVICE_INFORMATION, *PSYSTEM_DEVICE_INFORMATION; /* size: 0x0018 */

