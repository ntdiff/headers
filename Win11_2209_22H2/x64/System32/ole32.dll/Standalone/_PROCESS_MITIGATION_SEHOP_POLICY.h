typedef struct _PROCESS_MITIGATION_SEHOP_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long EnableSehop : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long ReservedFlags : 31; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_SEHOP_POLICY, *PPROCESS_MITIGATION_SEHOP_POLICY; /* size: 0x0004 */

