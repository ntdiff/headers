struct KSEVENT_SET
{
  /* 0x0000 */ const struct _GUID* Set;
  /* 0x0004 */ unsigned long EventsCount;
  /* 0x0008 */ const struct KSEVENT_ITEM* EventItem;
}; /* size: 0x000c */

