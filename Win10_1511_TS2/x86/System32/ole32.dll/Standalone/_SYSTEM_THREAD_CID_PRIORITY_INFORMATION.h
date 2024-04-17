typedef struct _CLIENT_ID
{
  /* 0x0000 */ void* UniqueProcess;
  /* 0x0004 */ void* UniqueThread;
} CLIENT_ID, *PCLIENT_ID; /* size: 0x0008 */

typedef struct _SYSTEM_THREAD_CID_PRIORITY_INFORMATION
{
  /* 0x0000 */ struct _CLIENT_ID ClientId;
  /* 0x0008 */ long Priority;
} SYSTEM_THREAD_CID_PRIORITY_INFORMATION, *PSYSTEM_THREAD_CID_PRIORITY_INFORMATION; /* size: 0x000c */

