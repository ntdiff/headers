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

typedef struct _IPV4_HEADER
{
  union
  {
    /* 0x0000 */ unsigned char VersionAndHeaderLength;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char HeaderLength : 4; /* bit position: 0 */
      /* 0x0000 */ unsigned char Version : 4; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  union
  {
    /* 0x0001 */ unsigned char TypeOfServiceAndEcnField;
    struct /* bitfield */
    {
      /* 0x0001 */ unsigned char EcnField : 2; /* bit position: 0 */
      /* 0x0001 */ unsigned char TypeOfService : 6; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x0002 */ unsigned short TotalLength;
  /* 0x0004 */ unsigned short Identification;
  union
  {
    /* 0x0006 */ unsigned short FlagsAndOffset;
    struct /* bitfield */
    {
      /* 0x0006 */ unsigned short DontUse1 : 5; /* bit position: 0 */
      /* 0x0006 */ unsigned short MoreFragments : 1; /* bit position: 5 */
      /* 0x0006 */ unsigned short DontFragment : 1; /* bit position: 6 */
      /* 0x0006 */ unsigned short Reserved : 1; /* bit position: 7 */
      /* 0x0006 */ unsigned short DontUse2 : 8; /* bit position: 8 */
    }; /* bitfield */
  }; /* size: 0x0002 */
  /* 0x0008 */ unsigned char TimeToLive;
  /* 0x0009 */ unsigned char Protocol;
  /* 0x000a */ unsigned short HeaderChecksum;
  /* 0x000c */ struct in_addr SourceAddress;
  /* 0x0010 */ struct in_addr DestinationAddress;
} IPV4_HEADER, *PIPV4_HEADER; /* size: 0x0014 */

