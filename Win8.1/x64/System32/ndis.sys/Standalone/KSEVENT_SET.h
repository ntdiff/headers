struct KSEVENT_SET
{
  /* 0x0000 */ const struct _GUID* Set;
  /* 0x0008 */ unsigned long EventsCount;
  /* 0x0010 */ const struct KSEVENT_ITEM* EventItem;
}; /* size: 0x0018 */

