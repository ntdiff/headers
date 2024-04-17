struct tagMCI_WAVE_SET_PARMS
{
  /* 0x0000 */ unsigned long dwCallback;
  /* 0x0004 */ unsigned long dwTimeFormat;
  /* 0x0008 */ unsigned long dwAudio;
  /* 0x000c */ unsigned int wInput;
  /* 0x0010 */ unsigned int wOutput;
  /* 0x0014 */ unsigned short wFormatTag;
  /* 0x0016 */ unsigned short wReserved2;
  /* 0x0018 */ unsigned short nChannels;
  /* 0x001a */ unsigned short wReserved3;
  /* 0x001c */ unsigned long nSamplesPerSec;
  /* 0x0020 */ unsigned long nAvgBytesPerSec;
  /* 0x0024 */ unsigned short nBlockAlign;
  /* 0x0026 */ unsigned short wReserved4;
  /* 0x0028 */ unsigned short wBitsPerSample;
  /* 0x002a */ unsigned short wReserved5;
}; /* size: 0x002c */

