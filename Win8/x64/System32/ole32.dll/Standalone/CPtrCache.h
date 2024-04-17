class CPtrBlock
{
  /* 0x0000 */ int _cPtrs;
  /* 0x0008 */ class CPtrBlock* _pbNext;
  /* 0x0010 */ void* _apv[50];
}; /* size: 0x01a0 */

class CPtrCache
{
  /* 0x0000 */ class CPtrBlock _pbFirst;
  /* 0x01a0 */ class CPtrBlock* _pbHead;
  /* 0x01a8 */ class CPtrBlock* _pbEnum;
  /* 0x01b0 */ int _iEnum;
}; /* size: 0x01b8 */

