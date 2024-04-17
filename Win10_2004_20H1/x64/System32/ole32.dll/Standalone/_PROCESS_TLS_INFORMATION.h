typedef struct _THREAD_TLS_INFORMATION
{
  /* 0x0000 */ unsigned long Flags;
  union
  {
    /* 0x0008 */ void* NewTlsData;
    /* 0x0008 */ void* OldTlsData;
  }; /* size: 0x0008 */
  /* 0x0010 */ void* ThreadId;
} THREAD_TLS_INFORMATION, *PTHREAD_TLS_INFORMATION; /* size: 0x0018 */

typedef struct _PROCESS_TLS_INFORMATION
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long OperationType;
  /* 0x0008 */ unsigned long ThreadDataCount;
  union
  {
    /* 0x000c */ unsigned long TlsIndex;
    /* 0x000c */ unsigned long PreviousCount;
  }; /* size: 0x0004 */
  /* 0x0010 */ struct _THREAD_TLS_INFORMATION ThreadData[1];
} PROCESS_TLS_INFORMATION, *PPROCESS_TLS_INFORMATION; /* size: 0x0028 */

