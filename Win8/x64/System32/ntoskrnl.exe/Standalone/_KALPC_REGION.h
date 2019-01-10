typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _KALPC_REGION
{
  /* 0x0000 */ struct _LIST_ENTRY RegionListEntry;
  /* 0x0010 */ struct _KALPC_SECTION* Section;
  /* 0x0018 */ unsigned __int64 Offset;
  /* 0x0020 */ unsigned __int64 Size;
  /* 0x0028 */ unsigned __int64 ViewSize;
  union
  {
    struct
    {
      /* 0x0030 */ unsigned long Secure : 1; /* bit position: 0 */
    } /* size: 0x0004 */ s1;
  } /* size: 0x0004 */ u1;
  /* 0x0034 */ unsigned long NumberOfViews;
  /* 0x0038 */ struct _LIST_ENTRY ViewListHead;
  /* 0x0048 */ struct _KALPC_VIEW* ReadOnlyView;
  /* 0x0050 */ struct _KALPC_VIEW* ReadWriteView;
} KALPC_REGION, *PKALPC_REGION; /* size: 0x0058 */

