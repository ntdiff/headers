typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _ETW_REG_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY RegList;
  /* 0x0008 */ struct _ETW_GUID_ENTRY* GuidEntry;
  union
  {
    /* 0x000c */ struct _ETW_REPLY_QUEUE* ReplyQueue;
    /* 0x000c */ struct _ETW_QUEUE_ENTRY* ReplySlot[4];
    struct
    {
      /* 0x000c */ void* Caller;
      /* 0x0010 */ unsigned long SessionId;
    }; /* size: 0x0008 */
  }; /* size: 0x0010 */
  union
  {
    /* 0x001c */ struct _EPROCESS* Process;
    /* 0x001c */ void* CallbackContext;
  }; /* size: 0x0004 */
  /* 0x0020 */ void* Callback;
  /* 0x0024 */ unsigned short Index;
  union
  {
    /* 0x0026 */ unsigned char Flags;
    struct /* bitfield */
    {
      /* 0x0026 */ unsigned char DbgKernelRegistration : 1; /* bit position: 0 */
      /* 0x0026 */ unsigned char DbgUserRegistration : 1; /* bit position: 1 */
      /* 0x0026 */ unsigned char DbgReplyRegistration : 1; /* bit position: 2 */
      /* 0x0026 */ unsigned char DbgClassicRegistration : 1; /* bit position: 3 */
      /* 0x0026 */ unsigned char DbgSessionSpaceRegistration : 1; /* bit position: 4 */
      /* 0x0026 */ unsigned char DbgModernRegistration : 1; /* bit position: 5 */
      /* 0x0026 */ unsigned char DbgClosed : 1; /* bit position: 6 */
      /* 0x0026 */ unsigned char DbgInserted : 1; /* bit position: 7 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x0027 */ unsigned char EnableMask;
} ETW_REG_ENTRY, *PETW_REG_ENTRY; /* size: 0x0028 */

