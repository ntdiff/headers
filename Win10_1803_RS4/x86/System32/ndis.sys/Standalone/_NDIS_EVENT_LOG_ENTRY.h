typedef struct _NDIS_EVENT_LOG_ENTRY
{
  /* 0x0000 */ unsigned short EventId;
  union
  {
    struct /* bitfield */
    {
      /* 0x0002 */ unsigned short Timestamp : 15; /* bit position: 0 */
      /* 0x0002 */ unsigned short TimestampScale : 1; /* bit position: 15 */
    }; /* bitfield */
    /* 0x0002 */ unsigned short TimestampValue;
  }; /* size: 0x0002 */
  /* 0x0004 */ unsigned long StackTrace;
  /* 0x0008 */ void* Context;
} NDIS_EVENT_LOG_ENTRY, *PNDIS_EVENT_LOG_ENTRY; /* size: 0x000c */

