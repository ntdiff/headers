typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _MCUPDATE_INFO
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0008 */ unsigned long Status;
  /* 0x0010 */ unsigned __int64 Id;
  /* 0x0018 */ unsigned __int64 VendorScratch[2];
} MCUPDATE_INFO, *PMCUPDATE_INFO; /* size: 0x0028 */

