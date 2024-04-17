typedef struct _NDIS_SWITCH_PORT_DESTINATION
{
  /* 0x0000 */ unsigned int PortId;
  /* 0x0004 */ unsigned short NicIndex;
  struct /* bitfield */
  {
    /* 0x0006 */ unsigned short IsExcluded : 1; /* bit position: 0 */
    /* 0x0006 */ unsigned short PreserveVLAN : 1; /* bit position: 1 */
    /* 0x0006 */ unsigned short PreservePriority : 1; /* bit position: 2 */
    /* 0x0006 */ unsigned short Reserved : 13; /* bit position: 3 */
  }; /* bitfield */
} NDIS_SWITCH_PORT_DESTINATION, *PNDIS_SWITCH_PORT_DESTINATION; /* size: 0x0008 */

