typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _DELAY_ACK_FO
{
  /* 0x0000 */ struct _LIST_ENTRY Links;
  /* 0x0010 */ struct _FILE_OBJECT* OriginalFileObject;
} DELAY_ACK_FO, *PDELAY_ACK_FO; /* size: 0x0018 */

