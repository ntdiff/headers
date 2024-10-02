typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _NDIS_TRACK_MEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0010 */ unsigned long Tag;
  /* 0x0014 */ unsigned int Length;
  /* 0x0018 */ void* Caller;
  /* 0x0020 */ void* CallersCaller;
} NDIS_TRACK_MEM, *PNDIS_TRACK_MEM; /* size: 0x0028 */

