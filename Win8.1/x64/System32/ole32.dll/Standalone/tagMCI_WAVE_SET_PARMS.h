struct tagMCI_WAVE_SET_PARMS
{
  /* 0x0000 */ unsigned __int64 dwCallback;
  /* 0x0008 */ unsigned long dwTimeFormat;
  /* 0x000c */ unsigned long dwAudio;
  /* 0x0010 */ unsigned int wInput;
  /* 0x0014 */ unsigned int wOutput;
  /* 0x0018 */ unsigned short wFormatTag;
  /* 0x001a */ unsigned short wReserved2;
  /* 0x001c */ unsigned short nChannels;
  /* 0x001e */ unsigned short wReserved3;
  /* 0x0020 */ unsigned long nSamplesPerSec;
  /* 0x0024 */ unsigned long nAvgBytesPerSec;
  /* 0x0028 */ unsigned short nBlockAlign;
  /* 0x002a */ unsigned short wReserved4;
  /* 0x002c */ unsigned short wBitsPerSample;
  /* 0x002e */ unsigned short wReserved5;
}; /* size: 0x0030 */

