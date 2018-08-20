typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _PPM_VETO_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY Link;
  /* 0x0010 */ unsigned long VetoReason;
  /* 0x0014 */ unsigned long ReferenceCount;
} PPM_VETO_ENTRY, *PPPM_VETO_ENTRY; /* size: 0x0018 */

