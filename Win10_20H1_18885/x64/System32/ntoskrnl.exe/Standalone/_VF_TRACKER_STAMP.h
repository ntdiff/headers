typedef struct _VF_TRACKER_STAMP
{
  /* 0x0000 */ void* Thread;
  /* 0x0008 */ unsigned char Flags : 8; /* bit position: 0 */
  /* 0x0009 */ unsigned char OldIrql : 8; /* bit position: 0 */
  /* 0x000a */ unsigned char NewIrql : 8; /* bit position: 0 */
  /* 0x000b */ unsigned char Processor : 8; /* bit position: 0 */
  /* 0x000c */ long __PADDING__[1];
} VF_TRACKER_STAMP, *PVF_TRACKER_STAMP; /* size: 0x0010 */

