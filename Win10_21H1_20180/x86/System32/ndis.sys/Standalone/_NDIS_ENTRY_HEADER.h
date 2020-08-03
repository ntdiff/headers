typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _NDIS_ENTRY_HEADER
{
  /* 0x0000 */ struct _NDIS_POOL_HEADER* PoolHeader;
  /* 0x0004 */ struct _LIST_ENTRY Linkage;
  /* 0x000c */ unsigned long LookasideProcIndex;
} NDIS_ENTRY_HEADER, *PNDIS_ENTRY_HEADER; /* size: 0x0010 */

