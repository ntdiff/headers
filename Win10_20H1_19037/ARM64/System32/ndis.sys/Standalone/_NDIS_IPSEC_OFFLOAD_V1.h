typedef struct _NDIS_IPSEC_OFFLOAD_V1
{
  struct
  {
    /* 0x0000 */ unsigned long Encapsulation;
    /* 0x0004 */ unsigned long AhEspCombined;
    /* 0x0008 */ unsigned long TransportTunnelCombined;
    /* 0x000c */ unsigned long IPv4Options;
    /* 0x0010 */ unsigned long Flags;
  } /* size: 0x0014 */ Supported;
  struct
  {
    struct /* bitfield */
    {
      /* 0x0014 */ unsigned long Md5 : 2; /* bit position: 0 */
      /* 0x0014 */ unsigned long Sha_1 : 2; /* bit position: 2 */
      /* 0x0014 */ unsigned long Transport : 2; /* bit position: 4 */
      /* 0x0014 */ unsigned long Tunnel : 2; /* bit position: 6 */
      /* 0x0014 */ unsigned long Send : 2; /* bit position: 8 */
      /* 0x0014 */ unsigned long Receive : 2; /* bit position: 10 */
    }; /* bitfield */
  } /* size: 0x0004 */ IPv4AH;
  struct
  {
    struct /* bitfield */
    {
      /* 0x0018 */ unsigned long Des : 2; /* bit position: 0 */
      /* 0x0018 */ unsigned long Reserved : 2; /* bit position: 2 */
      /* 0x0018 */ unsigned long TripleDes : 2; /* bit position: 4 */
      /* 0x0018 */ unsigned long NullEsp : 2; /* bit position: 6 */
      /* 0x0018 */ unsigned long Transport : 2; /* bit position: 8 */
      /* 0x0018 */ unsigned long Tunnel : 2; /* bit position: 10 */
      /* 0x0018 */ unsigned long Send : 2; /* bit position: 12 */
      /* 0x0018 */ unsigned long Receive : 2; /* bit position: 14 */
    }; /* bitfield */
  } /* size: 0x0004 */ IPv4ESP;
} NDIS_IPSEC_OFFLOAD_V1, *PNDIS_IPSEC_OFFLOAD_V1; /* size: 0x001c */

