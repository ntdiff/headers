typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _KALPC_REGION
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long Secure : 1; /* bit position: 0 */
    } /* size: 0x0004 */ s1;
  } /* size: 0x0004 */ u1;
  /* 0x0004 */ struct _LIST_ENTRY RegionListEntry;
  /* 0x000c */ struct _KALPC_SECTION* Section;
  /* 0x0010 */ unsigned long Offset;
  /* 0x0014 */ unsigned long Size;
  /* 0x0018 */ unsigned long ViewSize;
  /* 0x001c */ struct _KALPC_VIEW* ReadOnlyView;
  /* 0x0020 */ struct _KALPC_VIEW* ReadWriteView;
  /* 0x0024 */ unsigned long NumberOfViews;
  /* 0x0028 */ struct _LIST_ENTRY ViewListHead;
} KALPC_REGION, *PKALPC_REGION; /* size: 0x0030 */

