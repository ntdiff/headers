typedef struct _EVENT_ENTRY_LOOKUP_TABLE
{
  /* 0x0000 */ struct _EVENT_ENTRY* EntryBuckets[32];
  /* 0x0100 */ unsigned long NumEventEntries;
  /* 0x0104 */ unsigned long NextBucketToFlush;
} EVENT_ENTRY_LOOKUP_TABLE, *PEVENT_ENTRY_LOOKUP_TABLE; /* size: 0x0108 */

