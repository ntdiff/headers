typedef struct _MMSECURE_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long ReadOnly : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long NoWrite : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long Spare : 10; /* bit position: 2 */
  }; /* bitfield */
} MMSECURE_FLAGS, *PMMSECURE_FLAGS; /* size: 0x0004 */

typedef struct _MMADDRESS_LIST
{
  union // _TAG_UNNAMED_17
  {
    union
    {
      /* 0x0000 */ struct _MMSECURE_FLAGS Flags;
      /* 0x0000 */ void* StartVa;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
  /* 0x0008 */ void* EndVa;
} MMADDRESS_LIST, *PMMADDRESS_LIST; /* size: 0x0010 */

