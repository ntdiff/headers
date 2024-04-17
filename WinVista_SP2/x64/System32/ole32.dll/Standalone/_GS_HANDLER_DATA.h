typedef struct _GS_HANDLER_DATA
{
  union
  {
    union
    {
      struct
      {
        struct /* bitfield */
        {
          /* 0x0000 */ unsigned long EHandler : 1; /* bit position: 0 */
          /* 0x0000 */ unsigned long UHandler : 1; /* bit position: 1 */
          /* 0x0000 */ unsigned long HasAlignment : 1; /* bit position: 2 */
        }; /* bitfield */
      } /* size: 0x0004 */ Bits;
      /* 0x0000 */ long CookieOffset;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u;
  /* 0x0004 */ long AlignedBaseOffset;
  /* 0x0008 */ long Alignment;
} GS_HANDLER_DATA, *PGS_HANDLER_DATA; /* size: 0x000c */

