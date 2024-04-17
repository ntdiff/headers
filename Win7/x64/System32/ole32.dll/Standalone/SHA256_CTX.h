struct SHA256_CTX
{
  union
  {
    /* 0x0000 */ unsigned __int64 state64[4];
    /* 0x0000 */ unsigned long state[8];
  }; /* size: 0x0020 */
  /* 0x0020 */ unsigned long count[2];
  /* 0x0028 */ unsigned char buffer[64];
}; /* size: 0x0068 */

