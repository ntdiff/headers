struct KSEVENT_ITEM
{
  /* 0x0000 */ unsigned long EventId;
  /* 0x0004 */ unsigned long DataInput;
  /* 0x0008 */ unsigned long ExtraEntryData;
  /* 0x0010 */ void* AddHandler /* function */;
  /* 0x0018 */ void* RemoveHandler /* function */;
  /* 0x0020 */ void* SupportHandler /* function */;
}; /* size: 0x0028 */

