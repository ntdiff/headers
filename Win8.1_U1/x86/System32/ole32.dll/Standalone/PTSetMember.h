class CDfName
{
  /* 0x0000 */ unsigned char _ab[64];
  /* 0x0040 */ unsigned short _cb;
}; /* size: 0x0042 */

class PTSetMember
{
  /* 0x0008 */ unsigned long _dlTree;
  /* 0x000c */ unsigned long _dlName;
  /* 0x0010 */ unsigned long _ulLevel;
  /* 0x0014 */ class CDfName _dfnName;
  /* 0x0056 */ const unsigned short _uType;
}; /* size: 0x0058 */

