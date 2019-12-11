struct in6_addr
{
  union
  {
    union
    {
      /* 0x0000 */ unsigned char Byte[16];
      /* 0x0000 */ unsigned short Word[8];
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ u;
}; /* size: 0x0010 */

struct SCOPE_ID
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Zone : 28; /* bit position: 0 */
      /* 0x0000 */ unsigned long Level : 4; /* bit position: 28 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
  }; /* size: 0x0004 */
}; /* size: 0x0004 */

struct sockaddr_in6
{
  /* 0x0000 */ unsigned short sin6_family;
  /* 0x0002 */ unsigned short sin6_port;
  /* 0x0004 */ unsigned long sin6_flowinfo;
  /* 0x0008 */ struct in6_addr sin6_addr;
  union
  {
    /* 0x0018 */ unsigned long sin6_scope_id;
    /* 0x0018 */ struct SCOPE_ID sin6_scope_struct;
  }; /* size: 0x0004 */
}; /* size: 0x001c */

