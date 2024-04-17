typedef struct _THREAD_TEB_INFORMATION
{
  /* 0x0000 */ void* TebInformation;
  /* 0x0008 */ unsigned long TebOffset;
  /* 0x000c */ unsigned long BytesToRead;
} THREAD_TEB_INFORMATION, *PTHREAD_TEB_INFORMATION; /* size: 0x0010 */

