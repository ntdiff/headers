struct midievent_tag
{
  /* 0x0000 */ unsigned long dwDeltaTime;
  /* 0x0004 */ unsigned long dwStreamID;
  /* 0x0008 */ unsigned long dwEvent;
  /* 0x000c */ unsigned long dwParms[1];
}; /* size: 0x0010 */

