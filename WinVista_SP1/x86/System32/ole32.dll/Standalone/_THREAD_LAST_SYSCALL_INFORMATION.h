typedef struct _THREAD_LAST_SYSCALL_INFORMATION
{
  /* 0x0000 */ void* FirstArgument;
  /* 0x0004 */ unsigned short SystemCallNumber;
  /* 0x0006 */ char __PADDING__[2];
} THREAD_LAST_SYSCALL_INFORMATION, *PTHREAD_LAST_SYSCALL_INFORMATION; /* size: 0x0008 */

