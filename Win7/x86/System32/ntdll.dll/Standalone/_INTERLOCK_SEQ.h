typedef struct _INTERLOCK_SEQ
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short Depth;
      /* 0x0002 */ unsigned short FreeEntryOffset;
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ volatile unsigned long OffsetAndDepth;
      /* 0x0004 */ volatile unsigned long Sequence;
    }; /* size: 0x0008 */
    /* 0x0000 */ volatile __int64 Exchg;
  }; /* size: 0x0008 */
} INTERLOCK_SEQ, *PINTERLOCK_SEQ; /* size: 0x0008 */

