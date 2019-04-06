typedef struct _VF_TRACKER_STAMP
{
  /* 0x0000 */ void* Thread;
  /* 0x0004 */ unsigned char Flags : 8; /* bit position: 0 */
  /* 0x0005 */ unsigned char OldIrql : 8; /* bit position: 0 */
  /* 0x0006 */ unsigned char NewIrql : 8; /* bit position: 0 */
  /* 0x0007 */ unsigned char Processor : 8; /* bit position: 0 */
} VF_TRACKER_STAMP, *PVF_TRACKER_STAMP; /* size: 0x0008 */

