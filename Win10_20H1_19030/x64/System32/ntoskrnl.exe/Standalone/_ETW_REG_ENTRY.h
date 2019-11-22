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
    /* 0x0062 */ unsigned short Flags;
    struct /* bitfield */
    {
      /* 0x0062 */ unsigned short DbgKernelRegistration : 1; /* bit position: 0 */
      /* 0x0062 */ unsigned short DbgUserRegistration : 1; /* bit position: 1 */
      /* 0x0062 */ unsigned short DbgReplyRegistration : 1; /* bit position: 2 */
      /* 0x0062 */ unsigned short DbgClassicRegistration : 1; /* bit position: 3 */
      /* 0x0062 */ unsigned short DbgSessionSpaceRegistration : 1; /* bit position: 4 */
      /* 0x0062 */ unsigned short DbgModernRegistration : 1; /* bit position: 5 */
      /* 0x0062 */ unsigned short DbgClosed : 1; /* bit position: 6 */
      /* 0x0062 */ unsigned short DbgInserted : 1; /* bit position: 7 */
      /* 0x0062 */ unsigned short DbgWow64 : 1; /* bit position: 8 */
      /* 0x0062 */ unsigned short DbgUseDescriptorType : 1; /* bit position: 9 */
      /* 0x0062 */ unsigned short DbgDropProviderTraits : 1; /* bit position: 10 */
    }; /* bitfield */
  }; /* size: 0x0002 */
  /* 0x0064 */ unsigned char EnableMask;
  /* 0x0065 */ unsigned char GroupEnableMask;
  /* 0x0066 */ unsigned char HostEnableMask;
  /* 0x0067 */ unsigned char HostGroupEnableMask;
  /* 0x0068 */ struct _ETW_PROVIDER_TRAITS* Traits;
} ETW_REG_ENTRY, *PETW_REG_ENTRY; /* size: 0x0070 */

