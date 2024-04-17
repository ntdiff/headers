class CMSFHeaderData
{
  /* 0x004c */ unsigned long _sectFat[109];
}; /* size: 0x0200 */

class CMSFHeader
{
  /* 0x0000 */ class CMSFHeaderData _hdr;
  /* 0x0200 */ int _fDirty;
}; /* size: 0x0204 */

