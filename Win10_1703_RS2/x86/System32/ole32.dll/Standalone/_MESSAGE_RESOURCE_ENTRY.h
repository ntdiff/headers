typedef struct _MESSAGE_RESOURCE_ENTRY
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short Flags;
  /* 0x0004 */ unsigned char Text[1];
  /* 0x0005 */ char __PADDING__[1];
} MESSAGE_RESOURCE_ENTRY, *PMESSAGE_RESOURCE_ENTRY; /* size: 0x0006 */

