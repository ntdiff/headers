struct CSimpStream
{
  /* 0x0010 */ long _cReferences;
  /* 0x0014 */ long _ulSeekStart;
  /* 0x0018 */ unsigned long _ulSeekPos;
  /* 0x0020 */ struct CSimpStorage* _pstgParent;
  /* 0x0028 */ void* _hFile;
}; /* size: 0x0030 */

