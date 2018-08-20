typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _OBJECT_HEADER_HANDLE_REVOCATION_INFO
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0008 */ struct _OB_HANDLE_REVOCATION_BLOCK* RevocationBlock;
  /* 0x000c */ unsigned char Padding1[4];
} OBJECT_HEADER_HANDLE_REVOCATION_INFO, *POBJECT_HEADER_HANDLE_REVOCATION_INFO; /* size: 0x0010 */

