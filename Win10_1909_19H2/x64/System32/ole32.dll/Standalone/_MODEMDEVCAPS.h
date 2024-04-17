typedef struct _MODEMDEVCAPS
{
  /* 0x0000 */ unsigned long dwActualSize;
  /* 0x0004 */ unsigned long dwRequiredSize;
  /* 0x0008 */ unsigned long dwDevSpecificOffset;
  /* 0x000c */ unsigned long dwDevSpecificSize;
  /* 0x0010 */ unsigned long dwModemProviderVersion;
  /* 0x0014 */ unsigned long dwModemManufacturerOffset;
  /* 0x0018 */ unsigned long dwModemManufacturerSize;
  /* 0x001c */ unsigned long dwModemModelOffset;
  /* 0x0020 */ unsigned long dwModemModelSize;
  /* 0x0024 */ unsigned long dwModemVersionOffset;
  /* 0x0028 */ unsigned long dwModemVersionSize;
  /* 0x002c */ unsigned long dwDialOptions;
  /* 0x0030 */ unsigned long dwCallSetupFailTimer;
  /* 0x0034 */ unsigned long dwInactivityTimeout;
  /* 0x0038 */ unsigned long dwSpeakerVolume;
  /* 0x003c */ unsigned long dwSpeakerMode;
  /* 0x0040 */ unsigned long dwModemOptions;
  /* 0x0044 */ unsigned long dwMaxDTERate;
  /* 0x0048 */ unsigned long dwMaxDCERate;
  /* 0x004c */ unsigned char abVariablePortion[1];
  /* 0x004d */ char __PADDING__[3];
} MODEMDEVCAPS, *PMODEMDEVCAPS; /* size: 0x0050 */

