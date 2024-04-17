struct tagWAVEINCAPSW
{
  /* 0x0000 */ unsigned short wMid;
  /* 0x0002 */ unsigned short wPid;
  /* 0x0004 */ unsigned int vDriverVersion;
  /* 0x0008 */ wchar_t szPname[32];
  /* 0x0048 */ unsigned long dwFormats;
  /* 0x004c */ unsigned short wChannels;
  /* 0x004e */ unsigned short wReserved1;
}; /* size: 0x0050 */

