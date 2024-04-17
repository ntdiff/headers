struct tagMONHSZSTRUCTA
{
  /* 0x0000 */ unsigned int cb;
  /* 0x0004 */ int fsAction;
  /* 0x0008 */ unsigned long dwTime;
  /* 0x0010 */ struct HSZ__* hsz;
  /* 0x0018 */ void* hTask;
  /* 0x0020 */ char str[1];
  /* 0x0021 */ char __PADDING__[7];
}; /* size: 0x0028 */

