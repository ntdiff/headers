class CDfName
{
  /* 0x0000 */ unsigned char _ab[64];
  /* 0x0040 */ unsigned short _cb;
}; /* size: 0x0042 */

class CBasedRevertablePtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class PRevertable
{
  /* 0x0000 */ unsigned long _sig;
  /* 0x0004 */ unsigned long _luid;
  /* 0x0008 */ unsigned long _df;
  /* 0x000c */ class CDfName _dfn;
  /* 0x0050 */ class CBasedRevertablePtr _prvNext;
}; /* size: 0x0054 */

