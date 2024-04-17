typedef struct _PROCESS_CHILD_PROCESS_INFORMATION
{
  /* 0x0000 */ unsigned char ProhibitChildProcesses;
  /* 0x0001 */ unsigned char AlwaysAllowSecureChildProcess;
  /* 0x0002 */ unsigned char AuditProhibitChildProcesses;
} PROCESS_CHILD_PROCESS_INFORMATION, *PPROCESS_CHILD_PROCESS_INFORMATION; /* size: 0x0003 */

