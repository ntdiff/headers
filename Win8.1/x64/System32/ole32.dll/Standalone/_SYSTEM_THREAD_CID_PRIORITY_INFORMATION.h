typedef struct _CLIENT_ID
{
  /* 0x0000 */ void* UniqueProcess;
  /* 0x0008 */ void* UniqueThread;
} CLIENT_ID, *PCLIENT_ID; /* size: 0x0010 */

typedef struct _SYSTEM_THREAD_CID_PRIORITY_INFORMATION
{
  /* 0x0000 */ struct _CLIENT_ID ClientId;
  /* 0x0010 */ long Priority;
  /* 0x0014 */ long __PADDING__[1];
} SYSTEM_THREAD_CID_PRIORITY_INFORMATION, *PSYSTEM_THREAD_CID_PRIORITY_INFORMATION; /* size: 0x0018 */

