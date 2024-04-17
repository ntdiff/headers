typedef struct _ACTIVATION_CONTEXT_ASSEMBLY_DATA
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ const wchar_t* AssemblyName;
  /* 0x0010 */ unsigned long AssemblyNameLength;
  /* 0x0014 */ unsigned long HashAlgorithm;
  /* 0x0018 */ unsigned long PseudoKey;
  /* 0x001c */ long __PADDING__[1];
} ACTIVATION_CONTEXT_ASSEMBLY_DATA, *PACTIVATION_CONTEXT_ASSEMBLY_DATA; /* size: 0x0020 */

