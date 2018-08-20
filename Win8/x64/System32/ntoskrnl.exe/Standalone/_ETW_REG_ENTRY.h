typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _ETW_REG_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY RegList;
  /* 0x0010 */ struct _ETW_GUID_ENTRY* GuidEntry;
  union
  {
    /* 0x0018 */ struct _ETW_REPLY_QUEUE* ReplyQueue;
    /* 0x0018 */ struct _ETW_QUEUE_ENTRY* ReplySlot[4];
    struct
    {
      /* 0x0018 */ void* Caller;
      /* 0x0020 */ unsigned long SessionId;
    }; /* size: 0x000c */
  }; /* size: 0x0020 */
  union
  {
    /* 0x0038 */ struct _EPROCESS* Process;
    /* 0x0038 */ void* CallbackContext;
  }; /* size: 0x0008 */
  /* 0x0040 */ void* Callback;
  /* 0x0048 */ unsigned short Index;
  union
  {
    /* 0x004a */ unsigned char Flags;
    struct /* bitfield */
    {
      /* 0x004a */ unsigned char DbgKernelRegistration : 1; /* bit position: 0 */
      /* 0x004a */ unsigned char DbgUserRegistration : 1; /* bit position: 1 */
      /* 0x004a */ unsigned char DbgReplyRegistration : 1; /* bit position: 2 */
      /* 0x004a */ unsigned char DbgClassicRegistration : 1; /* bit position: 3 */
      /* 0x004a */ unsigned char DbgSessionSpaceRegistration : 1; /* bit position: 4 */
      /* 0x004a */ unsigned char DbgModernRegistration : 1; /* bit position: 5 */
      /* 0x004a */ unsigned char DbgClosed : 1; /* bit position: 6 */
      /* 0x004a */ unsigned char DbgInserted : 1; /* bit position: 7 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x004b */ unsigned char EnableMask;
  /* 0x004c */ long __PADDING__[1];
} ETW_REG_ENTRY, *PETW_REG_ENTRY; /* size: 0x0050 */

