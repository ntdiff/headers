typedef struct _CLIENT_ID
{
  /* 0x0000 */ void* UniqueProcess;
  /* 0x0008 */ void* UniqueThread;
} CLIENT_ID, *PCLIENT_ID; /* size: 0x0010 */

typedef struct _PROCESS_HANDLE_TRACING_ENTRY
{
  /* 0x0000 */ void* Handle;
  /* 0x0008 */ struct _CLIENT_ID ClientId;
  /* 0x0018 */ unsigned long Type;
  /* 0x0020 */ void* Stacks[16];
} PROCESS_HANDLE_TRACING_ENTRY, *PPROCESS_HANDLE_TRACING_ENTRY; /* size: 0x00a0 */

