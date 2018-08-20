typedef struct _MMSECURE_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long ReadOnly : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long ReadWrite : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long SecNoChange : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long NoDelete : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long RequiresPteReversal : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned long ExclusiveSecure : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned long Spare : 6; /* bit position: 6 */
  }; /* bitfield */
} MMSECURE_FLAGS, *PMMSECURE_FLAGS; /* size: 0x0004 */

typedef struct _MMADDRESS_LIST
{
  union // _TAG_UNNAMED_98
  {
    union
    {
      /* 0x0000 */ struct _MMSECURE_FLAGS Flags;
      /* 0x0000 */ unsigned long FlagsLong;
      /* 0x0000 */ void* StartVa;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  /* 0x0004 */ void* EndVa;
} MMADDRESS_LIST, *PMMADDRESS_LIST; /* size: 0x0008 */

