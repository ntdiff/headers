typedef struct _BOOT_OPTIONS
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Length;
  /* 0x0008 */ unsigned long Timeout;
  /* 0x000c */ unsigned long CurrentBootEntryId;
  /* 0x0010 */ unsigned long NextBootEntryId;
  /* 0x0014 */ wchar_t HeadlessRedirection[1];
  /* 0x0016 */ char __PADDING__[2];
} BOOT_OPTIONS, *PBOOT_OPTIONS; /* size: 0x0018 */

