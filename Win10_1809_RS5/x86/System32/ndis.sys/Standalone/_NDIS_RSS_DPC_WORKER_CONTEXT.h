typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _KDPC
{
  union
  {
    /* 0x0000 */ unsigned long TargetInfoAsUlong;
    struct
    {
      /* 0x0000 */ unsigned char Type;
      /* 0x0001 */ unsigned char Importance;
      /* 0x0002 */ volatile unsigned short Number;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0004 */ struct _SINGLE_LIST_ENTRY DpcListEntry;
  /* 0x0008 */ unsigned long ProcessorHistory;
  /* 0x000c */ void* DeferredRoutine /* function */;
  /* 0x0010 */ void* DeferredContext;
  /* 0x0014 */ void* SystemArgument1;
  /* 0x0018 */ void* SystemArgument2;
  /* 0x001c */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0020 */

typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_RSS_SET_INDIRECTION_ENTRIES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long RssEntrySize;
  /* 0x000c */ unsigned long RssEntryTableOffset;
  /* 0x0010 */ unsigned long NumberOfRssEntries;
} NDIS_RSS_SET_INDIRECTION_ENTRIES, *PNDIS_RSS_SET_INDIRECTION_ENTRIES; /* size: 0x0014 */

typedef struct _PROCESSOR_NUMBER
{
  /* 0x0000 */ unsigned short Group;
  /* 0x0002 */ unsigned char Number;
  /* 0x0003 */ unsigned char Reserved;
} PROCESSOR_NUMBER, *PPROCESSOR_NUMBER; /* size: 0x0004 */

typedef struct _NDIS_RSS_SET_INDIRECTION_ENTRY
{
  /* 0x0000 */ unsigned long SwitchId;
  /* 0x0004 */ unsigned long VPortId;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned short IndirectionTableIndex;
  /* 0x000e */ struct _PROCESSOR_NUMBER TargetProcessorNumber;
  /* 0x0014 */ int EntryStatus;
} NDIS_RSS_SET_INDIRECTION_ENTRY, *PNDIS_RSS_SET_INDIRECTION_ENTRY; /* size: 0x0018 */

typedef struct _NDIS_RSS_SET_INDIRECTION_ENTRIES_COMMAND
{
  /* 0x0000 */ struct _NDIS_RSS_SET_INDIRECTION_ENTRIES Param;
  /* 0x0014 */ struct _NDIS_RSS_SET_INDIRECTION_ENTRY Entry[130];
} NDIS_RSS_SET_INDIRECTION_ENTRIES_COMMAND, *PNDIS_RSS_SET_INDIRECTION_ENTRIES_COMMAND; /* size: 0x0c44 */

typedef struct _NDIS_RSS_DPC_WORKER_CONTEXT
{
  /* 0x0000 */ struct _KDPC Dpc;
  /* 0x0020 */ int Status;
  /* 0x0024 */ struct _NDIS_RSS_SET_INDIRECTION_ENTRIES_COMMAND Command;
} NDIS_RSS_DPC_WORKER_CONTEXT, *PNDIS_RSS_DPC_WORKER_CONTEXT; /* size: 0x0c68 */

