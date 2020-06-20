typedef struct _PROCLOCALGIC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned short Reserved;
  /* 0x0004 */ unsigned long Identifier;
  /* 0x0008 */ unsigned long AcpiProcessorId;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ unsigned long ParkingProtocolVersion;
  /* 0x0014 */ unsigned long PerformanceInterruptGsi;
  /* 0x0018 */ unsigned __int64 ParkedPhysicalAddress;
  /* 0x0020 */ unsigned __int64 ControllerPhysicalAddress;
  /* 0x0028 */ unsigned __int64 Gicv;
  /* 0x0030 */ unsigned __int64 Gich;
  /* 0x0038 */ unsigned long VgicMaintenanceInterrupt;
  /* 0x003c */ unsigned __int64 GicrBaseAddress;
  /* 0x0044 */ unsigned __int64 Mpidr;
  /* 0x004c */ unsigned char ProcessorPowerEfficiencyClass;
  /* 0x004d */ unsigned char Reserved2[3];
} PROCLOCALGIC, *PPROCLOCALGIC; /* size: 0x0050 */

