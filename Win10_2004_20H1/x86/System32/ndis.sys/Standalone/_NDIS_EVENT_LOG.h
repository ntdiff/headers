typedef struct _NDIS_EVENT_LOG
{
  /* 0x0000 */ unsigned __int64 LastEventTime;
  /* 0x0008 */ unsigned long LastUsedEntry;
  /* 0x000c */ unsigned long NumEntries;
  /* 0x0010 */ unsigned long Lock;
  /* 0x0014 */ unsigned short Flags;
  /* 0x0016 */ unsigned short EntrySize;
} NDIS_EVENT_LOG, *PNDIS_EVENT_LOG; /* size: 0x0018 */

