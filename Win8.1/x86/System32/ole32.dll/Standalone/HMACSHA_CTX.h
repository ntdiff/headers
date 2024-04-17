struct A_SHA_CTX
{
  union
  {
    /* 0x0000 */ unsigned char buffer[64];
  } /* size: 0x0040 */ u;
  /* 0x0040 */ unsigned long state[5];
  /* 0x0054 */ unsigned long count[2];
}; /* size: 0x005c */

struct HMACSHA_CTX
{
  /* 0x0000 */ struct A_SHA_CTX context_ipad;
  /* 0x005c */ struct A_SHA_CTX context_opad;
}; /* size: 0x00b8 */

