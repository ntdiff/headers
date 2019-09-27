typedef struct _CLIENT_ID
{
  /* 0x0000 */ void* UniqueProcess;
  /* 0x0004 */ void* UniqueThread;
} CLIENT_ID, *PCLIENT_ID; /* size: 0x0008 */

typedef struct _HANDLE_TRACE_DB_ENTRY
{
  /* 0x0000 */ struct _CLIENT_ID ClientId;
  /* 0x0008 */ void* Handle;
  /* 0x000c */ unsigned long Type;
  /* 0x0010 */ void* StackTrace[16];
} HANDLE_TRACE_DB_ENTRY, *PHANDLE_TRACE_DB_ENTRY; /* size: 0x0050 */

