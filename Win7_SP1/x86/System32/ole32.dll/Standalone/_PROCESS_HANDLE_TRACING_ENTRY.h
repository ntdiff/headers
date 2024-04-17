typedef struct _CLIENT_ID
{
  /* 0x0000 */ void* UniqueProcess;
  /* 0x0004 */ void* UniqueThread;
} CLIENT_ID, *PCLIENT_ID; /* size: 0x0008 */

typedef struct _PROCESS_HANDLE_TRACING_ENTRY
{
  /* 0x0000 */ void* Handle;
  /* 0x0004 */ struct _CLIENT_ID ClientId;
  /* 0x000c */ unsigned long Type;
  /* 0x0010 */ void* Stacks[16];
} PROCESS_HANDLE_TRACING_ENTRY, *PPROCESS_HANDLE_TRACING_ENTRY; /* size: 0x0050 */

