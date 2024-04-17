struct tagMainHeader
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long Version;
  /* 0x0008 */ unsigned long cPolicies;
  /* 0x000c */ unsigned long cbBuffer;
  /* 0x0010 */ unsigned long cbSize;
  /* 0x0014 */ long hr;
  /* 0x0018 */ long hrServer;
  /* 0x001c */ long reserved;
}; /* size: 0x0020 */

