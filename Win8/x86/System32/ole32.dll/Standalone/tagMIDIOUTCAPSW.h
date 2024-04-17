struct tagMIDIOUTCAPSW
{
  /* 0x0000 */ unsigned short wMid;
  /* 0x0002 */ unsigned short wPid;
  /* 0x0004 */ unsigned int vDriverVersion;
  /* 0x0008 */ wchar_t szPname[32];
  /* 0x0048 */ unsigned short wTechnology;
  /* 0x004a */ unsigned short wVoices;
  /* 0x004c */ unsigned short wNotes;
  /* 0x004e */ unsigned short wChannelMask;
  /* 0x0050 */ unsigned long dwSupport;
}; /* size: 0x0054 */

