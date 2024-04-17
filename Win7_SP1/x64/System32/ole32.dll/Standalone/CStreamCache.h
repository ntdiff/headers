struct SCacheEntry
{
  /* 0x0000 */ unsigned long ulOffset;
  /* 0x0004 */ unsigned long sect;
  /* 0x0008 */ unsigned long ulRunLength;
}; /* size: 0x000c */

class CBasedDirectStreamPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CBasedMStreamPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CStreamCache
{
  /* 0x0000 */ struct SCacheEntry _ase[9];
  /* 0x0070 */ class CBasedDirectStreamPtr _pds;
  /* 0x0078 */ class CBasedMStreamPtr _pmsParent;
  /* 0x0080 */ unsigned long _sid;
  /* 0x0084 */ unsigned short _uHighCacheIndex;
  /* 0x0086 */ unsigned short _uNextCacheIndex;
  /* 0x0088 */ unsigned short _uCacheState;
}; /* size: 0x0090 */

