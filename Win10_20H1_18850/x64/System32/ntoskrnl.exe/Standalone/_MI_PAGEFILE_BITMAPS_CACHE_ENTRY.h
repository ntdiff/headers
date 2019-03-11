typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0008 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  union
  {
    /* 0x0010 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0010 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0010 */ unsigned __int64 ParentValue;
  }; /* size: 0x0008 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x0018 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _MI_PAGEFILE_BITMAPS_CACHE_ENTRY
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE LengthTreeNode;
    /* 0x0000 */ struct _LIST_ENTRY FreeListEntry;
  }; /* size: 0x0018 */
  /* 0x0018 */ struct _RTL_BALANCED_NODE LocationTreeNode;
  /* 0x0030 */ unsigned long StartingIndex;
  /* 0x0034 */ unsigned long Length;
} MI_PAGEFILE_BITMAPS_CACHE_ENTRY, *PMI_PAGEFILE_BITMAPS_CACHE_ENTRY; /* size: 0x0038 */

