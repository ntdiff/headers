typedef struct _EPROCESS_QUOTA_ENTRY
{
  /* 0x0000 */ unsigned long Usage;
  /* 0x0004 */ unsigned long Limit;
  /* 0x0008 */ unsigned long Peak;
  /* 0x000c */ unsigned long Return;
} EPROCESS_QUOTA_ENTRY, *PEPROCESS_QUOTA_ENTRY; /* size: 0x0010 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _EPROCESS_QUOTA_BLOCK
{
  /* 0x0000 */ struct _EPROCESS_QUOTA_ENTRY QuotaEntry[3];
  /* 0x0030 */ struct _LIST_ENTRY QuotaList;
  /* 0x0038 */ unsigned long ReferenceCount;
  /* 0x003c */ unsigned long ProcessCount;
} EPROCESS_QUOTA_BLOCK, *PEPROCESS_QUOTA_BLOCK; /* size: 0x0040 */

