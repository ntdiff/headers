typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _RTL_HASH_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY BucketLink;
  /* 0x0008 */ unsigned __int64 Key;
} RTL_HASH_ENTRY, *PRTL_HASH_ENTRY; /* size: 0x0010 */

typedef struct _POOL_LIMIT_INFO
{
  /* 0x0000 */ unsigned __int64 HardMemoryLimit;
  /* 0x0008 */ unsigned __int64 NotificationLimit;
  /* 0x0010 */ unsigned __int64 MemoryIssued;
} POOL_LIMIT_INFO, *PPOOL_LIMIT_INFO; /* size: 0x0018 */

typedef struct _WNF_STATE_NAME
{
  /* 0x0000 */ unsigned long Data[2];
} WNF_STATE_NAME, *PWNF_STATE_NAME; /* size: 0x0008 */

typedef struct _SLIST_ENTRY
{
  /* 0x0000 */ struct _SLIST_ENTRY* Next;
  /* 0x0008 */ long __PADDING__[2];
} SLIST_ENTRY, *PSLIST_ENTRY; /* size: 0x0010 */

typedef struct _POOL_LIMIT_TABLE_ENTRY
{
  union
  {
    /* 0x0000 */ struct _RTL_HASH_ENTRY HashEntry;
    struct
    {
      /* 0x0000 */ unsigned __int64 Reserved;
      /* 0x0008 */ struct _SINGLE_LIST_ENTRY SListEntry;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  /* 0x0010 */ struct _POOL_LIMIT_INFO LimitInfo[2];
  /* 0x0040 */ struct _WNF_STATE_NAME NotificationObject;
  /* 0x0050 */ struct _SLIST_ENTRY NotificationEntry;
  /* 0x0060 */ unsigned long Scheduled;
  /* 0x0064 */ long __PADDING__[3];
} POOL_LIMIT_TABLE_ENTRY, *PPOOL_LIMIT_TABLE_ENTRY; /* size: 0x0070 */

