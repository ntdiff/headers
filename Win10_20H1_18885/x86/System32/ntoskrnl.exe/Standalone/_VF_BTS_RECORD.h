typedef struct _VF_BTS_RECORD
{
  /* 0x0000 */ void* JumpedFrom;
  /* 0x0004 */ void* JumpedTo;
  struct /* bitfield */
  {
    /* 0x0008 */ unsigned long Unused1 : 3; /* bit position: 0 */
    /* 0x0008 */ unsigned long Predicted : 4; /* bit position: 3 */
    /* 0x0008 */ unsigned long Unused2 : 25; /* bit position: 7 */
  }; /* bitfield */
} VF_BTS_RECORD, *PVF_BTS_RECORD; /* size: 0x000c */

