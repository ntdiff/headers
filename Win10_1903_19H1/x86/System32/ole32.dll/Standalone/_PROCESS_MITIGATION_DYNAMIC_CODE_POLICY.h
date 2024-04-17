typedef struct _PROCESS_MITIGATION_DYNAMIC_CODE_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long ProhibitDynamicCode : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long AllowThreadOptOut : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long AllowRemoteDowngrade : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long AuditProhibitDynamicCode : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long ReservedFlags : 28; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_DYNAMIC_CODE_POLICY, *PPROCESS_MITIGATION_DYNAMIC_CODE_POLICY; /* size: 0x0004 */

