typedef struct _FS_BPIO_INFO
{
  /* 0x0000 */ unsigned long ActiveBypassIoCount;
  /* 0x0004 */ unsigned short StorageDriverNameLen;
  /* 0x0006 */ wchar_t StorageDriverName[32];
  /* 0x0046 */ char __PADDING__[2];
} FS_BPIO_INFO, *PFS_BPIO_INFO; /* size: 0x0048 */

