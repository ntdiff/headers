typedef struct _KEY_VALUE_ENTRY
{
  /* 0x0000 */ struct _UNICODE_STRING* ValueName;
  /* 0x0008 */ unsigned long DataLength;
  /* 0x000c */ unsigned long DataOffset;
  /* 0x0010 */ unsigned long Type;
  /* 0x0014 */ long __PADDING__[1];
} KEY_VALUE_ENTRY, *PKEY_VALUE_ENTRY; /* size: 0x0018 */

