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
      /* 0x0000 */ unsigned long Reserved : 28; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_LOGGING_INFORMATION, *PPROCESS_LOGGING_INFORMATION; /* size: 0x0004 */

