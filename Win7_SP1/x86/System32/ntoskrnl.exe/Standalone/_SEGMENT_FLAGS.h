typedef struct _SEGMENT_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long TotalNumberOfPtes4132 : 10; /* bit position: 0 */
    /* 0x0000 */ unsigned long ExtraSharedWowSubsections : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned long LargePages : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned long WatchProto : 1; /* bit position: 12 */
    /* 0x0000 */ unsigned long DebugSymbolsLoaded : 1; /* bit position: 13 */
    /* 0x0000 */ unsigned long WriteCombined : 1; /* bit position: 14 */
    /* 0x0000 */ unsigned long NoCache : 1; /* bit position: 15 */
    /* 0x0000 */ unsigned long FloppyMedia : 1; /* bit position: 16 */
    /* 0x0000 */ unsigned long DefaultProtectionMask : 5; /* bit position: 17 */
    /* 0x0000 */ unsigned long Binary32 : 1; /* bit position: 22 */
    /* 0x0000 */ unsigned long ContainsDebug : 1; /* bit position: 23 */
    /* 0x0000 */ unsigned long Spare : 8; /* bit position: 24 */
  }; /* bitfield */
} SEGMENT_FLAGS, *PSEGMENT_FLAGS; /* size: 0x0004 */

