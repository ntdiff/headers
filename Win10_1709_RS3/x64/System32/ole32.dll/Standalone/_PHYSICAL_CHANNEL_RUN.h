typedef struct _PHYSICAL_CHANNEL_RUN
{
  /* 0x0000 */ unsigned long NodeNumber;
  /* 0x0004 */ unsigned long ChannelNumber;
  /* 0x0008 */ unsigned __int64 BasePage;
  /* 0x0010 */ unsigned __int64 PageCount;
  /* 0x0018 */ unsigned __int64 Flags;
} PHYSICAL_CHANNEL_RUN, *PPHYSICAL_CHANNEL_RUN; /* size: 0x0020 */

