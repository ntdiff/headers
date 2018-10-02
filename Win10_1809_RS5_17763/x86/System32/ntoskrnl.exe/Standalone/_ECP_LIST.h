typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _ECP_LIST
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ struct _LIST_ENTRY EcpList;
} ECP_LIST, *PECP_LIST; /* size: 0x0010 */

