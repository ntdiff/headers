typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _ETW_REG_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY RegList;
  /* 0x0010 */ struct _ETW_GUID_ENTRY* GuidEntry;
  /* 0x0018 */ unsigned short Index;
  /* 0x001a */ unsigned short Flags;
  /* 0x001c */ unsigned char EnableMask;
  union
  {
    /* 0x0020 */ struct _ETW_REPLY_QUEUE* ReplyQueue;
    /* 0x0020 */ struct _ETW_REG_ENTRY* ReplySlot[4];
  }; /* size: 0x0020 */
  union
  {
    /* 0x0040 */ struct _EPROCESS* Process;
    /* 0x0040 */ void* Callback;
  }; /* size: 0x0008 */
  /* 0x0048 */ void* CallbackContext;
} ETW_REG_ENTRY, *PETW_REG_ENTRY; /* size: 0x0050 */

