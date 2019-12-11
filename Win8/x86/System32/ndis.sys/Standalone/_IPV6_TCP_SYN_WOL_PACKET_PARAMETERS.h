typedef struct _IPV6_TCP_SYN_WOL_PACKET_PARAMETERS
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned char IPv6SourceAddress[16];
  /* 0x0014 */ unsigned char IPv6DestAddress[16];
  /* 0x0024 */ unsigned short TCPSourcePortNumber;
  /* 0x0026 */ unsigned short TCPDestPortNumber;
} IPV6_TCP_SYN_WOL_PACKET_PARAMETERS, *PIPV6_TCP_SYN_WOL_PACKET_PARAMETERS; /* size: 0x0028 */

