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

