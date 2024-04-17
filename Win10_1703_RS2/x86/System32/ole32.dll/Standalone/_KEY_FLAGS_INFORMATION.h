typedef struct _KEY_FLAGS_INFORMATION
{
  /* 0x0000 */ unsigned long Wow64Flags;
  /* 0x0004 */ unsigned long KeyFlags;
  /* 0x0008 */ unsigned long ControlFlags;
} KEY_FLAGS_INFORMATION, *PKEY_FLAGS_INFORMATION; /* size: 0x000c */

