typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _KALPC_REGION
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long Secure : 1; /* bit position: 0 */
    } /* size: 0x0004 */ s1;
  } /* size: 0x0004 */ u1;
  /* 0x0008 */ struct _LIST_ENTRY RegionListEntry;
  /* 0x0018 */ struct _KALPC_SECTION* Section;
  /* 0x0020 */ unsigned __int64 Offset;
  /* 0x0028 */ unsigned __int64 Size;
  /* 0x0030 */ unsigned __int64 ViewSize;
  /* 0x0038 */ struct _KALPC_VIEW* ReadOnlyView;
  /* 0x0040 */ struct _KALPC_VIEW* ReadWriteView;
  /* 0x0048 */ unsigned long NumberOfViews;
  /* 0x0050 */ struct _LIST_ENTRY ViewListHead;
} KALPC_REGION, *PKALPC_REGION; /* size: 0x0060 */

