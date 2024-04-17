typedef struct _GENERATE_NAME_CONTEXT
{
  /* 0x0000 */ unsigned short Checksum;
  /* 0x0002 */ unsigned char ChecksumInserted;
  /* 0x0003 */ unsigned char NameLength;
  /* 0x0004 */ wchar_t NameBuffer[8];
  /* 0x0014 */ unsigned long ExtensionLength;
  /* 0x0018 */ wchar_t ExtensionBuffer[4];
  /* 0x0020 */ unsigned long LastIndexValue;
} GENERATE_NAME_CONTEXT, *PGENERATE_NAME_CONTEXT; /* size: 0x0024 */

