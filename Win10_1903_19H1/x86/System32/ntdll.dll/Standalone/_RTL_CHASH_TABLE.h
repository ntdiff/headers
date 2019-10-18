typedef struct _RTL_CHASH_TABLE
{
  /* 0x0000 */ struct _RTL_CHASH_ENTRY* Table;
  /* 0x0004 */ unsigned long EntrySizeShift;
  /* 0x0008 */ unsigned long EntryMax;
  /* 0x000c */ unsigned long EntryCount;
} RTL_CHASH_TABLE, *PRTL_CHASH_TABLE; /* size: 0x0010 */

