typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _KBUGCHECK_CALLBACK_RECORD
{
  /* 0x0000 */ struct _LIST_ENTRY Entry;
  /* 0x0008 */ void* CallbackRoutine /* function */;
  /* 0x000c */ void* Buffer;
  /* 0x0010 */ unsigned long Length;
  /* 0x0014 */ unsigned char* Component;
  /* 0x0018 */ unsigned long Checksum;
  /* 0x001c */ unsigned char State;
  /* 0x001d */ char __PADDING__[3];
} KBUGCHECK_CALLBACK_RECORD, *PKBUGCHECK_CALLBACK_RECORD; /* size: 0x0020 */

