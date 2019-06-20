typedef union _WHEA_EVENT_LOG_ENTRY_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long LogTelemetry : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long LogInternalEtw : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long LogBlackbox : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long LogSel : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long RawSel : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long NoFormat : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned long Driver : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned long Reserved : 25; /* bit position: 7 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_EVENT_LOG_ENTRY_FLAGS, *PWHEA_EVENT_LOG_ENTRY_FLAGS; /* size: 0x0004 */

