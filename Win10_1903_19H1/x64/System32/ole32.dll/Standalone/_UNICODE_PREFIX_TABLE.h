typedef struct _UNICODE_PREFIX_TABLE
{
  /* 0x0000 */ short NodeTypeCode;
  /* 0x0002 */ short NameLength;
  /* 0x0008 */ struct _UNICODE_PREFIX_TABLE_ENTRY* NextPrefixTree;
  /* 0x0010 */ struct _UNICODE_PREFIX_TABLE_ENTRY* LastNextEntry;
} UNICODE_PREFIX_TABLE, *PUNICODE_PREFIX_TABLE; /* size: 0x0018 */

