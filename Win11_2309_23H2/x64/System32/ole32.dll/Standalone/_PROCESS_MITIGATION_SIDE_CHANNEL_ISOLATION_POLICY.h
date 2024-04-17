typedef struct _PROCESS_MITIGATION_SIDE_CHANNEL_ISOLATION_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long SmtBranchTargetIsolation : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long IsolateSecurityDomain : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long DisablePageCombine : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long SpeculativeStoreBypassDisable : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long RestrictCoreSharing : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long ReservedFlags : 27; /* bit position: 5 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_SIDE_CHANNEL_ISOLATION_POLICY, *PPROCESS_MITIGATION_SIDE_CHANNEL_ISOLATION_POLICY; /* size: 0x0004 */

