typedef struct _PROCESS_MITIGATION_STRICT_HANDLE_CHECK_POLICY
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long RaiseExceptionOnInvalidHandleReference : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long HandleExceptionsPermanentlyEnabled : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long ReservedFlags : 30; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_MITIGATION_STRICT_HANDLE_CHECK_POLICY, *PPROCESS_MITIGATION_STRICT_HANDLE_CHECK_POLICY; /* size: 0x0004 */

