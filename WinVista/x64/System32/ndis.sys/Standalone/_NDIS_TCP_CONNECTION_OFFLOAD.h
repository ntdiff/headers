typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_TCP_CONNECTION_OFFLOAD
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Encapsulation;
  struct /* bitfield */
  {
    /* 0x0008 */ unsigned long SupportIPv4 : 2; /* bit position: 0 */
    /* 0x0008 */ unsigned long SupportIPv6 : 2; /* bit position: 2 */
    /* 0x0008 */ unsigned long SupportIPv6ExtensionHeaders : 2; /* bit position: 4 */
    /* 0x0008 */ unsigned long SupportSack : 2; /* bit position: 6 */
  }; /* bitfield */
  /* 0x000c */ unsigned long TcpConnectionOffloadCapacity;
  /* 0x0010 */ unsigned long Flags;
} NDIS_TCP_CONNECTION_OFFLOAD, *PNDIS_TCP_CONNECTION_OFFLOAD; /* size: 0x0014 */

