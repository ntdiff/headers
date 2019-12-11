typedef struct _IPV4_TCP_SYN_WOL_PACKET_PARAMETERS
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned char IPv4SourceAddress[4];
  /* 0x0008 */ unsigned char IPv4DestAddress[4];
  /* 0x000c */ unsigned short TCPSourcePortNumber;
  /* 0x000e */ unsigned short TCPDestPortNumber;
} IPV4_TCP_SYN_WOL_PACKET_PARAMETERS, *PIPV4_TCP_SYN_WOL_PACKET_PARAMETERS; /* size: 0x0010 */

typedef struct _IPV6_TCP_SYN_WOL_PACKET_PARAMETERS
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned char IPv6SourceAddress[16];
  /* 0x0014 */ unsigned char IPv6DestAddress[16];
  /* 0x0024 */ unsigned short TCPSourcePortNumber;
  /* 0x0026 */ unsigned short TCPDestPortNumber;
} IPV6_TCP_SYN_WOL_PACKET_PARAMETERS, *PIPV6_TCP_SYN_WOL_PACKET_PARAMETERS; /* size: 0x0028 */

typedef struct _EAPOL_REQUEST_ID_MESSAGE_WOL_PACKET_PARAMETERS
{
  /* 0x0000 */ unsigned long Flags;
} EAPOL_REQUEST_ID_MESSAGE_WOL_PACKET_PARAMETERS, *PEAPOL_REQUEST_ID_MESSAGE_WOL_PACKET_PARAMETERS; /* size: 0x0004 */

typedef struct _WOL_BITMAP_PATTERN
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long MaskOffset;
  /* 0x0008 */ unsigned long MaskSize;
  /* 0x000c */ unsigned long PatternOffset;
  /* 0x0010 */ unsigned long PatternSize;
} WOL_BITMAP_PATTERN, *PWOL_BITMAP_PATTERN; /* size: 0x0014 */

typedef union _WOL_PATTERN
{
  union
  {
    /* 0x0000 */ struct _IPV4_TCP_SYN_WOL_PACKET_PARAMETERS IPv4TcpSynParameters;
    /* 0x0000 */ struct _IPV6_TCP_SYN_WOL_PACKET_PARAMETERS IPv6TcpSynParameters;
    /* 0x0000 */ struct _EAPOL_REQUEST_ID_MESSAGE_WOL_PACKET_PARAMETERS EapolRequestIdMessageParameters;
    /* 0x0000 */ struct _WOL_BITMAP_PATTERN WoLBitMapPattern;
  }; /* size: 0x0028 */
} WOL_PATTERN, *PWOL_PATTERN; /* size: 0x0028 */

