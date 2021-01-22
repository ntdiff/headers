typedef struct _NDIS_IPSEC_OFFLOAD_V2_NET_BUFFER_LIST_INFO
{
  union
  {
    struct
    {
      /* 0x0000 */ void* OffloadHandle;
    } /* size: 0x0008 */ Transmit;
    struct
    {
      struct
      {
        struct /* bitfield */
        {
          /* 0x0000 */ unsigned long SaDeleteReq : 1; /* bit position: 0 */
          /* 0x0000 */ unsigned long CryptoDone : 1; /* bit position: 1 */
          /* 0x0000 */ unsigned long NextCryptoDone : 1; /* bit position: 2 */
          /* 0x0000 */ unsigned long Reserved : 13; /* bit position: 3 */
          /* 0x0000 */ unsigned long CryptoStatus : 16; /* bit position: 16 */
        }; /* bitfield */
      } /* size: 0x0004 */ Receive;
      /* 0x0004 */ long __PADDING__[1];
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} NDIS_IPSEC_OFFLOAD_V2_NET_BUFFER_LIST_INFO, *PNDIS_IPSEC_OFFLOAD_V2_NET_BUFFER_LIST_INFO; /* size: 0x0008 */

