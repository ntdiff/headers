typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_GFP_ETHERNET_HEADER_FIELDS
{
  /* 0x0000 */ unsigned char DestinationMacAddress[6];
  /* 0x0006 */ unsigned char SourceMacAddress[6];
  /* 0x000c */ unsigned short EthType;
  /* 0x000e */ unsigned short CustomerVlanId;
  /* 0x0010 */ unsigned short ProviderVlanId;
  /* 0x0012 */ unsigned char Priority;
  /* 0x0013 */ char __PADDING__[1];
} NDIS_GFP_ETHERNET_HEADER_FIELDS, *PNDIS_GFP_ETHERNET_HEADER_FIELDS; /* size: 0x0014 */

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

typedef struct _NDIS_GFP_HEADER_GROUP_EXACT_MATCH
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long HeadersPresent;
  /* 0x0010 */ unsigned __int64 MatchFields;
  /* 0x0018 */ struct _NDIS_GFP_ETHERNET_HEADER_FIELDS EthernetFields;
  union
  {
    union
    {
      struct
      {
        /* 0x002c */ struct in_addr SourceIPAddress;
        /* 0x0030 */ struct in_addr DestinationIPAddress;
      } /* size: 0x0008 */ IPv4Address;
      struct
      {
        /* 0x002c */ struct in6_addr SourceIPAddress;
        /* 0x003c */ struct in6_addr DestinationIPAddress;
      } /* size: 0x0020 */ IPv6Address;
    }; /* size: 0x0020 */
  } /* size: 0x0020 */ IPAddress;
  /* 0x004c */ unsigned char Dscp;
  /* 0x004d */ unsigned char IPProtocol;
  union
  {
    union
    {
      struct
      {
        /* 0x0050 */ unsigned short SourcePort;
        /* 0x0052 */ unsigned short DestinationPort;
      } /* size: 0x0004 */ Udp;
      struct
      {
        /* 0x0050 */ unsigned short SourcePort;
        /* 0x0052 */ unsigned short DestinationPort;
        /* 0x0054 */ unsigned char TcpFlags;
        /* 0x0055 */ char __PADDING__[1];
      } /* size: 0x0006 */ Tcp;
      struct
      {
        /* 0x0050 */ unsigned char Type;
        /* 0x0051 */ unsigned char Code;
      } /* size: 0x0002 */ Icmp;
      struct
      {
        /* 0x0050 */ unsigned long TenantId;
        /* 0x0054 */ unsigned short GreProtocol;
        /* 0x0056 */ char __PADDING__[2];
      } /* size: 0x0008 */ Encapsulation;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ TransportOrEncapsulation;
} NDIS_GFP_HEADER_GROUP_EXACT_MATCH, *PNDIS_GFP_HEADER_GROUP_EXACT_MATCH; /* size: 0x0058 */

