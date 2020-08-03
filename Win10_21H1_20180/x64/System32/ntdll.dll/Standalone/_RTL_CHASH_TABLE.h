typedef struct _RTL_CHASH_TABLE
{
  /* 0x0000 */ struct _RTL_CHASH_ENTRY* Table;
  /* 0x0008 */ unsigned long EntrySizeShift;
  /* 0x000c */ unsigned long EntryMax;
  /* 0x0010 */ unsigned long EntryCount;
  /* 0x0014 */ long __PADDING__[1];
} RTL_CHASH_TABLE, *PRTL_CHASH_TABLE; /* size: 0x0018 */

