struct SHA512_CTX
{
  /* 0x0000 */ unsigned __int64 state[8];
  /* 0x0040 */ unsigned __int64 count[2];
  /* 0x0050 */ unsigned char buffer[128];
}; /* size: 0x00d0 */

