typedef struct _PROCESS_MITIGATION_SYSTEM_CALL_FILTER_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long FilterId : 4; /* bit position: 0 */
      /* 0x0000 */ unsigned long ReservedFlags : 28; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_SYSTEM_CALL_FILTER_POLICY, *PPROCESS_MITIGATION_SYSTEM_CALL_FILTER_POLICY; /* size: 0x0004 */

