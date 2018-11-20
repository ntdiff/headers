typedef union _KALPC_DIRECT_EVENT
{
  union
  {
    /* 0x0000 */ unsigned __int64 Value;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 DirectType : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 EventReferenced : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 EventObjectBits : 62; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0008 */
} KALPC_DIRECT_EVENT, *PKALPC_DIRECT_EVENT; /* size: 0x0008 */

