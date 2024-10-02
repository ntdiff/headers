typedef struct _EXTENDED_CREATE_INFORMATION
{
  /* 0x0000 */ __int64 ExtendedCreateFlags;
  /* 0x0008 */ void* EaBuffer;
  /* 0x0010 */ unsigned long EaLength;
  /* 0x0018 */ struct _EXTENDED_CREATE_DUAL_OPLOCK_KEYS* DualOplockKeys;
} EXTENDED_CREATE_INFORMATION, *PEXTENDED_CREATE_INFORMATION; /* size: 0x0020 */

