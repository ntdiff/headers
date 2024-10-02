typedef struct _EXTENDED_CREATE_INFORMATION_32
{
  /* 0x0000 */ __int64 ExtendedCreateFlags;
  /* 0x0008 */ void* EaBuffer;
  /* 0x000c */ unsigned long EaLength;
  /* 0x0010 */ struct _EXTENDED_CREATE_DUAL_OPLOCK_KEYS* DualOplockKeys;
} EXTENDED_CREATE_INFORMATION_32, *PEXTENDED_CREATE_INFORMATION_32; /* size: 0x0018 */

