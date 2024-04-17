typedef union _PROCESS_LOGGING_INFORMATION
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long EnableReadVmLogging : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long EnableWriteVmLogging : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long EnableProcessSuspendResumeLogging : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long EnableThreadSuspendResumeLogging : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long EnableLocalExecProtectVmLogging : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long EnableRemoteExecProtectVmLogging : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned long Reserved : 26; /* bit position: 6 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_LOGGING_INFORMATION, *PPROCESS_LOGGING_INFORMATION; /* size: 0x0004 */

