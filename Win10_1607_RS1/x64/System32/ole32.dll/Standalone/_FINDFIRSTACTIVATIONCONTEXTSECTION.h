typedef struct _FINDFIRSTACTIVATIONCONTEXTSECTION
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ const struct _GUID* ExtensionGuid;
  /* 0x0010 */ unsigned long Id;
  /* 0x0014 */ unsigned long Depth;
  /* 0x0018 */ unsigned long OutFlags;
  /* 0x001c */ long __PADDING__[1];
} FINDFIRSTACTIVATIONCONTEXTSECTION, *PFINDFIRSTACTIVATIONCONTEXTSECTION; /* size: 0x0020 */

