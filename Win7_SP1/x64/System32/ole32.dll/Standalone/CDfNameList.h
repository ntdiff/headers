class CDfName
{
  /* 0x0000 */ unsigned char _ab[64];
  /* 0x0040 */ unsigned short _cb;
}; /* size: 0x0042 */

class CDfNameList
{
  /* 0x0000 */ class CDfName _df;
  /* 0x0044 */ unsigned long _sectStart;
  /* 0x0048 */ unsigned long _ulSize;
  /* 0x0050 */ class CDfNameList* _pdflNext;
}; /* size: 0x0058 */

