typedef struct _MMSECTION_FLAGS2
{
  /* 0x0000 */ unsigned short PartitionId : 10; /* bit position: 0 */
  struct /* bitfield */
  {
    /* 0x0002 */ unsigned char NoCrossPartitionAccess : 1; /* bit position: 0 */
    /* 0x0002 */ unsigned char SubsectionCrossPartitionReferenceOverflow : 1; /* bit position: 1 */
  }; /* bitfield */
  /* 0x0003 */ char __PADDING__[1];
} MMSECTION_FLAGS2, *PMMSECTION_FLAGS2; /* size: 0x0004 */

