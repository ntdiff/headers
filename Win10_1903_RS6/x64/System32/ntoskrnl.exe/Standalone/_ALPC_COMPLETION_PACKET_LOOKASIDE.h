typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY ListEntry;
  /* 0x0008 */ struct _IO_MINI_COMPLETION_PACKET_USER* Packet;
  /* 0x0010 */ struct _ALPC_COMPLETION_PACKET_LOOKASIDE* Lookaside;
} ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY, *PALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY; /* size: 0x0018 */

typedef struct _ALPC_COMPLETION_PACKET_LOOKASIDE
{
  /* 0x0000 */ unsigned __int64 Lock;
  /* 0x0008 */ unsigned long Size;
  /* 0x000c */ unsigned long ActiveCount;
  /* 0x0010 */ unsigned long PendingNullCount;
  /* 0x0014 */ unsigned long PendingCheckCompletionListCount;
  /* 0x0018 */ unsigned long PendingDelete;
  /* 0x0020 */ struct _SINGLE_LIST_ENTRY FreeListHead;
  /* 0x0028 */ void* CompletionPort;
  /* 0x0030 */ void* CompletionKey;
  /* 0x0038 */ struct _ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY Entry[1];
} ALPC_COMPLETION_PACKET_LOOKASIDE, *PALPC_COMPLETION_PACKET_LOOKASIDE; /* size: 0x0050 */

