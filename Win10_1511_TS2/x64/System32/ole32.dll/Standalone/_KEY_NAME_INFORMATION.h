typedef struct _KEY_NAME_INFORMATION
{
  /* 0x0000 */ unsigned long NameLength;
  /* 0x0004 */ wchar_t Name[1];
  /* 0x0006 */ char __PADDING__[2];
} KEY_NAME_INFORMATION, *PKEY_NAME_INFORMATION; /* size: 0x0008 */

