struct A_SHA_CTX
{
  union
  {
    union
    {
      /* 0x0000 */ unsigned __int64 buffer64[8];
      /* 0x0000 */ unsigned char buffer[64];
    }; /* size: 0x0040 */
  } /* size: 0x0040 */ u;
  /* 0x0040 */ unsigned long state[5];
  /* 0x0054 */ unsigned long count[2];
  /* 0x005c */ long __PADDING__[1];
}; /* size: 0x0060 */

