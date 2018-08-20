typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Exclusive : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Shared : 30; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0004 */

