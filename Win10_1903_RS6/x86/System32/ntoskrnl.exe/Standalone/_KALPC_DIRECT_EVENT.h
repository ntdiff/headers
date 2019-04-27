typedef union _KALPC_DIRECT_EVENT
{
  union
  {
    /* 0x0000 */ unsigned long Value;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long DirectType : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long EventReferenced : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long EventObjectBits : 30; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} KALPC_DIRECT_EVENT, *PKALPC_DIRECT_EVENT; /* size: 0x0004 */

