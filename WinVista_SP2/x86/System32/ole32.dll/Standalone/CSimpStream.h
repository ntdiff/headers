struct CSimpStream
{
  /* 0x0008 */ long _cReferences;
  /* 0x000c */ long _ulSeekStart;
  /* 0x0010 */ unsigned long _ulSeekPos;
  /* 0x0014 */ struct CSimpStorage* _pstgParent;
  /* 0x0018 */ void* _hFile;
}; /* size: 0x001c */

