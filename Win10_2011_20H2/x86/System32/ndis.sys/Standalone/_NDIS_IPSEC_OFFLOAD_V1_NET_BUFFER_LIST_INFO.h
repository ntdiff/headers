typedef struct _NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO
{
  union
  {
    struct
    {
      /* 0x0000 */ void* OffloadHandle;
    } /* size: 0x0004 */ Transmit;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned short SaDeleteReq : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned short CryptoDone : 1; /* bit position: 1 */
        /* 0x0000 */ unsigned short NextCryptoDone : 1; /* bit position: 2 */
        /* 0x0000 */ unsigned short Pad : 13; /* bit position: 3 */
      }; /* bitfield */
      /* 0x0002 */ unsigned short CryptoStatus;
    } /* size: 0x0004 */ Receive;
  }; /* size: 0x0004 */
} NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO, *PNDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO; /* size: 0x0004 */

