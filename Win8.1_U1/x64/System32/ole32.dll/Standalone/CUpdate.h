class CDfName
{
  /* 0x0000 */ unsigned char _ab[64];
  /* 0x0040 */ unsigned short _cb;
}; /* size: 0x0042 */

class CBasedTSetMemberPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CBasedUpdatePtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CUpdate
{
  /* 0x0000 */ class CDfName _dfnCurrent;
  /* 0x0042 */ class CDfName _dfnOriginal;
  /* 0x0084 */ unsigned long _dl;
  /* 0x0088 */ unsigned long _dwFlags;
  /* 0x0090 */ class CBasedTSetMemberPtr _ptsm;
  /* 0x0098 */ class CBasedUpdatePtr _pudNext;
  /* 0x00a0 */ class CBasedUpdatePtr _pudPrev;
}; /* size: 0x00a8 */

