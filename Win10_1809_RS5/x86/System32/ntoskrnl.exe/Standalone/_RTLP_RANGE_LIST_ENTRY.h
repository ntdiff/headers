typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _RTLP_RANGE_LIST_ENTRY
{
  /* 0x0000 */ unsigned __int64 Start;
  /* 0x0008 */ unsigned __int64 End;
  union
  {
    struct
    {
      /* 0x0010 */ void* UserData;
      /* 0x0014 */ void* Owner;
    } /* size: 0x0008 */ Allocated;
    struct
    {
      /* 0x0010 */ struct _LIST_ENTRY ListHead;
    } /* size: 0x0008 */ Merged;
  }; /* size: 0x0008 */
  /* 0x0018 */ unsigned char Attributes;
  /* 0x0019 */ unsigned char PublicFlags;
  /* 0x001a */ unsigned short PrivateFlags;
  /* 0x001c */ struct _LIST_ENTRY ListEntry;
  /* 0x0024 */ long __PADDING__[1];
} RTLP_RANGE_LIST_ENTRY, *PRTLP_RANGE_LIST_ENTRY; /* size: 0x0028 */

