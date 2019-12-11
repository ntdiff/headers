typedef union _NDIS_SFA_GET_METER_DATA_FLAGS
{
  union
  {
    /* 0x0000 */ unsigned int AsUlong;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned int RemoveRule : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned int Reserved : 31; /* bit position: 1 */
      }; /* bitfield */
    } /* size: 0x0004 */ Bits;
  }; /* size: 0x0004 */
} NDIS_SFA_GET_METER_DATA_FLAGS, *PNDIS_SFA_GET_METER_DATA_FLAGS; /* size: 0x0004 */

