typedef struct _KGDTENTRY
{
  /* 0x0000 */ unsigned short LimitLow;
  /* 0x0002 */ unsigned short BaseLow;
  union
  {
    union
    {
      struct
      {
        /* 0x0004 */ unsigned char BaseMid;
        /* 0x0005 */ unsigned char Flags1;
        /* 0x0006 */ unsigned char Flags2;
        /* 0x0007 */ unsigned char BaseHi;
      } /* size: 0x0004 */ Bytes;
      struct
      {
        struct /* bitfield */
        {
          /* 0x0004 */ unsigned long BaseMid : 8; /* bit position: 0 */
          /* 0x0004 */ unsigned long Type : 5; /* bit position: 8 */
          /* 0x0004 */ unsigned long Dpl : 2; /* bit position: 13 */
          /* 0x0004 */ unsigned long Pres : 1; /* bit position: 15 */
          /* 0x0004 */ unsigned long LimitHi : 4; /* bit position: 16 */
          /* 0x0004 */ unsigned long Sys : 1; /* bit position: 20 */
          /* 0x0004 */ unsigned long Reserved_0 : 1; /* bit position: 21 */
          /* 0x0004 */ unsigned long Default_Big : 1; /* bit position: 22 */
          /* 0x0004 */ unsigned long Granularity : 1; /* bit position: 23 */
          /* 0x0004 */ unsigned long BaseHi : 8; /* bit position: 24 */
        }; /* bitfield */
      } /* size: 0x0004 */ Bits;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ HighWord;
} KGDTENTRY, *PKGDTENTRY; /* size: 0x0008 */

