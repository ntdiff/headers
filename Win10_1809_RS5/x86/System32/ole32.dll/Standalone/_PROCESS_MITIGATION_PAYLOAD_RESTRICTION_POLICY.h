typedef struct _PROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long EnableExportAddressFilter : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long AuditExportAddressFilter : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long EnableExportAddressFilterPlus : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long AuditExportAddressFilterPlus : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long EnableImportAddressFilter : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long AuditImportAddressFilter : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned long EnableRopStackPivot : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned long AuditRopStackPivot : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned long EnableRopCallerCheck : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned long AuditRopCallerCheck : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned long EnableRopSimExec : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned long AuditRopSimExec : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned long ReservedFlags : 20; /* bit position: 12 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY, *PPROCESS_MITIGATION_PAYLOAD_RESTRICTION_POLICY; /* size: 0x0004 */

