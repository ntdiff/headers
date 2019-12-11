typedef struct _NDIS_TCP_RECV_SEG_COALESCE_OFFLOAD
{
  struct
  {
    /* 0x0000 */ unsigned char Enabled;
  } /* size: 0x0001 */ IPv4;
  struct
  {
    /* 0x0001 */ unsigned char Enabled;
  } /* size: 0x0001 */ IPv6;
} NDIS_TCP_RECV_SEG_COALESCE_OFFLOAD, *PNDIS_TCP_RECV_SEG_COALESCE_OFFLOAD; /* size: 0x0002 */

