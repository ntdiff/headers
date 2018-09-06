typedef union _KALPC_DIRECT_EVENT
{
  union
  {
    /* 0x0000 */ unsigned __int64 Event;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Referenced : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Reserved : 63; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0008 */
} KALPC_DIRECT_EVENT, *PKALPC_DIRECT_EVENT; /* size: 0x0008 */

