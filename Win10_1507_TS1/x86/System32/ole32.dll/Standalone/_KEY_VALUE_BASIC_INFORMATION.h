typedef struct _KEY_VALUE_BASIC_INFORMATION
{
  /* 0x0000 */ unsigned long TitleIndex;
  /* 0x0004 */ unsigned long Type;
  /* 0x0008 */ unsigned long NameLength;
  /* 0x000c */ wchar_t Name[1];
  /* 0x000e */ char __PADDING__[2];
} KEY_VALUE_BASIC_INFORMATION, *PKEY_VALUE_BASIC_INFORMATION; /* size: 0x0010 */

