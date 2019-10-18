typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _HANDLE_REVOCATION_INFO
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ struct _OB_HANDLE_REVOCATION_BLOCK* RevocationBlock;
  /* 0x0018 */ unsigned char AllowHandleRevocation;
  /* 0x0019 */ unsigned char Padding1[3];
  /* 0x001c */ unsigned char Padding2[4];
} HANDLE_REVOCATION_INFO, *PHANDLE_REVOCATION_INFO; /* size: 0x0020 */

