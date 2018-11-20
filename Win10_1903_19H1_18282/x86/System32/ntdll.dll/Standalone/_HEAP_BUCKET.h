typedef struct _HEAP_BUCKET
{
  /* 0x0000 */ unsigned short BlockUnits;
  /* 0x0002 */ unsigned char SizeIndex;
  union
  {
    struct /* bitfield */
    {
      /* 0x0003 */ unsigned char UseAffinity : 1; /* bit position: 0 */
      /* 0x0003 */ unsigned char DebugFlags : 2; /* bit position: 1 */
    }; /* bitfield */
    /* 0x0003 */ volatile unsigned char Flags;
  }; /* size: 0x0001 */
} HEAP_BUCKET, *PHEAP_BUCKET; /* size: 0x0004 */

