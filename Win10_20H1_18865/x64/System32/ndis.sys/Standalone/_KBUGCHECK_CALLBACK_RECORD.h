typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _KBUGCHECK_CALLBACK_RECORD
{
  /* 0x0000 */ struct _LIST_ENTRY Entry;
  /* 0x0010 */ void* CallbackRoutine /* function */;
  /* 0x0018 */ void* Buffer;
  /* 0x0020 */ unsigned long Length;
  /* 0x0028 */ unsigned char* Component;
  /* 0x0030 */ unsigned __int64 Checksum;
  /* 0x0038 */ unsigned char State;
  /* 0x0039 */ char __PADDING__[7];
} KBUGCHECK_CALLBACK_RECORD, *PKBUGCHECK_CALLBACK_RECORD; /* size: 0x0040 */

