struct tagMONLINKSTRUCT
{
  /* 0x0000 */ unsigned int cb;
  /* 0x0004 */ unsigned long dwTime;
  /* 0x0008 */ void* hTask;
  /* 0x0010 */ int fEstablished;
  /* 0x0014 */ int fNoData;
  /* 0x0018 */ struct HSZ__* hszSvc;
  /* 0x0020 */ struct HSZ__* hszTopic;
  /* 0x0028 */ struct HSZ__* hszItem;
  /* 0x0030 */ unsigned int wFmt;
  /* 0x0034 */ int fServer;
  /* 0x0038 */ struct HCONV__* hConvServer;
  /* 0x0040 */ struct HCONV__* hConvClient;
}; /* size: 0x0048 */

