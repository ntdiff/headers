typedef struct _PROCESS_MITIGATION_USER_SHADOW_STACK_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long EnableUserShadowStack : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long AuditUserShadowStack : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long SetContextIpValidation : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long AuditSetContextIpValidation : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long EnableUserShadowStackStrictMode : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long BlockNonCetBinaries : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned long BlockNonCetBinariesNonEhcont : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned long AuditBlockNonCetBinaries : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned long CetDynamicApisOutOfProcOnly : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned long SetContextIpValidationRelaxedMode : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned long ReservedFlags : 22; /* bit position: 10 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_USER_SHADOW_STACK_POLICY, *PPROCESS_MITIGATION_USER_SHADOW_STACK_POLICY; /* size: 0x0004 */

