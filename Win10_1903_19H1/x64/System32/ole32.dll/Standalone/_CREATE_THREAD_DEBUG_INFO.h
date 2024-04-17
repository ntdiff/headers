typedef struct _CREATE_THREAD_DEBUG_INFO
{
  /* 0x0000 */ void* hThread;
  /* 0x0008 */ void* lpThreadLocalBase;
  /* 0x0010 */ void* lpStartAddress /* function */;
} CREATE_THREAD_DEBUG_INFO, *PCREATE_THREAD_DEBUG_INFO; /* size: 0x0018 */

