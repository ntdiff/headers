typedef struct _NDIS_NET_BUFFER_LIST_VIRTUAL_SUBNET_INFO
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned int VirtualSubnetId : 24; /* bit position: 0 */
        /* 0x0000 */ unsigned int ReservedVsidBits : 8; /* bit position: 24 */
      }; /* bitfield */
      /* 0x0004 */ unsigned int Reserved;
    }; /* size: 0x0008 */
    /* 0x0000 */ void* Value;
  }; /* size: 0x0008 */
} NDIS_NET_BUFFER_LIST_VIRTUAL_SUBNET_INFO, *PNDIS_NET_BUFFER_LIST_VIRTUAL_SUBNET_INFO; /* size: 0x0008 */

