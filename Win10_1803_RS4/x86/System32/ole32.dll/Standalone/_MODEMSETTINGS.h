typedef struct _MODEMSETTINGS
{
  /* 0x0000 */ unsigned long dwActualSize;
  /* 0x0004 */ unsigned long dwRequiredSize;
  /* 0x0008 */ unsigned long dwDevSpecificOffset;
  /* 0x000c */ unsigned long dwDevSpecificSize;
  /* 0x0010 */ unsigned long dwCallSetupFailTimer;
  /* 0x0014 */ unsigned long dwInactivityTimeout;
  /* 0x0018 */ unsigned long dwSpeakerVolume;
  /* 0x001c */ unsigned long dwSpeakerMode;
  /* 0x0020 */ unsigned long dwPreferredModemOptions;
  /* 0x0024 */ unsigned long dwNegotiatedModemOptions;
  /* 0x0028 */ unsigned long dwNegotiatedDCERate;
  /* 0x002c */ unsigned char abVariablePortion[1];
  /* 0x002d */ char __PADDING__[3];
} MODEMSETTINGS, *PMODEMSETTINGS; /* size: 0x0030 */

