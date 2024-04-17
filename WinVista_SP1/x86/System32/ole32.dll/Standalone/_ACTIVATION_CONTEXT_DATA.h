typedef struct _ACTIVATION_CONTEXT_DATA
{
  /* 0x0000 */ unsigned long Magic;
  /* 0x0004 */ unsigned long HeaderSize;
  /* 0x0008 */ unsigned long FormatVersion;
  /* 0x000c */ unsigned long TotalSize;
  /* 0x0010 */ unsigned long DefaultTocOffset;
  /* 0x0014 */ unsigned long ExtendedTocOffset;
  /* 0x0018 */ unsigned long AssemblyRosterOffset;
  /* 0x001c */ unsigned long Flags;
} ACTIVATION_CONTEXT_DATA, *PACTIVATION_CONTEXT_DATA; /* size: 0x0020 */

