typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _ETW_REG_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY RegList;
  /* 0x0010 */ struct _LIST_ENTRY GroupRegList;
  /* 0x0020 */ struct _ETW_GUID_ENTRY* GuidEntry;
  /* 0x0028 */ struct _ETW_GUID_ENTRY* GroupEntry;
  union
  {
    /* 0x0030 */ struct _ETW_REPLY_QUEUE* ReplyQueue;
    /* 0x0030 */ struct _ETW_QUEUE_ENTRY* ReplySlot[4];
    struct
    {
      /* 0x0030 */ void* Caller;
      /* 0x0038 */ unsigned long SessionId;
    }; /* size: 0x000c */
  }; /* size: 0x0020 */
  union
  {
    /* 0x0050 */ struct _EPROCESS* Process;
    /* 0x0050 */ void* CallbackContext;
  }; /* size: 0x0008 */
  /* 0x0058 */ void* Callback;
  /* 0x0060 */ unsigned short Index;
  union
  {
    /* 0x0062 */ unsigned char Flags;
    struct /* bitfield */
    {
      /* 0x0062 */ unsigned char DbgKernelRegistration : 1; /* bit position: 0 */
      /* 0x0062 */ unsigned char DbgUserRegistration : 1; /* bit position: 1 */
      /* 0x0062 */ unsigned char DbgReplyRegistration : 1; /* bit position: 2 */
      /* 0x0062 */ unsigned char DbgClassicRegistration : 1; /* bit position: 3 */
      /* 0x0062 */ unsigned char DbgSessionSpaceRegistration : 1; /* bit position: 4 */
      /* 0x0062 */ unsigned char DbgModernRegistration : 1; /* bit position: 5 */
      /* 0x0062 */ unsigned char DbgClosed : 1; /* bit position: 6 */
      /* 0x0062 */ unsigned char DbgInserted : 1; /* bit position: 7 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x0063 */ unsigned char EnableMask;
  /* 0x0064 */ unsigned char GroupEnableMask;
  /* 0x0065 */ unsigned char UseDescriptorType;
  /* 0x0068 */ struct _ETW_PROVIDER_TRAITS* Traits;
} ETW_REG_ENTRY, *PETW_REG_ENTRY; /* size: 0x0070 */

