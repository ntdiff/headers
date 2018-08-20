typedef struct _SEGMENT_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 TotalNumberOfPtes4132 : 10; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 ExtraSharedWowSubsections : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 LargePages : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned __int64 WatchProto : 1; /* bit position: 12 */
    /* 0x0000 */ unsigned __int64 DebugSymbolsLoaded : 1; /* bit position: 13 */
    /* 0x0000 */ unsigned __int64 WriteCombined : 1; /* bit position: 14 */
    /* 0x0000 */ unsigned __int64 NoCache : 1; /* bit position: 15 */
    /* 0x0000 */ unsigned __int64 FloppyMedia : 1; /* bit position: 16 */
    /* 0x0000 */ unsigned __int64 DefaultProtectionMask : 5; /* bit position: 17 */
    /* 0x0000 */ unsigned __int64 ContainsPxeSubsection : 1; /* bit position: 22 */
    /* 0x0000 */ unsigned __int64 Spare : 40; /* bit position: 23 */
    /* 0x0000 */ unsigned __int64 Binary32 : 1; /* bit position: 63 */
  }; /* bitfield */
} SEGMENT_FLAGS, *PSEGMENT_FLAGS; /* size: 0x0008 */

