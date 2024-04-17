struct tagMIDIOUTCAPSA
{
  /* 0x0000 */ unsigned short wMid;
  /* 0x0002 */ unsigned short wPid;
  /* 0x0004 */ unsigned int vDriverVersion;
  /* 0x0008 */ char szPname[32];
  /* 0x0028 */ unsigned short wTechnology;
  /* 0x002a */ unsigned short wVoices;
  /* 0x002c */ unsigned short wNotes;
  /* 0x002e */ unsigned short wChannelMask;
  /* 0x0030 */ unsigned long dwSupport;
}; /* size: 0x0034 */

