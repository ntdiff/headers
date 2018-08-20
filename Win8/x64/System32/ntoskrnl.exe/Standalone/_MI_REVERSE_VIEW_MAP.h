typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

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
  /* 0x0018 */ struct _SUBSECTION* Subsection;
  /* 0x0020 */ unsigned __int64 SectionOffset;
} MI_REVERSE_VIEW_MAP, *PMI_REVERSE_VIEW_MAP; /* size: 0x0028 */

