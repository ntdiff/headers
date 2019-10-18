typedef struct _EX_PUSH_LOCK_AUTO_EXPAND_STATE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Expanded : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Transitioning : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Pageable : 1; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
  }; /* size: 0x0004 */
} EX_PUSH_LOCK_AUTO_EXPAND_STATE, *PEX_PUSH_LOCK_AUTO_EXPAND_STATE; /* size: 0x0004 */

