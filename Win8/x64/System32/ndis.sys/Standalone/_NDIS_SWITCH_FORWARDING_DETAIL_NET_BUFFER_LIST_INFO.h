typedef union _NDIS_SWITCH_FORWARDING_DETAIL_NET_BUFFER_LIST_INFO
{
  union
  {
    /* 0x0000 */ unsigned __int64 AsUINT64;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned int NumAvailableDestinations : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned int SourcePortId : 16; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0004 */ unsigned int SourceNicIndex : 8; /* bit position: 0 */
        /* 0x0004 */ unsigned int Reserved1 : 2; /* bit position: 8 */
        /* 0x0004 */ unsigned int IsPacketDataSafe : 1; /* bit position: 10 */
        /* 0x0004 */ unsigned int SafePacketDataSize : 12; /* bit position: 11 */
        /* 0x0004 */ unsigned int Reserved2 : 9; /* bit position: 23 */
      }; /* bitfield */
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} NDIS_SWITCH_FORWARDING_DETAIL_NET_BUFFER_LIST_INFO, *PNDIS_SWITCH_FORWARDING_DETAIL_NET_BUFFER_LIST_INFO; /* size: 0x0008 */

