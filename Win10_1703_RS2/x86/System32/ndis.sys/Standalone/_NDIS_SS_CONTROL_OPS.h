typedef struct _NDIS_SS_CONTROL_OPS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Oid : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Pause : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Restart : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long Reset : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long CheckForHang : 1; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
  }; /* size: 0x0004 */
} NDIS_SS_CONTROL_OPS, *PNDIS_SS_CONTROL_OPS; /* size: 0x0004 */

