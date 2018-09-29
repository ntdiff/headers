typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0008 */

typedef struct _ALPC_HANDLE_TABLE
{
  /* 0x0000 */ struct _ALPC_HANDLE_ENTRY* Handles;
  /* 0x0008 */ unsigned long TotalHandles;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ struct _EX_PUSH_LOCK Lock;
} ALPC_HANDLE_TABLE, *PALPC_HANDLE_TABLE; /* size: 0x0018 */

typedef struct _ALPC_COMMUNICATION_INFO
{
  /* 0x0000 */ struct _ALPC_PORT* ConnectionPort;
  /* 0x0008 */ struct _ALPC_PORT* ServerCommunicationPort;
  /* 0x0010 */ struct _ALPC_PORT* ClientCommunicationPort;
  /* 0x0018 */ struct _LIST_ENTRY CommunicationList;
  /* 0x0028 */ struct _ALPC_HANDLE_TABLE HandleTable;
  /* 0x0040 */ struct _KALPC_MESSAGE* CloseMessage;
} ALPC_COMMUNICATION_INFO, *PALPC_COMMUNICATION_INFO; /* size: 0x0048 */

