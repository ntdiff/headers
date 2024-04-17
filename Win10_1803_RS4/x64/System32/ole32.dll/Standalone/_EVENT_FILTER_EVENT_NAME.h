typedef struct _EVENT_FILTER_EVENT_NAME
{
  /* 0x0000 */ unsigned __int64 MatchAnyKeyword;
  /* 0x0008 */ unsigned __int64 MatchAllKeyword;
  /* 0x0010 */ unsigned char Level;
  /* 0x0011 */ unsigned char FilterIn;
  /* 0x0012 */ unsigned short NameCount;
  /* 0x0014 */ unsigned char Names[1];
  /* 0x0015 */ char __PADDING__[3];
} EVENT_FILTER_EVENT_NAME, *PEVENT_FILTER_EVENT_NAME; /* size: 0x0018 */

