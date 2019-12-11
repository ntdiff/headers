typedef struct _IPV6_FRAGMENT_HEADER
{
  /* 0x0000 */ unsigned char NextHeader;
  /* 0x0001 */ unsigned char Reserved;
  union
  {
    struct /* bitfield */
    {
      /* 0x0002 */ unsigned short DontUse1 : 8; /* bit position: 0 */
      /* 0x0002 */ unsigned short MoreFragments : 1; /* bit position: 8 */
      /* 0x0002 */ unsigned short ReservedBits : 2; /* bit position: 9 */
      /* 0x0002 */ unsigned short DontUse2 : 5; /* bit position: 11 */
    }; /* bitfield */
    /* 0x0002 */ unsigned short OffsetAndFlags;
  }; /* size: 0x0002 */
  /* 0x0004 */ unsigned int Id;
} IPV6_FRAGMENT_HEADER, *PIPV6_FRAGMENT_HEADER; /* size: 0x0008 */

