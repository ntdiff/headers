struct SCacheEntry
{
  /* 0x0000 */ unsigned long ulOffset;
  /* 0x0004 */ unsigned long sect;
  /* 0x0008 */ unsigned long ulRunLength;
}; /* size: 0x000c */

class CBasedDirectStreamPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CBasedMStreamPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CStreamCache
{
  /* 0x0000 */ struct SCacheEntry _ase[9];
  /* 0x006c */ class CBasedDirectStreamPtr _pds;
  /* 0x0070 */ class CBasedMStreamPtr _pmsParent;
  /* 0x0074 */ unsigned long _sid;
  /* 0x0078 */ unsigned short _uHighCacheIndex;
  /* 0x007a */ unsigned short _uNextCacheIndex;
  /* 0x007c */ unsigned short _uCacheState;
}; /* size: 0x0080 */

