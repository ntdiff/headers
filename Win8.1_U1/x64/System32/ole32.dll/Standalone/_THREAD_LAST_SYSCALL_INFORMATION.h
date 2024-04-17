typedef struct _THREAD_LAST_SYSCALL_INFORMATION
{
  /* 0x0000 */ void* FirstArgument;
  /* 0x0008 */ unsigned short SystemCallNumber;
  /* 0x000a */ unsigned short Pad[3];
  /* 0x0010 */ unsigned __int64 WaitTime;
} THREAD_LAST_SYSCALL_INFORMATION, *PTHREAD_LAST_SYSCALL_INFORMATION; /* size: 0x0018 */

