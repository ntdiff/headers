typedef struct _NDIS_OID_REQUEST_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Completed : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long FreeRequest : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long OidInTable : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long SignalEvent : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long CoNdis : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned long FromProtocol : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned long FromFilter : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned long Passthrough : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned long LastRestoreFilter : 1; /* bit position: 8 */
    /* 0x0000 */ unsigned long OnlyDerefOpen : 1; /* bit position: 9 */
    /* 0x0000 */ unsigned long SignalAndExit : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned long MpSaveBuf : 1; /* bit position: 11 */
    /* 0x0000 */ unsigned long Reserved2 : 1; /* bit position: 12 */
    /* 0x0000 */ unsigned long DownLevel : 1; /* bit position: 13 */
    /* 0x0000 */ unsigned long Cloned : 1; /* bit position: 14 */
    /* 0x0000 */ unsigned long Mandatory : 1; /* bit position: 15 */
    /* 0x0000 */ unsigned long SentToMiniport : 1; /* bit position: 16 */
    /* 0x0000 */ unsigned long SentToFilter : 1; /* bit position: 17 */
    /* 0x0000 */ unsigned long ForReset : 1; /* bit position: 18 */
    /* 0x0000 */ unsigned long ForRestore : 1; /* bit position: 19 */
    /* 0x0000 */ unsigned long ForMpDirect : 1; /* bit position: 20 */
    /* 0x0000 */ unsigned long DirectRequest : 1; /* bit position: 21 */
    /* 0x0000 */ unsigned long RevisionChanged : 1; /* bit position: 22 */
    /* 0x0000 */ unsigned long SkipPreProc : 1; /* bit position: 23 */
    /* 0x0000 */ unsigned long SkipPostProc : 1; /* bit position: 24 */
    /* 0x0000 */ unsigned long SkipSourceCompletion : 1; /* bit position: 25 */
    /* 0x0000 */ unsigned long SourceCompletionOnly : 1; /* bit position: 26 */
    /* 0x0000 */ unsigned long Remainder : 5; /* bit position: 27 */
  }; /* bitfield */
} NDIS_OID_REQUEST_FLAGS, *PNDIS_OID_REQUEST_FLAGS; /* size: 0x0004 */

