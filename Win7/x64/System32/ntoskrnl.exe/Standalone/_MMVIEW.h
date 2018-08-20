typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _MMVIEW
{
  /* 0x0000 */ unsigned __int64 Entry;
  union
  {
    /* 0x0008 */ unsigned __int64 Writable : 1; /* bit position: 0 */
    /* 0x0008 */ struct _CONTROL_AREA* ControlArea;
  }; /* size: 0x0008 */
  /* 0x0010 */ struct _LIST_ENTRY ViewLinks;
  /* 0x0020 */ void* SessionViewVa;
  /* 0x0028 */ unsigned long SessionId;
  /* 0x002c */ long __PADDING__[1];
} MMVIEW, *PMMVIEW; /* size: 0x0030 */

