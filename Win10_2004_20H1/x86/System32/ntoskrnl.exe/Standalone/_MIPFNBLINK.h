typedef struct _MIPFNBLINK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Blink : 24; /* bit position: 0 */
      /* 0x0000 */ unsigned long TbFlushStamp : 4; /* bit position: 24 */
      /* 0x0000 */ unsigned long Unused : 1; /* bit position: 28 */
      /* 0x0000 */ unsigned long PageBlinkDeleteBit : 1; /* bit position: 29 */
      /* 0x0000 */ unsigned long PageBlinkLockBit : 1; /* bit position: 30 */
    }; /* bitfield */
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long ShareCount : 30; /* bit position: 0 */
      /* 0x0000 */ unsigned long PageShareCountDeleteBit : 1; /* bit position: 30 */
      /* 0x0000 */ unsigned long PageShareCountLockBit : 1; /* bit position: 31 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long EntireField;
    /* 0x0000 */ volatile long Lock;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long LockNotUsed : 30; /* bit position: 0 */
      /* 0x0000 */ unsigned long DeleteBit : 1; /* bit position: 30 */
      /* 0x0000 */ unsigned long LockBit : 1; /* bit position: 31 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} MIPFNBLINK, *PMIPFNBLINK; /* size: 0x0004 */

