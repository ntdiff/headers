struct tagMONHSZSTRUCTA
{
  /* 0x0000 */ unsigned int cb;
  /* 0x0004 */ int fsAction;
  /* 0x0008 */ unsigned long dwTime;
  /* 0x000c */ struct HSZ__* hsz;
  /* 0x0010 */ void* hTask;
  /* 0x0014 */ char str[1];
  /* 0x0015 */ char __PADDING__[3];
}; /* size: 0x0018 */

