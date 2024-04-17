struct tagMONLINKSTRUCT
{
  /* 0x0000 */ unsigned int cb;
  /* 0x0004 */ unsigned long dwTime;
  /* 0x0008 */ void* hTask;
  /* 0x000c */ int fEstablished;
  /* 0x0010 */ int fNoData;
  /* 0x0014 */ struct HSZ__* hszSvc;
  /* 0x0018 */ struct HSZ__* hszTopic;
  /* 0x001c */ struct HSZ__* hszItem;
  /* 0x0020 */ unsigned int wFmt;
  /* 0x0024 */ int fServer;
  /* 0x0028 */ struct HCONV__* hConvServer;
  /* 0x002c */ struct HCONV__* hConvClient;
}; /* size: 0x0030 */

