typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _KDPC
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Importance;
  /* 0x0002 */ unsigned short Number;
  /* 0x0004 */ struct _LIST_ENTRY DpcListEntry;
  /* 0x000c */ void* DeferredRoutine /* function */;
  /* 0x0010 */ void* DeferredContext;
  /* 0x0014 */ void* SystemArgument1;
  /* 0x0018 */ void* SystemArgument2;
  /* 0x001c */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0020 */

struct KSDPC_ITEM
{
  /* 0x0000 */ struct _KDPC Dpc;
  /* 0x0020 */ unsigned long ReferenceCount;
  /* 0x0024 */ unsigned long AccessLock;
}; /* size: 0x0028 */

struct KSBUFFER_ITEM
{
  /* 0x0000 */ struct KSDPC_ITEM DpcItem;
  /* 0x0028 */ struct _LIST_ENTRY BufferList;
}; /* size: 0x0030 */

