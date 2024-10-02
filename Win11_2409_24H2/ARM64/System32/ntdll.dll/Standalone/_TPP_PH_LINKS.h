typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _TPP_PH_LINKS
{
  /* 0x0000 */ struct _LIST_ENTRY Siblings;
  /* 0x0010 */ struct _LIST_ENTRY Children;
  /* 0x0020 */ __int64 Key;
} TPP_PH_LINKS, *PTPP_PH_LINKS; /* size: 0x0028 */

