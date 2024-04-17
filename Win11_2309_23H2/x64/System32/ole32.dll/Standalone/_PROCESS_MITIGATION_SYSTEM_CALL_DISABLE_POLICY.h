typedef struct _PROCESS_MITIGATION_SYSTEM_CALL_DISABLE_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long DisallowWin32kSystemCalls : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long AuditDisallowWin32kSystemCalls : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long DisallowFsctlSystemCalls : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long AuditDisallowFsctlSystemCalls : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long ReservedFlags : 28; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_SYSTEM_CALL_DISABLE_POLICY, *PPROCESS_MITIGATION_SYSTEM_CALL_DISABLE_POLICY; /* size: 0x0004 */

