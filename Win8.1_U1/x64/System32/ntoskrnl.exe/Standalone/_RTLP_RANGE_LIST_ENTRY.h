typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _RTLP_RANGE_LIST_ENTRY
{
  /* 0x0000 */ unsigned __int64 Start;
  /* 0x0008 */ unsigned __int64 End;
  union
  {
    struct
    {
      /* 0x0010 */ void* UserData;
      /* 0x0018 */ void* Owner;
    } /* size: 0x0010 */ Allocated;
    struct
    {
      /* 0x0010 */ struct _LIST_ENTRY ListHead;
    } /* size: 0x0010 */ Merged;
  }; /* size: 0x0010 */
  /* 0x0020 */ unsigned char Attributes;
  /* 0x0021 */ unsigned char PublicFlags;
  /* 0x0022 */ unsigned short PrivateFlags;
  /* 0x0028 */ struct _LIST_ENTRY ListEntry;
} RTLP_RANGE_LIST_ENTRY, *PRTLP_RANGE_LIST_ENTRY; /* size: 0x0038 */

