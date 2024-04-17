typedef struct _PROCESS_MITIGATION_CONTROL_FLOW_GUARD_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long EnableControlFlowGuard : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long EnableExportSuppression : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long StrictMode : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long ReservedFlags : 29; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_CONTROL_FLOW_GUARD_POLICY, *PPROCESS_MITIGATION_CONTROL_FLOW_GUARD_POLICY; /* size: 0x0004 */

