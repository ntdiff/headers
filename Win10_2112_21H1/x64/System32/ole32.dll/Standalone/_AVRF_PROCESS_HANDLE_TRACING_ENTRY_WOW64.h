typedef struct _AVRF_CLIENT_ID_WOW64
{
  /* 0x0000 */ unsigned __int64 UniqueProcess;
  /* 0x0008 */ unsigned __int64 UniqueThread;
} AVRF_CLIENT_ID_WOW64, *PAVRF_CLIENT_ID_WOW64; /* size: 0x0010 */

typedef struct _AVRF_PROCESS_HANDLE_TRACING_ENTRY_WOW64
{
  /* 0x0000 */ unsigned __int64 Handle;
  /* 0x0008 */ struct _AVRF_CLIENT_ID_WOW64 ClientId;
  /* 0x0018 */ unsigned long Type;
  /* 0x0020 */ unsigned __int64 Stacks[16];
} AVRF_PROCESS_HANDLE_TRACING_ENTRY_WOW64, *PAVRF_PROCESS_HANDLE_TRACING_ENTRY_WOW64; /* size: 0x00a0 */

