typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _HANDLE_REVOCATION_INFO
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0008 */ struct _OB_HANDLE_REVOCATION_BLOCK* RevocationBlock;
  /* 0x000c */ unsigned char AllowHandleRevocation;
  /* 0x000d */ unsigned char Padding1[3];
} HANDLE_REVOCATION_INFO, *PHANDLE_REVOCATION_INFO; /* size: 0x0010 */

typedef struct _OB_EXTENDED_USER_INFO
{
  /* 0x0000 */ void* Context1;
  /* 0x0004 */ void* Context2;
} OB_EXTENDED_USER_INFO, *POB_EXTENDED_USER_INFO; /* size: 0x0008 */

typedef struct _OBJECT_FOOTER
{
  /* 0x0000 */ struct _HANDLE_REVOCATION_INFO HandleRevocationInfo;
  /* 0x0010 */ struct _OB_EXTENDED_USER_INFO ExtendedUserInfo;
} OBJECT_FOOTER, *POBJECT_FOOTER; /* size: 0x0018 */

