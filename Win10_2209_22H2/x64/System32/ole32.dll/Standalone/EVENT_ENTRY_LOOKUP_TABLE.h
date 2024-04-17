struct EVENT_ENTRY_LOOKUP_TABLE
{
  /* 0x0000 */ struct EVENT_ENTRY* EntryBuckets[32];
  /* 0x0100 */ unsigned long NumEventEntries;
  /* 0x0104 */ unsigned long NextBucketToFlush;
}; /* size: 0x0108 */

