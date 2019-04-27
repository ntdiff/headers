typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0004 */

typedef struct _ALPC_HANDLE_TABLE
{
  /* 0x0000 */ struct _ALPC_HANDLE_ENTRY* Handles;
  /* 0x0004 */ unsigned long TotalHandles;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ struct _EX_PUSH_LOCK Lock;
} ALPC_HANDLE_TABLE, *PALPC_HANDLE_TABLE; /* size: 0x0010 */

typedef struct _ALPC_COMMUNICATION_INFO
{
  /* 0x0000 */ struct _ALPC_PORT* ConnectionPort;
  /* 0x0004 */ struct _ALPC_PORT* ServerCommunicationPort;
  /* 0x0008 */ struct _ALPC_PORT* ClientCommunicationPort;
  /* 0x000c */ struct _LIST_ENTRY CommunicationList;
  /* 0x0014 */ struct _ALPC_HANDLE_TABLE HandleTable;
  /* 0x0024 */ struct _KALPC_MESSAGE* CloseMessage;
} ALPC_COMMUNICATION_INFO, *PALPC_COMMUNICATION_INFO; /* size: 0x0028 */

