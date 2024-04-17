struct tagMONCONVSTRUCT
{
  /* 0x0000 */ unsigned int cb;
  /* 0x0004 */ int fConnect;
  /* 0x0008 */ unsigned long dwTime;
  /* 0x0010 */ void* hTask;
  /* 0x0018 */ struct HSZ__* hszSvc;
  /* 0x0020 */ struct HSZ__* hszTopic;
  /* 0x0028 */ struct HCONV__* hConvClient;
  /* 0x0030 */ struct HCONV__* hConvServer;
}; /* size: 0x0038 */

