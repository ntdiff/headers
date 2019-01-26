typedef struct _EVENT_FILTER_LEVEL_KW
{
  /* 0x0000 */ unsigned __int64 MatchAnyKeyword;
  /* 0x0008 */ unsigned __int64 MatchAllKeyword;
  /* 0x0010 */ unsigned char Level;
  /* 0x0011 */ unsigned char FilterIn;
  /* 0x0012 */ char __PADDING__[6];
} EVENT_FILTER_LEVEL_KW, *PEVENT_FILTER_LEVEL_KW; /* size: 0x0018 */

