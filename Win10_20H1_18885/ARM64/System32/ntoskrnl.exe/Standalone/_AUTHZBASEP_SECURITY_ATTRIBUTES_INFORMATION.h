typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION
{
  /* 0x0000 */ unsigned long SecurityAttributeCount;
  /* 0x0008 */ struct _LIST_ENTRY SecurityAttributesList;
  /* 0x0018 */ unsigned long WorkingSecurityAttributeCount;
  /* 0x0020 */ struct _LIST_ENTRY WorkingSecurityAttributesList;
} AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION, *PAUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION; /* size: 0x0030 */

