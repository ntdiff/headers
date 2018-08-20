typedef struct _EPROCESS_QUOTA_ENTRY
{
  /* 0x0000 */ unsigned long Usage;
  /* 0x0004 */ unsigned long Limit;
  /* 0x0008 */ unsigned long Peak;
  /* 0x000c */ unsigned long Return;
} EPROCESS_QUOTA_ENTRY, *PEPROCESS_QUOTA_ENTRY; /* size: 0x0010 */

