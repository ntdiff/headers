typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _RTL_HASH_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY BucketLink;
  /* 0x0004 */ unsigned long Key;
} RTL_HASH_ENTRY, *PRTL_HASH_ENTRY; /* size: 0x0008 */

typedef struct _POOL_LIMIT_INFO
{
  /* 0x0000 */ unsigned long HardMemoryLimit;
  /* 0x0004 */ unsigned long NotificationLimit;
  /* 0x0008 */ unsigned long MemoryIssued;
} POOL_LIMIT_INFO, *PPOOL_LIMIT_INFO; /* size: 0x000c */

typedef struct _WNF_STATE_NAME
{
  /* 0x0000 */ unsigned long Data[2];
} WNF_STATE_NAME, *PWNF_STATE_NAME; /* size: 0x0008 */

typedef struct _POOL_LIMIT_TABLE_ENTRY
{
  union
  {
    /* 0x0000 */ struct _RTL_HASH_ENTRY HashEntry;
    struct
    {
      /* 0x0000 */ unsigned long Reserved;
      /* 0x0004 */ struct _SINGLE_LIST_ENTRY SListEntry;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  /* 0x0008 */ struct _POOL_LIMIT_INFO LimitInfo[2];
  /* 0x0020 */ struct _WNF_STATE_NAME NotificationObject;
  /* 0x0028 */ struct _SINGLE_LIST_ENTRY NotificationEntry;
  /* 0x002c */ unsigned long Scheduled;
} POOL_LIMIT_TABLE_ENTRY, *PPOOL_LIMIT_TABLE_ENTRY; /* size: 0x0030 */

