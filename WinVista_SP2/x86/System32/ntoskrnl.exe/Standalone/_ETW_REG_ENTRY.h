typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _ETW_REG_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY RegList;
  /* 0x0008 */ struct _ETW_GUID_ENTRY* GuidEntry;
  /* 0x000c */ unsigned short Index;
  /* 0x000e */ unsigned short Flags;
  /* 0x0010 */ unsigned char EnableMask;
  union
  {
    /* 0x0014 */ struct _ETW_REPLY_QUEUE* ReplyQueue;
    /* 0x0014 */ struct _ETW_REG_ENTRY* ReplySlot[4];
  }; /* size: 0x0010 */
  union
  {
    /* 0x0024 */ struct _EPROCESS* Process;
    /* 0x0024 */ void* Callback;
  }; /* size: 0x0004 */
  /* 0x0028 */ void* CallbackContext;
} ETW_REG_ENTRY, *PETW_REG_ENTRY; /* size: 0x002c */

