typedef struct _THREAD_TLS_INFORMATION
{
  /* 0x0000 */ unsigned long Flags;
  union
  {
    /* 0x0004 */ void* NewTlsData;
    /* 0x0004 */ void* OldTlsData;
  }; /* size: 0x0004 */
  /* 0x0008 */ void* ThreadId;
} THREAD_TLS_INFORMATION, *PTHREAD_TLS_INFORMATION; /* size: 0x000c */

