typedef struct _NDIS_IPSEC_OFFLOAD_V2_HEADER_NET_BUFFER_LIST_INFO
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long NextHeader : 8; /* bit position: 0 */
        /* 0x0000 */ unsigned long PadLength : 8; /* bit position: 8 */
        /* 0x0000 */ unsigned long AhHeaderOffset : 8; /* bit position: 16 */
        /* 0x0000 */ unsigned long EspHeaderOffset : 8; /* bit position: 24 */
      }; /* bitfield */
    } /* size: 0x0004 */ Transmit;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long NextHeader : 8; /* bit position: 0 */
        /* 0x0000 */ unsigned long PadLength : 8; /* bit position: 8 */
        /* 0x0000 */ unsigned long HeaderInfoSet : 1; /* bit position: 16 */
      }; /* bitfield */
    } /* size: 0x0004 */ Receive;
  }; /* size: 0x0004 */
} NDIS_IPSEC_OFFLOAD_V2_HEADER_NET_BUFFER_LIST_INFO, *PNDIS_IPSEC_OFFLOAD_V2_HEADER_NET_BUFFER_LIST_INFO; /* size: 0x0004 */

