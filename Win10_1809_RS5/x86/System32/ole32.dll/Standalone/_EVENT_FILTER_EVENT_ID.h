typedef struct _EVENT_FILTER_EVENT_ID
{
  /* 0x0000 */ unsigned char FilterIn;
  /* 0x0001 */ unsigned char Reserved;
  /* 0x0002 */ unsigned short Count;
  /* 0x0004 */ unsigned short Events[1];
} EVENT_FILTER_EVENT_ID, *PEVENT_FILTER_EVENT_ID; /* size: 0x0006 */

