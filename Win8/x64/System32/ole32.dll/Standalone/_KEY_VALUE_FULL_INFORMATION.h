typedef struct _KEY_VALUE_FULL_INFORMATION
{
  /* 0x0000 */ unsigned long TitleIndex;
  /* 0x0004 */ unsigned long Type;
  /* 0x0008 */ unsigned long DataOffset;
  /* 0x000c */ unsigned long DataLength;
  /* 0x0010 */ unsigned long NameLength;
  /* 0x0014 */ wchar_t Name[1];
  /* 0x0016 */ char __PADDING__[2];
} KEY_VALUE_FULL_INFORMATION, *PKEY_VALUE_FULL_INFORMATION; /* size: 0x0018 */

