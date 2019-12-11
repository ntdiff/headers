typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_OFFLOAD_ENCAPSULATION
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  struct
  {
    /* 0x0004 */ unsigned long Enabled;
    /* 0x0008 */ unsigned long EncapsulationType;
    /* 0x000c */ unsigned long HeaderSize;
  } /* size: 0x000c */ IPv4;
  struct
  {
    /* 0x0010 */ unsigned long Enabled;
    /* 0x0014 */ unsigned long EncapsulationType;
    /* 0x0018 */ unsigned long HeaderSize;
  } /* size: 0x000c */ IPv6;
} NDIS_OFFLOAD_ENCAPSULATION, *PNDIS_OFFLOAD_ENCAPSULATION; /* size: 0x001c */

typedef struct _NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ struct _NDIS_OFFLOAD_ENCAPSULATION Encapsulation;
  /* 0x0020 */ unsigned long TicksPerSecond;
  /* 0x0024 */ unsigned char TcpAckFrequency;
  /* 0x0025 */ unsigned char TcpDelayedAckTicks;
  /* 0x0026 */ unsigned char TcpMaximumRetransmissions;
  /* 0x0027 */ unsigned char TcpDoubtReachabilityRetransmissions;
  /* 0x0028 */ unsigned long TcpSwsPreventionTicks;
  /* 0x002c */ unsigned long TcpDuplicateAckThreshold;
  /* 0x0030 */ unsigned long TcpPushTicks;
  /* 0x0034 */ unsigned long NceStaleTicks;
} NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS, *PNDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS; /* size: 0x0038 */

