typedef struct _PREFIX_TABLE
{
  /* 0x0000 */ short NodeTypeCode;
  /* 0x0002 */ short NameLength;
  /* 0x0008 */ struct _PREFIX_TABLE_ENTRY* NextPrefixTree;
} PREFIX_TABLE, *PPREFIX_TABLE; /* size: 0x0010 */

