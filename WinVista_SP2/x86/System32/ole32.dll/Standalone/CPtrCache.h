class CPtrBlock
{
  /* 0x0000 */ int _cPtrs;
  /* 0x0004 */ class CPtrBlock* _pbNext;
  /* 0x0008 */ void* _apv[50];
}; /* size: 0x00d0 */

class CPtrCache
{
  /* 0x0000 */ class CPtrBlock _pbFirst;
  /* 0x00d0 */ class CPtrBlock* _pbHead;
  /* 0x00d4 */ class CPtrBlock* _pbEnum;
  /* 0x00d8 */ int _iEnum;
}; /* size: 0x00dc */

