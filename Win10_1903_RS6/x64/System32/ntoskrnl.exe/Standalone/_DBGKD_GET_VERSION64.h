typedef struct _DBGKD_GET_VERSION64
{
  /* 0x0000 */ unsigned short MajorVersion;
  /* 0x0002 */ unsigned short MinorVersion;
  /* 0x0004 */ unsigned char ProtocolVersion;
  /* 0x0005 */ unsigned char KdSecondaryVersion;
  /* 0x0006 */ unsigned short Flags;
  /* 0x0008 */ unsigned short MachineType;
  /* 0x000a */ unsigned char MaxPacketType;
  /* 0x000b */ unsigned char MaxStateChange;
  /* 0x000c */ unsigned char MaxManipulate;
  /* 0x000d */ unsigned char Simulation;
  /* 0x000e */ unsigned short Unused[1];
  /* 0x0010 */ unsigned __int64 KernBase;
  /* 0x0018 */ unsigned __int64 PsLoadedModuleList;
  /* 0x0020 */ unsigned __int64 DebuggerDataList;
} DBGKD_GET_VERSION64, *PDBGKD_GET_VERSION64; /* size: 0x0028 */

