typedef struct _CM_FLOPPY_DEVICE_DATA
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Revision;
  /* 0x0004 */ char Size[8];
  /* 0x000c */ unsigned long MaxDensity;
  /* 0x0010 */ unsigned long MountDensity;
  /* 0x0014 */ unsigned char StepRateHeadUnloadTime;
  /* 0x0015 */ unsigned char HeadLoadTime;
  /* 0x0016 */ unsigned char MotorOffTime;
  /* 0x0017 */ unsigned char SectorLengthCode;
  /* 0x0018 */ unsigned char SectorPerTrack;
  /* 0x0019 */ unsigned char ReadWriteGapLength;
  /* 0x001a */ unsigned char DataTransferLength;
  /* 0x001b */ unsigned char FormatGapLength;
  /* 0x001c */ unsigned char FormatFillCharacter;
  /* 0x001d */ unsigned char HeadSettleTime;
  /* 0x001e */ unsigned char MotorSettleTime;
  /* 0x001f */ unsigned char MaximumTrackValue;
  /* 0x0020 */ unsigned char DataTransferRate;
  /* 0x0021 */ char __PADDING__[3];
} CM_FLOPPY_DEVICE_DATA, *PCM_FLOPPY_DEVICE_DATA; /* size: 0x0024 */

