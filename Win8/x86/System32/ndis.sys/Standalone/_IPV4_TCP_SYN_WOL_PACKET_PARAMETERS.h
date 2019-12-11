typedef struct _IPV4_TCP_SYN_WOL_PACKET_PARAMETERS
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned char IPv4SourceAddress[4];
  /* 0x0008 */ unsigned char IPv4DestAddress[4];
  /* 0x000c */ unsigned short TCPSourcePortNumber;
  /* 0x000e */ unsigned short TCPDestPortNumber;
} IPV4_TCP_SYN_WOL_PACKET_PARAMETERS, *PIPV4_TCP_SYN_WOL_PACKET_PARAMETERS; /* size: 0x0010 */

