typedef struct _NDIS_AOAC_WAKE_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long WasAoAcWake : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long WasNicRefTaken : 1; /* bit position: 1 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
  }; /* size: 0x0004 */
} NDIS_AOAC_WAKE_FLAGS, *PNDIS_AOAC_WAKE_FLAGS; /* size: 0x0004 */

