typedef struct _RTL_HASH_TABLE
{
  /* 0x0000 */ unsigned long EntryCount;
  struct /* bitfield */
  {
    /* 0x0004 */ unsigned long MaskBitCount : 5; /* bit position: 0 */
    /* 0x0004 */ unsigned long BucketCount : 27; /* bit position: 5 */
  }; /* bitfield */
  /* 0x0008 */ struct _SINGLE_LIST_ENTRY* Buckets;
} RTL_HASH_TABLE, *PRTL_HASH_TABLE; /* size: 0x0010 */

typedef struct _ETW_FILTER_EVENT_NAME_DATA
{
  /* 0x0000 */ unsigned char FilterIn;
  /* 0x0001 */ unsigned char Level;
  /* 0x0008 */ unsigned __int64 MatchAnyKeyword;
  /* 0x0010 */ unsigned __int64 MatchAllKeyword;
  /* 0x0018 */ struct _RTL_HASH_TABLE NameTable;
} ETW_FILTER_EVENT_NAME_DATA, *PETW_FILTER_EVENT_NAME_DATA; /* size: 0x0028 */

