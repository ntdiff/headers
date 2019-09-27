typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _MI_SYSTEM_CACHE_VIEW_ATTRIBUTES
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 NumberOfPtes : 6; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 PartitionId : 10; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 SectionOffset : 48; /* bit position: 16 */
  }; /* bitfield */
} MI_SYSTEM_CACHE_VIEW_ATTRIBUTES, *PMI_SYSTEM_CACHE_VIEW_ATTRIBUTES; /* size: 0x0008 */

typedef struct _MI_REVERSE_VIEW_MAP
{
  /* 0x0000 */ struct _LIST_ENTRY ViewLinks;
  union
  {
    /* 0x0010 */ void* SystemCacheVa;
    /* 0x0010 */ void* SessionViewVa;
    /* 0x0010 */ struct _EPROCESS* VadsProcess;
    /* 0x0010 */ unsigned __int64 Type : 2; /* bit position: 0 */
  }; /* size: 0x0008 */
  union
  {
    /* 0x0018 */ struct _SUBSECTION* Subsection;
    /* 0x0018 */ unsigned __int64 SubsectionType : 1; /* bit position: 0 */
  }; /* size: 0x0008 */
  union
  {
    /* 0x0020 */ struct _MI_SYSTEM_CACHE_VIEW_ATTRIBUTES SystemCacheAttributes;
    /* 0x0020 */ unsigned __int64 SectionOffset;
  }; /* size: 0x0008 */
} MI_REVERSE_VIEW_MAP, *PMI_REVERSE_VIEW_MAP; /* size: 0x0028 */

