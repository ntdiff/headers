struct waveformat_tag
{
  /* 0x0000 */ unsigned short wFormatTag;
  /* 0x0002 */ unsigned short nChannels;
  /* 0x0004 */ unsigned long nSamplesPerSec;
  /* 0x0008 */ unsigned long nAvgBytesPerSec;
  /* 0x000c */ unsigned short nBlockAlign;
}; /* size: 0x000e */

struct pcmwaveformat_tag
{
  /* 0x0000 */ struct waveformat_tag wf;
  /* 0x000e */ unsigned short wBitsPerSample;
}; /* size: 0x0010 */

