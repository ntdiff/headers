typedef struct _SEGMENT_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned short TotalNumberOfPtes4132 : 10; /* bit position: 0 */
      /* 0x0000 */ unsigned short Spare0 : 2; /* bit position: 10 */
      /* 0x0000 */ unsigned short LargePages : 1; /* bit position: 12 */
      /* 0x0000 */ unsigned short DebugSymbolsLoaded : 1; /* bit position: 13 */
      /* 0x0000 */ unsigned short WriteCombined : 1; /* bit position: 14 */
      /* 0x0000 */ unsigned short NoCache : 1; /* bit position: 15 */
    }; /* bitfield */
    /* 0x0000 */ unsigned short Short0;
  }; /* size: 0x0002 */
  union
  {
    struct /* bitfield */
    {
      /* 0x0002 */ unsigned char Unused : 1; /* bit position: 0 */
      /* 0x0002 */ unsigned char DefaultProtectionMask : 5; /* bit position: 1 */
      /* 0x0002 */ unsigned char Binary32 : 1; /* bit position: 6 */
      /* 0x0002 */ unsigned char ContainsDebug : 1; /* bit position: 7 */
    }; /* bitfield */
    /* 0x0002 */ unsigned char UChar1;
  }; /* size: 0x0001 */
  union
  {
    struct /* bitfield */
    {
      /* 0x0003 */ unsigned char ForceCollision : 1; /* bit position: 0 */
      /* 0x0003 */ unsigned char ImageSigningType : 3; /* bit position: 1 */
      /* 0x0003 */ unsigned char ImageSigningLevel : 4; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0003 */ unsigned char UChar2;
  }; /* size: 0x0001 */
} SEGMENT_FLAGS, *PSEGMENT_FLAGS; /* size: 0x0004 */

