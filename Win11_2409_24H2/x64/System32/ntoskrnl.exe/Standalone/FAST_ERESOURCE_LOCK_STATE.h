union FAST_ERESOURCE_LOCK_STATE
{
  union
  {
    /* 0x0000 */ __int64 Value;
    struct /* bitfield */
    {
      /* 0x0000 */ __int64 Exclusive : 1; /* bit position: 0 */
      /* 0x0000 */ __int64 Conflict : 1; /* bit position: 1 */
      /* 0x0000 */ __int64 ShareCount : 62; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0008 */
}; /* size: 0x0008 */

