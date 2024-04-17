class CDfName
{
  /* 0x0000 */ unsigned char _ab[64];
  /* 0x0040 */ unsigned short _cb;
}; /* size: 0x0042 */

struct SIterBuffer
{
  /* 0x0000 */ class CDfName dfnName;
  /* 0x0044 */ unsigned long type;
}; /* size: 0x0048 */

