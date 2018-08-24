typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _MMVIEW
{
  /* 0x0000 */ unsigned long Entry;
  union
  {
    /* 0x0004 */ unsigned long Writable : 1; /* bit position: 0 */
    /* 0x0004 */ struct _CONTROL_AREA* ControlArea;
  }; /* size: 0x0004 */
  /* 0x0008 */ struct _LIST_ENTRY ViewLinks;
  /* 0x0010 */ void* SessionViewVa;
  /* 0x0014 */ unsigned long SessionId;
} MMVIEW, *PMMVIEW; /* size: 0x0018 */

