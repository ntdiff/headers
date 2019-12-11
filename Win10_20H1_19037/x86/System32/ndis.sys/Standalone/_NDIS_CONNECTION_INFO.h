typedef struct _NDIS_CONNECTION_INFO
{
  /* 0x0000 */ unsigned char MacAddress[6];
  union
  {
    struct
    {
      /* 0x0008 */ unsigned long SourceIPv4Address;
      /* 0x000c */ unsigned long DestinationIPv4Address;
      /* 0x0010 */ unsigned char Protocol;
      /* 0x0011 */ char __PADDING__[3];
    } /* size: 0x000c */ IPv4Info;
    struct
    {
      /* 0x0008 */ unsigned char SourceIPv6Address[16];
      /* 0x0018 */ unsigned char DestinationIPv6Address[16];
      /* 0x0028 */ unsigned char Protocol;
    } /* size: 0x0021 */ IPv6Info;
  }; /* size: 0x0021 */
  union
  {
    struct
    {
      /* 0x002c */ unsigned short SourceTcpPort;
      /* 0x002e */ unsigned short DestinationTcpPort;
    } /* size: 0x0004 */ TcpPortInfo;
    struct
    {
      /* 0x002c */ unsigned short SourceUdpPort;
      /* 0x002e */ unsigned short DestinationUdpPort;
    } /* size: 0x0004 */ UdpPortInfo;
  }; /* size: 0x0004 */
} NDIS_CONNECTION_INFO, *PNDIS_CONNECTION_INFO; /* size: 0x0030 */

