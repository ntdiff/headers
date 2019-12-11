typedef struct _NDIS_PACKET_8021Q_INFO
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned int UserPriority : 3; /* bit position: 0 */
        /* 0x0000 */ unsigned int CanonicalFormatId : 1; /* bit position: 3 */
        /* 0x0000 */ unsigned int VlanId : 12; /* bit position: 4 */
        /* 0x0000 */ unsigned int Reserved : 16; /* bit position: 16 */
      }; /* bitfield */
    } /* size: 0x0004 */ TagHeader;
    /* 0x0000 */ void* Value;
  }; /* size: 0x0008 */
} NDIS_PACKET_8021Q_INFO, *PNDIS_PACKET_8021Q_INFO; /* size: 0x0008 */

