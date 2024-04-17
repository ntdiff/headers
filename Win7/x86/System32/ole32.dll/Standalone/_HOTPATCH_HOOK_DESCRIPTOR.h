typedef struct _HOTPATCH_HOOK_DESCRIPTOR
{
  /* 0x0000 */ unsigned __int64 TargetAddress;
  /* 0x0008 */ unsigned __int64 MappedAddress;
  /* 0x0010 */ unsigned long CodeOffset;
  /* 0x0014 */ unsigned long CodeSize;
  /* 0x0018 */ unsigned long OrigCodeOffset;
  /* 0x001c */ unsigned long ValidationOffset;
  /* 0x0020 */ unsigned long ValidationSize;
  /* 0x0024 */ long __PADDING__[1];
} HOTPATCH_HOOK_DESCRIPTOR, *PHOTPATCH_HOOK_DESCRIPTOR; /* size: 0x0028 */

