typedef struct _INTERLOCK_SEQ
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short Depth;
      union
      {
        struct /* bitfield */
        {
          /* 0x0002 */ unsigned short Hint : 15; /* bit position: 0 */
          /* 0x0002 */ unsigned short Lock : 1; /* bit position: 15 */
        }; /* bitfield */
        /* 0x0002 */ unsigned short Hint16;
      }; /* size: 0x0002 */
    }; /* size: 0x0004 */
    /* 0x0000 */ long Exchg;
  }; /* size: 0x0004 */
} INTERLOCK_SEQ, *PINTERLOCK_SEQ; /* size: 0x0004 */

