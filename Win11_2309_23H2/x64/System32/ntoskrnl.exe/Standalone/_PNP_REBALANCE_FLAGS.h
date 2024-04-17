typedef union _PNP_REBALANCE_FLAGS
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long RebalanceDueToDynamicPartitioning : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned long ResetDeviceWhileStopped : 1; /* bit position: 1 */
        /* 0x0000 */ unsigned long Reserved : 30; /* bit position: 2 */
      }; /* bitfield */
    } /* size: 0x0004 */ u;
    /* 0x0000 */ unsigned long AsUlong;
  }; /* size: 0x0004 */
} PNP_REBALANCE_FLAGS, *PPNP_REBALANCE_FLAGS; /* size: 0x0004 */

