typedef struct _CM_PNP_BIOS_INSTALLATION_CHECK
{
  /* 0x0000 */ unsigned char Signature[4];
  /* 0x0004 */ unsigned char Revision;
  /* 0x0005 */ unsigned char Length;
  /* 0x0006 */ unsigned short ControlField;
  /* 0x0008 */ unsigned char Checksum;
  /* 0x0009 */ unsigned long EventFlagAddress;
  /* 0x000d */ unsigned short RealModeEntryOffset;
  /* 0x000f */ unsigned short RealModeEntrySegment;
  /* 0x0011 */ unsigned short ProtectedModeEntryOffset;
  /* 0x0013 */ unsigned long ProtectedModeCodeBaseAddress;
  /* 0x0017 */ unsigned long OemDeviceId;
  /* 0x001b */ unsigned short RealModeDataBaseAddress;
  /* 0x001d */ unsigned long ProtectedModeDataBaseAddress;
} CM_PNP_BIOS_INSTALLATION_CHECK, *PCM_PNP_BIOS_INSTALLATION_CHECK; /* size: 0x0021 */

