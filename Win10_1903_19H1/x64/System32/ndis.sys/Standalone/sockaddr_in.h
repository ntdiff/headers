struct in_addr
{
  union
  {
    union
    {
      struct
      {
        /* 0x0000 */ unsigned char s_b1;
        /* 0x0001 */ unsigned char s_b2;
        /* 0x0002 */ unsigned char s_b3;
        /* 0x0003 */ unsigned char s_b4;
      } /* size: 0x0004 */ S_un_b;
      struct
      {
        /* 0x0000 */ unsigned short s_w1;
        /* 0x0002 */ unsigned short s_w2;
      } /* size: 0x0004 */ S_un_w;
      /* 0x0000 */ unsigned long S_addr;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ S_un;
}; /* size: 0x0004 */

struct sockaddr_in
{
  /* 0x0000 */ unsigned short sin_family;
  /* 0x0002 */ unsigned short sin_port;
  /* 0x0004 */ struct in_addr sin_addr;
  /* 0x0008 */ char sin_zero[8];
}; /* size: 0x0010 */

